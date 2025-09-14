//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t,si;
    float ci;
    printf("Enter the values of Principal\nRate\nTime\n");
    scanf("%d\n%d\n%d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("The value of simple interest is %d\n",si);
    ci=p*(pow((1+r/100.0),t))-p;
    printf("The value of compound interest is %.2f\n",ci);
    return 0;
}





//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main()
{
    int s,m,min,hr;
    printf("Enter the value of seconds\n")
    ;scanf("%d",&s);
    hr=s/3600;
    m=s%3600;
    min=m/60;
    s=m%60;
    printf("The value of hr:min:sec is %d:%d:%d",hr,min,s);
    return 0;

}
