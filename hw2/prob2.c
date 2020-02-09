//Ricky Palaguachi
//CS 350
//Problem 2
//
//prob2.c

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printVals(long* vals){
    //Print hex representation
    printf("\t%#*hhx\t", 2, vals[0]);
    printf("\t%#*hx\t", 4, vals[1]);
    printf("\t%#*x\t", 8, vals[2]);
    printf("\t%#*lx\t", 16, vals[3]);
    printf("\n");

    //Print decimal representation
    if (vals[0] != -1 && vals[0] != 0){
        printf("       \t  %*u\t", 2, vals[0]);
        printf("       \t  %*u\t", 4, vals[1]);
        printf("       \t  %*u\t", 8, vals[2]);
        printf("       \t  %*lu\t", 16, vals[3]);
        printf("\n");
    }

    //Visually separate rows
    printf("\n------------------------");
    printf("--------------------------");
    printf("--------------------------");
    printf("--------------------------\n");
}

int main() {
    //Print UMax Row
    printf("UMax_w\t");
    long unsignedVals[] = {UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX};
    printVals(unsignedVals);

  	//Print TMin Row
    printf("TMin_w\t");
    long signedMins[] = {CHAR_MIN, SHRT_MIN, INT_MIN, LONG_MIN};
    printVals(signedMins);

  	//Print TMax Row
    printf("TMax_w\t");
    long signedMaxs[] = {CHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX};
    printVals(signedMaxs);

  	//Print -1 Row
    printf("    -1\t");
    long negOnes[] = {-1, -1, -1, -1};
    printVals(negOnes);

  	//Print 0 Row
    printf("     0\t");
    long zeros[] = {0, 0, 0, 0};
    printVals(zeros);

    return 0;
}
