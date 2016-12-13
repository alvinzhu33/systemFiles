#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  int fds[2];
  pipe(fds);
  int f = fork();
  if(f==0){
    printf("[child] listening...\n");
    close(fd[1]);
    
    char s[20];
    read(fds[0], s, sizeof(s));
    printf("[child] got: %s\n", s);
  }else{
    close(fd[0]);
    
    printf("[parent] sleeping...\n");
    sleep(5);
    write(fds[1], "ello ere", 12);
  }
  return 0;
}
