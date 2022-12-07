#include <stdio.h>

int main () {

    // 1 Int takes 4 bytes = 4*8 = 32 bits, in C.
    int arr[10];
    char *ref;
    arr[0] = 97;   // Binary Representation of 97 -> 0000 0000 | 0000 0000 | 0000 0000 | 0110 0001
    arr[1] = 98;   // Binary Representation of 97 -> 0000 0000 | 0000 0000 | 0000 0000 | 0110 0010
    arr[2] = 99;   // Binary Representation of 97 -> 0000 0000 | 0000 0000 | 0000 0011 | 0101 0010 [ 0 | 0 | 3 | 82 ] = 850
    arr[3] = 100;  // Binary Representation of 97 -> 0000 0000 | 0000 0000 | 0000 0000 | 0110 0100
    //arr[4] = 0;
    arr[4] = 256; // Binary Representation of 256 -> 0000 0000 | 0000 0000 | 0000 0001 | 0000 0000
    
    // 1 Char takes 1 bytes = 8 bits, in C.
    // Here we are type casting int to char i.e 4 byte of integer to 1 byte of character.
    ref = (char *) arr; 

    // Output: 
    int i = 0;
    while ( *(ref + sizeof(int)*i) ) {
        printf ("value: %c, integer value: %d\n", *(ref + i*sizeof(int)), *(ref + i*sizeof(int)) );
        i += 1;
    }

    // printf("value: %c, integer value: %d\n", *(ref + 0), *(ref + 0));
    // printf("value: %c, integer value: %d\n", *(ref + 1), *(ref + 1));
    // printf("value: %c, integer value: %d\n", *(ref + 2), *(ref + 2));
    // printf("value: %c, integer value: %d\n", *(ref + 3), *(ref + 3));
    // printf("\n");
    // printf("value: %c, integer value: %d\n", *(ref + 4), *(ref + 4));
    // printf("value: %c, integer value: %d\n", *(ref + 5), *(ref + 5));
    // printf("value: %c, integer value: %d\n", *(ref + 6), *(ref + 6));
    // printf("value: %c, integer value: %d\n", *(ref + 7), *(ref + 7));
    // printf("\n");
    // printf("value: %c, integer value: %d\n", *(ref + 8), *(ref + 8));
    // printf("value: %c, integer value: %d\n", *(ref + 9), *(ref + 9));
    // printf("value: %c, integer value: %d\n", *(ref + 10), *(ref + 10));
    // printf("value: %c, integer value: %d\n", *(ref + 11), *(ref + 11));
    // printf("\n");
    // printf("value: %c, integer value: %d\n", *(ref + 12), *(ref + 12));
    // printf("value: %c, integer value: %d\n", *(ref + 13), *(ref + 13));
    // printf("value: %c, integer value: %d\n", *(ref + 14), *(ref + 14));
    // printf("value: %c, integer value: %d\n", *(ref + 15), *(ref + 15));

    // ======== My system is little endiann. ============================

}