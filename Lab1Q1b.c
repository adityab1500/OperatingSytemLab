//Implement the fork() system call and print the parent and child ID in C

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
	int pid;
    pid = fork(); 
  
  	if (pid == 0) {/* child process */
     printf("CHILD: id = %d", getpid()); /* LINE C */
  }
  
    else if (pid > 0) { /* parent provess */
     printf("PARENT: id = %d ", getpid()); /* LINE P */
  }
    return 0; 
}
