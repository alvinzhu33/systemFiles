#include <stdio.h>
#include <stdlib.h>

/* Method 1
void hello(){
  printf("Hello World!!!\n");
  }*/

/* Method 2A (parameter doesn't need name)
   void hello(int);*/

// Method 2B
void hello(int *);

int main(){
  int i=4;
  //for Method 2B
  hello(&i);

  printf("i: %d\n",i);
  return 0;
  //A why n=0 and i=4 because it's like a stack, n is being changed not i 
}

/* Method 2A continued (n and i different)
void hello(int n){
  while(n){
    printf("Hello World!!!\n");
    n--;
  }
  printf("n: %d\n",n);
  }*/

// Method 2B continued (n and i the same)
void hello(int *n){
  while(*n){
    printf("Hello World!!!\n");
    (*n)--;
  }
  printf("*n: %d\n",*n);
}
