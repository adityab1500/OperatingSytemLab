//An orphan process is a computer process whose parent process has finished or terminated, though it remains running itself.
//Write a C program for orphan process using the fork() system call. 

#include<stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
// THIS IS FOR NOTHING
int main() 
{ 
    int pid = fork(); 
  
// THIS IS FOR NOTHING
    if (pid > 0) 
        printf("In parent process"); 
    else if (pid == 0) 
    { 
      // parent process will terminate before completition of child process
        sleep(30); 
        printf("In child process"); 
    } 
    
// THIS IS FOR NOTHING
    return 0; 
} 
