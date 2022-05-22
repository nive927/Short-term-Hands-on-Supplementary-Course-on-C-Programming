/**
 * C program to create Simple Calculator using switch case
 */

#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result= 0f ;

    // float a = 0.2f + 

    /* Print welcome message */
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* Input two number and operator from user */
    scanf("%f %c %f", &num1, &op, &num2);

    printf("\nGot the following:\n-num1: %f\n-op:   %c\n-num2: %f", num1, op, num2);


    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        default:
            printf("Invalid input");
            
    }






    /*

    /* Switch the value and perform action based on operator*/
    // switch(op)
    // {
    //     case '+': 
    //         result = num1 + num2;
    //         break;

    //     case '-': 
    //         result = num1 - num2;
    //         break;

    //     case '*': 
    //         result = num1 * num2;
    //         break;

    //     case '/': 
    //         result = num1 / num2;
    //         break;

    //     default: 
    //         printf("Invalid operator");
    // }
    // */

    /* Prints the result */
    printf("\n\n%.2f %c %.2f = %.2f\n", num1, op, num2, result);

    return 0;
}