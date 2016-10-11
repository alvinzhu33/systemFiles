#include <stdio.h>
#include <stdlib.h>

int main(){
  short s = 83;
  double darr[5];
  short *sp;
  
  printf("Size of double array: %lu\n",sizeof(darr));
  
  printf("Size of s: %lu\n",sizeof(s));
  printf("Value of s: %d\n",s);
  printf("Address of s: %ld\n\n", &s);

  printf("Size of sp: %ld\n",sizeof(sp));
  printf("Value of sp: %ld\n",sp);
  printf("Address of sp: %ld\n\n", &sp);

  return 0;
}
