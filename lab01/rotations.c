#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void rotate_left(int *number, int bits)
{
	
	(void) number;
	(void) bits;
	int mask = 0;
	for (int i = 0; i < bits; i++) {
		mask += 1 << (31 - i);
	}
	int x = mask & (*number);
	x = x >> (32 - bits);
	*number = (*number) << bits;
	*number += x;
}

void rotate_right(int *number, int bits)
{

	(void) number;
	(void) bits;
	int mask = 0;
	for (int i = 0; i < bits; i++) {
		mask += 1 << i;
	}
	int x = mask & (*number);
	x = x << (32 - bits);
	*number = (*number) >> bits;
	*number += x;

}

int main()
{
	char *mode = malloc(50);
	int *number, bits;
	scanf("%s %d %d", mode, number, &bits);
	
	if (!(strcmp(mode, "left"))){
		rotate_left(number, bits);
		printf("Rotated to the left: %d\n", *number);
	}

	if (!(strcmp(mode, "right"))) {
		rotate_right(number, bits);
		printf("Rotated to the right: %d\n", *number);
	}
	
	free(mode);
	return 0;
}

