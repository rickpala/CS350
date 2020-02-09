#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reality_1_example_1();
void reality_1_example_2();
void reality_3();
double fun();

typedef struct {
  int a[2];
  double d;
} struct_t;

int main(int argc,char **argv) {
  int n;			/* used to loop for reality_3() */
  printf("\n");
  reality_1_example_1();
  reality_1_example_2();

  if (argc==1) {
      n = 5;
  }		/* default 5 iter */
  else {
      n = atoi(argv[1]);
  }
  reality_3(n);

  return 0;
}

void reality_1_example_1(){
  float f=50000;
  int i=40000;

  /* fill here */
  float fProduct = f*f;
  printf("reality_1_example_1_float: %f\n", f);
  printf("f*f=%f >= 0\n", fProduct);
  printf("\n");

  int iProduct = i*i;
  printf("reality_1_example_1_int: %d\n", i);
  printf("i*i=%d >= 0\n", iProduct);
  printf("\n");

  i=50000;

  /* fill here */
  iProduct = i*i;
  printf("reality_1_example_1_int: %d\n", i);
  printf("i*i=%d < 0\n", iProduct);
  printf("\n");
}

void reality_1_example_2(){
  float fx=1e20,fy=-1e20,fz=3.14;
  unsigned int uix=12,uiy=34,uiz=56;
  int six=12,siy=34,siz=56;

  /* fill here */
  //unsigned
  printf("reality_1_example_2_unsigned: uix=%d, uiy=%d, uiz=%d\n", uix, uiy, uiz);
  printf("(uix + uiy) + uiz = %d", ((uix+uiy) + uiz));
  printf(" == ");
  printf("(uix + (uiy+uiz)) = %d\n", (uix + (uiy + uiz)));
  printf("\n");

  //signed
  printf("reality_1_example_2_signed: six=%d, siy=%d, siz=%d\n", six, siy, siz);
  printf("((six+siy) + siz) = %d", ((six+siy) + siz));
  printf(" == ");
  printf("(six + (siy+siz)) = %d\n", (six + (siy + siz)));
  printf("\n");

  //float
  printf("reality_1_example_2_float: fx=%+.000000e, fy=%+.000000e, fz=%+.000000e\n", fx, fy, fz);
  printf("((fx+fy) + fz) = %+.000000e", ((fx+fy) + fz));
  printf(" != ");
  printf("(fx + (fy+fz)) = %+.0e\n", (fx + (fy + fz)));
  printf("\n");

}

void reality_3(int n) {
  double d;
  int i;

  /* fill here */
  printf("reality_3: n=%d iterations\n", n);
  for (i = 0; i < n; i++){
      fun(i);
  }
}

double fun(int i){
  volatile struct_t s;

  s.d = 3.14;
  s.a[i] = 1073741824;
  printf("fun(%d) -> %f\n",i,s.d);

  return s.d;
}

/* End of file */
