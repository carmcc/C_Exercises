#include <stdio.h>

int main ()
{
    int i = 10;
    char c = 'a';

    int *i_ptr;
    char *c_ptr;

    printf("Char: %lu byte - Int: %lu byte\n", sizeof(char), sizeof(int));
    printf("Pointer at char: %lu byte - Pointer at int: %lu byte\n\n", sizeof(char*), sizeof(int*));

    /*OUTPUT
    *Char: 1 byte - Int: 4 byte
    *Pointer at char: 8 byte - Pointer at int: 8 byte
    * */

    i_ptr = &i; //reference
    c_ptr = &c;

    printf("Memory address of i: %p - Memory address of c: %p\n", i_ptr, c_ptr);

    /*OUTPUT
     * Memory address of i: 0x7ffe7964a334 - Memory address of c: 0x7ffe7964a333
     * */

    printf("Value of i: %d = %d\n", i, *i_ptr);
    printf("Value of c: %c = %c\n\n", c, *c_ptr);

    /*OUTPUT
     * Value of i: 10 = 10
     * Value of c: a = a
     * */

    i = 12;
    printf("Value of i: %d - value of cell pointed by i_ptr: %d\n",i, *i_ptr);


    *i_ptr = 18; // *i_ptr = i, i_ptr and i are the same storage cell
    printf("Value of i: %d - value of cell pointed by i_ptr: %d\n",i, *i_ptr);

    return 0;

}
