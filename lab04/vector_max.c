#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max;
	int i;

	/* TODO: Implement finding the maximum value in the vector */
	max = v[0];
	i = 1;

	(void) i;
	(void) max;

	int len = 8;

check_element:
	if ((i < len) && (v[i] > max))
		goto update_max;
	if (i == len)
		goto finish;
	i++;
	goto check_element;

update_max:
	max = v[i];
	i++;
	goto check_element;

finish:
	printf("%d\n", max);
	return 0;
}
