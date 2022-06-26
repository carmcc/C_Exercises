#include <stdio.h>
#include <unistd.h>
#define TRUE 1

int main ()
{
    while (TRUE)
    {
        if(fork() < 0)
            printf("error");
    }
    return 0;
}
