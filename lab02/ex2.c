#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern) {
	char *fo = strstr(s, pattern);
	int len_inc = fo - s;
	char new[100];
	strncpy(new, s, len_inc);
	strcat(new, fo + strlen(pattern));
	char *final = new;
	return final;
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";

	// Decomentati linia dupa ce ati implementat functia delete_first.
	printf("%s\n", delete_first(s, pattern));

	return 0;
}
