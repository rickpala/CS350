/* Print a float given its IEEE754 binary representation:
 *  btof.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  char *s = argv[1];
  
  //Determine E
  int sum = 0;

  for (int i = 0; i < 8; i++ ){
    sum += s[i+2] << (8 - i); //2^(8-i)*s[i+2]
  } 
  int E = sum - (1 << (31) - 1);
  printf("E: %d", E);

  //Determine M
  sum = 0;

  for (int i = 0; i < 23; i++){
      sum += s[i+10] << (23 - i);
  }  
  int M = sum;
  printf("M: %d", M);

  //Apply formula (-1)^S * 2^E * M;
  float v = (s[0] == 1)? -1*(1 << E)*M : (1 << E)*M;

  printf("%f", v);
  return 0;
}


