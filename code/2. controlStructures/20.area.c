#include<stdio.h>
#define PI 3.14

int main()
{
    int option;
    float length, breadth, base, height, radius, side;
    float areaCircle, areaTriangle, areaRectangle, areaSquare;

    printf("\n\nSelect Option:\n1. Circle\n2. Triangle\n3. Rectangle\n4. Square\n");
    scanf("%d", &option);

    // formulae

    
    
    
    

    switch(option)
    {
        case 1:
            printf("Enter the Radius of the Circle: ");
            scanf("%f", &radius);
            areaCircle = PI * radius * radius;
            printf("The area of the Circle is: %.2f sq. unit\ns", areaCircle);
            break;
        case 2:
            printf("Enter the Length of Base of the Triangle: ");
            scanf("%f", &base);
            printf("Enter the Height of the Triangle: ");
            scanf("%f", &height);
            areaTriangle = (base * height / 2);
            printf("The area of the Triangle is: %.2f sq. units\n", areaTriangle);
            break;
        case 3:
            printf("Enter the Length of the Rectangle: ");
            scanf("%f", &length);
            printf("Enter the Breadth of the Rectangle: ");
            scanf("%f", &breadth);
            areaRectangle = (length * breadth);
            printf("The area of the Rectangle is: %.2f sq. units\n", areaRectangle);
            break;
        case 4:
            printf("Enter the Length of a Side of the Square: ");
            scanf("%f", &side);
            areaSquare = side * side;
            printf("The area of the square is: %.2f sq. units\n", areaSquare);
            break;
        default:
            printf("ERR: Please Choose a Valid Option\n");
            break;

    }

}