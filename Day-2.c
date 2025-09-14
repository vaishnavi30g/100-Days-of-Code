//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{ float length,width,area,perimeter;
printf("Enter the value of length of rectangle\n");
 scanf("%f", &length);
 printf("Enter the value of width of rectangle\n");
scanf("%f", &width);
area =length*width;
perimeter = 2*(length + width);
printf("Area of rectangle: %.2f\n ",area);
 printf("Perimeter of rectangle: %.2f\n",perimeter);
 return 0;

}









//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main()
{
   float radius,area,circumference;

   printf("Enter the value of radius\n");
   scanf("%f",&radius);
   area = 3.14*radius*radius;
   circumference = 2*3.14*radius;
   printf("Arear of circle = %.3f\n",area);
   printf("Circumference of circle = %.3f",circumference);
   return 0;
}
