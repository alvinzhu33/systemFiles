#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char str[]){
  //can pass pass char *str instead of char str[].
  //if so, can get rid of *cp and put *str in the while loop
  int i=0;
  char *cp = str;

  while(*cp){
    i++;
    cp++;
  }

  /* OR (less C)
  while(test[i]!=0){
    i++;
  }
  */

  return i;
}

int main(){
  char test[200]="this is a test";

  printf("Length of [%s]: %d\n", test, len(test));

  //strcpy OR strncpy
  char src[200] = "111111111111111111111111";
  char src2[200] = "2222222222222";
  char cpy[200];
  char ncpy[200];
  printf("%s\n",strcpy(cpy, src));
  printf("%s\n\n",strcpy(cpy, src2));
  
  printf("%s\n",strncpy(ncpy, src, 9));
  printf("%s\n",strcpy(ncpy, src2));
  printf("%s\n",strncpy(ncpy, src, 8));
  
  return 0;
}
