#include <stdio.h>
#include <unistd.h>

int main ()
{
    pid_t pid;

    printf("Before fork, pid = %d, pid of parent = %d\n\n", getpid(),getppid());


    if((pid = fork()) < 0)
    {
        //error
        printf("Error during the fork");
    }
    else if (pid == 0)
    {
        //child
        printf("[Child] Value of fork = %d\n", pid);
        printf("[Child] pid = %d, pid of parent = %d\n\n", getpid(), getppid());

    }
    else
    {
        //parent
        printf("[Parent] Value of fork = %d\n", pid);
        printf("[Parent] pid = %d, pid of my parent = %d\n",getpid(), getppid());
        printf("[Parent] My child has pid = %d\n\n", pid);

    }
    return 0;

}
/*
 *
 * OUTPUT
 * Before fork, pid = 10213, pid of parent = 8009
 *
 * [Parent] Value of fork = 10216
 * [Parent] pid = 10213, pid of my parent = 8009
 * [Parent] My child has pid = 10216
 *
 * [Child] Value of fork = 0
 * [Child] pid = 10216, pid of parent = 1766
*/
