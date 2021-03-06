#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]){
  int i, n;
  n = atoi(argv[1]);

  fprintf(stdout, "Father PID=%d\n", getpid());
  for(i=0; i<n; i++)
    if(fork() == 0){
      fprintf(stdout, "Child %d: PID=%d\n", i+1, getpid());
      break;
    }

  return 0;
}
