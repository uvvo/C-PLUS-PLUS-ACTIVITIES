//WAP that calculate the area and circumference of a circle.  The area of a circle is given by a= r2pi, and its circumference by c= 2pir. 
//where r is the radius of the circle and pi is approximately 3.1416.
//Menor, Harold O. BSCS1D
#include <stdio.h>
int main()
{
	//Variable
   int circle_radius;
   float pi=3.1416, area_circle, circumference_circle;

   
   printf("\nEnter radius of circle: "); //Enter the radius of circle
   scanf("%d",&circle_radius);

   
   area_circle = pi * circle_radius * circle_radius; //Then calculate Area
   printf("\nArea of circle is: %f",area_circle);

   
   circumference_circle = 2 * pi * circle_radius;    //Then caluclate Circumference
   printf("\nCircumference of circle is: %f",circumference_circle);

   return(0);
}
