//Ricky Palaguachi
//CS 350
//Problem 2
//
//prob4.c

#include <limits.h>
#include <stdio.h>

int main() {
    int arr1[] = {0, -1, -1, 2147483647, 2147483647U, -1, -1U, 2147483647, 2147483647};
    int arr2[] = {0U, 0, 0U, -2147483648, -2147483648, -2, -2, 2147483648U, (int) 2147483648U};
    for (int i = 0; i < 9; i++){
        int a = arr1[i];
        int b = arr2[i];
        //Equal to
        if (a == b){
            printf("%d\t%d\t==\n", a, b);

        }
        //Greater than
        if (a > b){
            printf("%d\t%d\t>\n", a, b);

        }
        //Less than
        if (a < b){
            printf("%d\t%d\t>\n", a, b);

        }
    }
    return 0;
}
