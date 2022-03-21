#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};


    int ctr = sizeof(v);

// parcurgere octet cu octet
    printf("\nParcurgere octet cu octet\n");
    unsigned char *char_ptr1 = v;
    for (int i = 0; i < ctr / sizeof(unsigned char); i++) {
        printf("%p -> 0x%x\n", char_ptr1, *char_ptr1);
        char_ptr1++;
    }

// parcurgere din 2 in 2 octeti
    printf("\nParcurgere din 2 in 2 octeti\n");
    unsigned short int *char_ptr2 = v;
    for (int i = 0; i < ctr / sizeof(unsigned short int); i++) {
        printf("%p -> 0x%x\n", char_ptr2, *char_ptr2);
        char_ptr2++;
    }

// parcurgere din 4 in 4 octeti
    printf("\nParcurgere din 4 in 4 octeti\n");
    int *char_ptr3 = v;
    for (int i = 0; i < ctr / sizeof(int); i++) {
        printf("%p -> 0x%x\n", char_ptr3, *char_ptr3);
        char_ptr3++;
    }

    return 0;
}
