#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(){
  int i=0;
  int status;
  int forker = fork();
  if(forker == 0){
    i = 10;
    printf("C: %d\n",i);
  }else{
    wait(&status);
    printf("P: %d\n",i);
  }
}
