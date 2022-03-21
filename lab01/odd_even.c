#include <stdio.h>
#include <stdlib.h>

void print_binary(int number, int nr_bits)
{
	
	(void) number;
	(void) nr_bits;
	int mask = 1 << 31;
	for (int i = 0; i < nr_bits; i++) {
		if (mask & number) {
			printf("1");
		} else {
			printf("0");
		}
		mask = mask >> 1;
	}
	printf("\n");
}

void check_parity(int *numbers, int n)
{
	(void) numbers;
	(void) n;
	for (int i = 0; i < n; i++) {
		if ((*(numbers + i)) & 1) {
			printf("%x\n", *(numbers + i));
		} else {
			print_binary(*(numbers + i), 32);
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int *numbers = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", numbers + i);
	}
	check_parity(numbers, n);

	free(numbers);
	return 0;
}

