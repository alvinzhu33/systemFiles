#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p;

  p = (int *)malloc(5 * sizeof(int));
  //OR calloc(5, sizeof(int));

  p[0] = 91823;
  printf("p[0]: %d\n", p[0]);

  int *np = p;
  p++;
  free(np);

  //struct {int a; char x[20];} s;
  //struct foo {int x; char a;} s2;
  //struct foo s3;
  struct foo {int x; char a;};
  struct foo s;
  struct foo s2;

  struct foo *q;
  q = (struct foo *)malloc(sizeof(struct foo));
  
  printf("size of s: %lu\n", sizeof(s));
  printf("size of s: %lu\n", sizeof(s2));

  s.x = 12345;
  printf("s.x: %d\n", s.x);

  (*q).x = 12345;
  printf("p->x: %d\n", q->x);
  // _->x and (*_).x are the same!

  return 0;
}
