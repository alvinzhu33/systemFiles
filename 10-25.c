#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int create(char path[256]){
  return open(path, O_CREAT, 0666);
}

int main(){
  create("hello.txt");
  create("../hello.txt");
  return 0;
}
