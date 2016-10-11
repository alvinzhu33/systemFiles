#include <stdio.h>
#include <stdlib.h>

int main(){
  int x = 81;
  float y = 9.4;

  int arr[5];
  printf("hello, world! %d \n", x);

  int i;
  for(i = 0 ; i<5; i++){
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  printf("\n");
  for(i = 0 ; i<8; i++){
    printf("arr[%d] = %d\n", i, arr[i]);
  }
}
