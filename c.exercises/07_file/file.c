#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 100
#define STATUS 1
int main()
{

    char *string;
    string = malloc(sizeof (char) * MAX_LENGTH);
    printf("Insert a string: %s", string);
    scanf("%[^\n]s", string);
    printf("String \"%s\" inserted", string);

    FILE * file = fopen("/home/string.txt", "w");

    if(file == NULL)
    {
        printf("File can't be opened.");
        exit(STATUS);
    }

    fprintf(file, "%s", string);
    fclose(file);
    free(string);

    printf("\nFile closed.");
    return 0;
}
