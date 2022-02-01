#include<stdio.h>
#include<unistd.h>

int main(){

    int pid, pid1, pid2;
    
    pid = fork();

    if(pid == -1)
      printf("Error while creating the process\n");

    if(pid != 0) {
      pid1 = getpid();
      printf("\n Parent Process ID: %d\n", pid1);
    }
    else {
      pid2 = getpid();
      printf("\n Child Process ID: %d\n", pid2);
    }

    return 0;
}
