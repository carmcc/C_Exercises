#include <stdio.h>
#define END -1

int vectorLenght(int v[]);
void resetVector(int v[], int index[]);
int vectorSum(int v[]);

int main()
{
    int values [] = {1,10,9,6,14,2,4,8,4,7,END};
    int index [] = {2,5,12,1,END};
    printf("Sum: %i\n", vectorSum(values));
    resetVector(values, index);
    printf("Somma: %i\n", vectorSum(values));
    return 0;
}

/**
 * This method calculates the number of elements in a vector of int terminated by END
 * @param v
 * @return the number of elements in a vector of int terminated by END
 */

int vectorLenght(int v[])
{
    int counter = 0;

    for (int i = 0; v[i] != END; i++)
    {
        counter++;
    }
    return counter;
}

/**
 * This method modifies a vector terminated by END, setting to zero the elements
 * whose index is listed in the vector index[]. Also index[] is terminated by END
 * @param v
 * @param index
 */
void resetVector(int v[], int index[])
{
    for (int i = 0; i < vectorLenght(index); i++)
    {
        if(index[i] < vectorLenght(v))
        {
            v[index[i]] = 0;
        }
    }
}
/**
 * This method returns the sum of elements in a vector terminated by END
 * @param v
 * @return the sum of elements in a vector
 */
int vectorSum(int v[])
{
    int sum = 0;
    for (int i = 0; i < vectorLenght(v) ; i++)
    {
        sum += v[i];
    }
    return sum;
}