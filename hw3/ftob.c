/* Print a float in binary: ftob.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void float_to_string(float f, char *s, int n);
void float_to_string(float,char *,int);
void print_float();

#define LEN 32
#define EXP_32 8		/* ending index of s for exponent */
#define MAN_32 9		/* starting index of s for significand */

int main(int argc, char **argv) {
  int n=LEN;
  float f;
  char s[LEN];

  f = atof(argv[1]);
  printf("f=%f\n",f);
  
  float_to_string(f,s,n);
  print_float(s,n);

  return 0;
}

/* convert float to binary and store in s, a string of 32 chars */
void float_to_string(float f, char *s, int n){
  /* fill here */
  //create union structure to represent bits of float 'f'  
  union {
    float u_float;
    unsigned int u_int;
  } bit;
  bit.u_float = f;

  unsigned int temp = bit.u_int;
  for (int i = 0; i < n; i++){
      //populate an array of 1s and 0s from the bits of 'temp'
      s[i] = (char) (temp & 0x1);
      temp = temp >> 1;
  }

}

/* print space in between sign bit, exponent, and significand */
void print_float(char *s, int n) {

  /* fill here */
  //print array of bits in reverse order (really, standard order)
  for(int i = n-1; i >= 0; i--){
      printf("%d", s[i]);
      //format spaces for exponent and mantissa
      if (i == 23 || i == 31){
          printf(" ");
      }
  }
  printf("\n");
}

/* End of ftob.c */
