//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>
int main()
{
int num1,num2,sum;
printf("Enter the value of num1 = \n");
scanf("%d",&num1);
printf("Enter the value of num2 = \n");
scanf("%d",&num2);
sum=num1+num2;
printf("Sum of the two numbers = %.2d\n",sum);
return 0;
}
