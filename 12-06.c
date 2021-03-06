int main(){
  srand(time(NULL));
  int x = random() % 10 + 5;

  int smid = semget( ftok ("makefile", 22), 1, 0);
  printf("[%d] before access\n", getpid());

  struct sembuf sb;
  sb.sem_num = 0;
  sb.sem_flag = SEM_UNDO;
  sb.sem_op = -1;

  semop( semid, &sb, 1 );
  printf("[%d] I'm in\n", getpid());

  sleep(x);

  sb.sem_op = 1;
  semop( semid, &sb, 1 );

  printf("[%d] I'm done like srsly?", getpid());

  return 0;
}
