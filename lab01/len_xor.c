#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	
	(void) str;
	int len = 0;
	while (((*str) ^ '\0')) {
		len++;
		str = str + 1;
	}
	return len;
	return -1;
}

void equality_check(const char *str)
{
	
	(void) str;
	int len = my_strlen(str);
	for (int i = 0; i < len; i++) {
		if (!((*(str + i)) ^ (*(str + (i + (1 << i)) % len)))) {
			printf("Adress of %c: %x\n", *(str + i), str + i);
		}
	}
}

int main(void)
{
	char *str = malloc(255);
	scanf("%s", str);
	printf("%d\n", my_strlen(str));

	equality_check(str);

	free(str);

	return 0;
}

