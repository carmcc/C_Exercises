/**
* the method encode() receives as parameters
 * a char[], his dimension and a k int (not negative).
 * It replaces in the array every LOWERCASE letter of the alphabet, with his
 * following one ('z' will become 'a') if the lenght of k is even,
 * if the lenght of k is odd, replace with his previous one ('a' will become 'z')
 * Note! only LOWERCASE letters have to be replaced!
*/
#include "encode.h"
#define N 10

int main()
{
    char array [] = {'2','b','D','a','10','*','f','z','k','p'};
    int num;
    printf("\n Inserisci un intero: ");

    do
    {
        scanf("%d", &num);
    } while (num < 0);

    encode(array,N,num);

    for (int i = 0; i < N; ++i)
        printf("%c", array[i]);
    return 0;
}

void encode(char array[], int dim, int k)
{
    int len = 0;
    len = lenght(k);
    for (int i = 0; i < dim; ++i)
    {
        if(len % 2 == 0) // replace with +1 lowerscase letters
        {
            if(array[i] >= 'a' && array[i] <= 'z')
            {
                if (array[i] == 'z')
                    array[i] = 'a';
                else
                    array[i] = array[i] + 1;
            }
        }
        else // replace with -1 lowerscase letters
        {
            if(array[i] >= 'a' && array[i] <= 'z')
            {
                if (array[i] == 'a')
                    array[i] = 'z';
                else
                    array[i] = array[i] - 1;
            }
        }
    }
}

int lenght(int num)
{
    //k = 189, lenght = 3
    int counter = 0;
    if(num == 0)
        return 1;

    while (num != 0)
    {
        num = num / 10;
        counter++;
    }
    return counter;
}