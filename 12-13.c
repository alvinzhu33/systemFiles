#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
  mkfifo("mario", 0644);

  int fd = open("mario", 0_WRONLY);
  printf("Connected\n");
  
  write(fd, "hello there\n", 13);

  return 0;
}
