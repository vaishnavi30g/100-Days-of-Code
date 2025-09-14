//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter values of a and b\n");
    scanf("%d %d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("The value of a is %d \nThe value of b is %d",a,b);
    return 0;
}






//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the value of 'n' (first n natural numbers)\n");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("The sum of first 'n' natural numbers is %d",sum);
    return 0;
}
