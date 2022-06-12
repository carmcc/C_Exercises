/**
* simple calculator
*/
#include "operations.h"

int main()
{
    int choice, firstOperand, secondOperand;
    printf("Insert 1 for the sum\n");
    printf("Insert 2 for the subtraction\n");
    printf("Insert 3 for the multiplication\n");
    printf("Insert 4 for the division\n");

    /**
     * read choiced operation
     */
    printf("Your choice: ");
    scanf("%d", &choice);


    /**
     * read the two operands
     */
    printf("Insert the first operand: ");
    scanf("%d", firstOperand);

    printf("Insert the second operand: ");
    scanf("%d", secondOperand);

    switch (choice)
    {
        case 1:
            sum(firstOperand,secondOperand);
            break;
        case 2:
            subtraction(firstOperand,secondOperand);
            break;
        case 3:
            multiplication(firstOperand,secondOperand);
            break;
        case 4:
            division(firstOperand,secondOperand);
            break;
        default:
            printf("Invalid operation!");
            break;
    }



}


