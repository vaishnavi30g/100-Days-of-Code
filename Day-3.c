//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main()
{
    float celcius,F;
    printf("Enter temperature in celcius\n");
    scanf("%f",&celcius);
    F=(celcius*9/5)+32;
    printf("Temperature in Farenheit=%.2f",F);
    return 0;
}





//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a and b [input1 and input2]\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("The  value of a is %d and b is %d.",a,b);
    return 0;
}
