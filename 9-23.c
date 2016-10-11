#include <stdio.h>
#include <stdlib.h>

int main(){
  char s[15];
  s[0] = 'c';
  s[1] = 65;
  s[2] = 't';
  s[3] = 0;
  s[4] = 's';
  
  s[0] --;

  printf("Array: %s\n", s);
  //junk prints out if s isn't initialized
  printf("Size of s: %lu\n", sizeof(s));

  char s2[] = "Hello";

  printf("s2: %s\n", s2);
  printf("size of s2: %lu\n", sizeof(s2));

  s2[0] = 'j';
  printf("%s\n", s2);
  return 0;
}
