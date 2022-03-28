#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = v[2]; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;

	/* TODO: Implement binary search */
	(void) dest;
	(void) start;
	(void) end;

	int poz;

check_element:
	poz = start + (end -1) / 2;
	if (v[poz] == dest)
		goto found;
	if (start == end)
		goto not_found;
	if (v[poz] < dest)
		goto check_right;
	if (v[poz] > dest)
		goto check_left;

check_right:
	start = poz + 1;
	goto check_element;

check_left:
	end = poz - 1;
	goto check_element;

found:
	printf("Element gasit\n");
	return 0;

not_found:
	printf("Elementul NU a fost gasit\n");
	return 0;
}
