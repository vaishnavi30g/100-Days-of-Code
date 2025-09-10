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
