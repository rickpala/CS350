#include <stdio.h>
#include <string.h>

int binToUnsigned(char num){
    char* s = sprintf("%d", num);

    char sum = 0;
    for(int i = 0; i < 8; i++){
        sum += s[i] >> i;
    }

    return sum;
}

int hexToBin(char num){
    char bits[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    char n = 0;
    while (num > 0){
        char r = num % 2;
        bits[n] = r;
        num /= 2;
        n++;
    }

    char s[8] = "";
    for(int i = 7; i >= 0; i--){
        s[7-i] = sprintf("%d ", bits[i]);
    }

    return atoi(s);
}

int main() {
    int n = 8;
    char inputs[] = {0x0A, 0x06, 0x14, 0x6b, 0x8a, 0x86, 0x94, 0xeb};

    for (int i = 0; i < n; i++){
        //Display regular decimal number
        int num = inputs[i];
        printf("Decimal:\t%d\n", inputs[i]);

        //Display binary equivalent
        int bin = hexToBin(inputs[i]);
        printf("%d", bin);
        printf("\n");

        //Display binary to unsigned
        int u = binToUnsigned(bin);


        printf("\n");
    }

    // printf("To Binary\n---------\n");




    return 0;
}
