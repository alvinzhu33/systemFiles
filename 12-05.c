#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

union semun {
  int              val;    /* Value for SETVAL */
  struct semid_ds *buf;    /* Buffer for IPC_STAT, IPC_SET */
  unsigned short  *array;  /* Array for GETALL, SETALL */
  struct seminfo  *__buf;  /* Buffer for IPC_INFO*/
};

int main(int argc, char *argv[]){
  int semid;
  int key = ftok("makefile", 22);
  int sc;
    
  if( strncmp( argv[1], "-c", strlen(argv[1]) ) == 0){
    semid = semget(key, 1, IPC_CREAT | 0644);
    printf("Semaphore: %d\n", semid);

    if(semid >= 0){
      union semun su;
      su.val = 1;
      sc = semctl(semid, 0, SETVAL, su);
      printf("value set: %d\n", sc);

      //else if(strncmp(argv[1], "-v", strlen(argv[1])) == 0)
      //semid = semget(key, 1, 0)
      sc = semctl(semid, 0, GETVAL);
      printf("semaphore value: %d\n", sc);

      sc = semctl(semid, 0, IPC_RMID);
      printf("semaphore removed: %d\n", sc);
    }else{
      printf("semaphore already exists omg");
    }
  }
}
