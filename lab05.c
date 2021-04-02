#include <stdio.h>
int main()
{
    float length, breadth, side, area, perimeter;
    int code;
    printf("AREA AND PERIMETER OF RECTANGLE AND SQUARE\n");
    printf(" 1 --> Rectangle Area\n");
    printf(" 2 --> Rectangle Perimeter\n");
    printf(" 3 --> Square Area\n");
    printf(" 4 --> Square Perimeter\n");
    printf("Enter the Figure code\n");
    scanf("%c", &code);
    switch(code)
    {
    // case for finding area of rectangle
    case '1':
        printf("Enter length of Rectangle\n");
        scanf("%f", &length);
        printf("Enter breadth of Rectangle\n");
        scanf("%f", &breadth);
        area = length*breadth;
        printf("Area of a Rectangle = %f\n", area);
        break;
    // case for finding perimeter of rectangle
    case '2':
        printf("Enter length of Rectangle\n");
        scanf("%f", &length);
        printf("Enter breadth of Rectangle\n");
        scanf("%f", &breadth);
        perimeter = 2 * (length + breadth);
        printf("Perimeter of rectangle = %f\n", perimeter);
        break;
    // case for finding area of square
    case '3':
        printf("Enter the side of Square\n");
        scanf("%f", &side);
        area = side * side;
        printf("Area of a Square=%f\n", area);
        break;
    // case for finding perimeter of square
    case '4':
        printf("Enter the side of Square\n");
        scanf("%f", &side);
        perimeter = 4 * side;
        printf("Perimeter of Square=%f\n", perimeter);
        break;
    /* if code doesn't match any case */
    default:
        printf("Error, Thank You");
    }
    return 0;
}