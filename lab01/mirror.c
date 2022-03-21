#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{

	(void) s;
	int len = strlen(s);
	char aux;
	for (int i = 0; i < len / 2; i++) {
		aux = *(s + len - i - 1);
		*(s + len - i - 1) = *(s + i);
		*(s + i) = aux;
	}
}

int main()
{
	char *s = malloc(255);

	scanf("%s", s);
	mirror(s);
	printf("%s\n", s);

	free(s);
	return 0;
}

