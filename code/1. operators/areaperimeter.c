#include <stdio.h>
#define PI 3.14

int main()

{
    int usrInp;
    float length, breadth, radius, areaRectangle, perimeterRectangle, areaCircle, perimeterCircle;

    printf("Select Shape: \n 1: Rectangle\n 2: circle\n");
    scanf("%d", &usrInp);


    if (usrInp == 1) {

         /* to find area and perimeter of rectangle */

        printf("Enter Length: ");
        scanf("%f", &length);    
        printf("Enter Breadth: ");    
        scanf("%f", &breadth);   

        areaRectangle = (length * breadth);
        perimeterRectangle = (2 * (length + breadth));

        printf("The Area of the Rectangle is: %.2f\n", areaRectangle); 
        printf("The Perimeter of the Rectangle is: %.2f\n", perimeterRectangle);

    }


    else if (usrInp == 2) {

         /* to find area and perimeter of circle */

        printf("Enter Radius: ");
        scanf("%f", &radius);    

        areaCircle = (PI * radius * radius);
        perimeterCircle = (2 * PI * radius);

        printf("The Area of the Circle is: %.2f\n", areaCircle); 
        printf("The Perimeter of the Circle is: %.2f\n", perimeterCircle);
    }

    else {
        printf("Try again!\n");
    }

    return 0;

}