#include <stdio.h>
#include <stdlib.h>

int main() {
  short s = 83;
  double darr[4];
  short *sp = &s;

  double *dp = darr;

  printf("Size of darr: %lu\n", sizeof(darr));
  printf("Value of darr: %p\n", darr);
  printf("Address of darr: %p\n", &darr);

  darr[0]=3.7;
  darr[1]=3.14;
  darr[2]=20.4;
  printf("darr[0]: %f\n", darr[0]);
  printf("*dp: %f\n", *dp);
  dp++;
  printf("*dp: %f\n",*dp);
  //*darr = darr[0]
  printf("*(dp+2): %f\n", *(dp+2));
  printf("2[darr]: %f\n", 2[darr]);

  return 0;
}
