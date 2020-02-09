//Ricky Palaguachi
//CS 350
//Problem 2
//
//prob3.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//takes an unsigned integer n and prints to console
//the 5-bit equivalent using bitwise logic and shifting
void bin(unsigned n) {
    unsigned i;
    for (i = 1 << 4; i > 0; i = i / 2) {
        (n & i) ? printf("1"): printf("0");
    }

    printf("\t");
}

int main() {
    printf("B\tU\tT\n");

    for (int i = 0x00; i < 0x20; i++){
        //first represent num in Binary
        bin(i);
        //then print unsigned (U)
        printf("%d\t", i);

        //then print signed (T)
        int hex = i >> 4; //either 0 or 1 on [0, 31]
        (hex == 0) ? printf("%d", i) : printf("%d", -16 + i % 16);

        //newline
        printf("\n");
    }

    return 0;
}
