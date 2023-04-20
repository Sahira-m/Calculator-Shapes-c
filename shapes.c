#include <stdio.h>
#include <stdlib.h>
#include "shapes.h"
#include <string.h>
#include <ctype.h>
//  function declaration
void checkScanf();
void readTriangle();
void readShapes();
void readRadius();
void shapesMenu();
void checkScanf()
{
    while (getchar() != '\n')
        ;
}
void readTriangle()
{
    float side1, side2, side3, areaTriangle, perimeterTriangle, base, height;
    printf(" \n Enter three sides of triangle: \n");
    printf("side1 :");
    scanf("%f", &side1);
    printf("side2 :");
    scanf("%f", &side2);
    printf("side3 :");
    scanf("%f", &side3);
    perimeterTriangle = side1 + side2 + side3;
    printf("\n Enter base and height :");
    scanf("%f%f", &base, &height);
    areaTriangle = 0.5 * base * height;
    printf("\n The Area of triangel is :%.2f  Perimeter  is :%.2f ", areaTriangle, perimeterTriangle);
    fflush(stdin);
}
void readShapes()
{
    float width, height, areaRectangle, perimeterRectagle;
    printf("Enter Width and height  :");
    scanf("%f%f", &width, &height);
    areaRectangle = width * height;
    perimeterRectagle = 2 * (width + height);
    printf("The Area is    :%.2f and Perimeter is :%.2f ", areaRectangle, perimeterRectagle);
}
void readRadius()
{
    float radius, area, perimeter;
    printf(" \n Enter the radius of circle :");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    printf("The Area is    :%.2f and Perimeter is :%.2f ", area, perimeter);
}
void shapesMenu()
{
    char choice[50];

    printf("\n CHOOSE SHAPES:");
    printf("\n \t TRIANGLE\n \t RECTANGLE \n \t PARALlELOGRAM \n \t CIRCLE  \n \t Return To Main Menu \n");
    checkScanf();
    scanf("%s", &choice);
    strlwr(choice);
    if (strcmp(choice, TRIANGLE) == 0)
        readTriangle();

    else if (strcmp(choice, RECTANGLE) == 0)
        readShapes();

    else if (strcmp(choice, PARALlELOGRAM) == 0)
        readShapes();

    else if (strcmp(choice, CIRCLE) == 0)
        readRadius();

    else if (strcmp(choice, RETURM_TO_MAIN_MENU) == 0)
        // choiceMenu();
        printf("Exit  to Main menu");

    else
        printf("\n Invalid option");
}