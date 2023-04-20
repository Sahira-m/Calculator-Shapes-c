#include <stdio.h>
#include "calculator.h"

void calculatorMenu()
{
    float firstNum, secondNum, result;
    char operator;
    printf("\n Enter First Number :");
    checkScanf();
    scanf("%f", &firstNum);
    printf("\n Enter Second Number :");
    checkScanf();
    scanf("%f", &secondNum);
    printf("\n Enter your operatot +  -  *   / or %%  :");
    checkScanf();
    scanf("%c", &operator);
    if (operator== ADD)
    {
        result = firstNum + secondNum;
        printf("\n Addition Result is : %.2f", result);
    }
    else if (operator== SUBSTRACT)
    {
        result = firstNum - secondNum;
        printf("\n Substraction  Result is : %.2f", result);
    }
    else if (operator== MULTIPLY)
    {
        result = firstNum * secondNum;
        printf("\n Multiplication  Result is : %.2f", result);
    }
    else if (operator== DIVIDE)
    {
        result = firstNum / secondNum;
        printf("\n Division  Result is : %.2f", result);
    }
    else if (operator== MODULAR_DIVISION)
    {
        result = (int)(firstNum + 0.5) % (int)(secondNum + 0.5);
        printf("\n Modular  Result is : %.2f", result);
    }
    else
        printf("\n Please choose a valid operator");
}
