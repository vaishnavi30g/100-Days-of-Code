//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c ,D;
    float x,y;
    printf("Enter the values of a,b,c for eqn'ax� + bx + c = 0'\n");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    x=(-b+sqrt(D))/(2*a);
    y=(-b-sqrt(D))/(2*a);
    if(D>0){
 printf("The roots are real and different:%.2f and %.2f\n",x,y);
    }
    else if (D<0){
        printf("The roots are complex\n");
        }
 else {
 printf("The roots are real and equal: %.2f",x); 
        }
        return 0;
}






/*
Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>
int main()
{
    float n;
    printf("Enter the marks you get\n");
    scanf("%f",&n);

    if(n>=90 && n<=100)
    {
        printf("Grade A\n");
    }
    else if(n>=80 && n<=89){
        printf("Grade B\n");
    }
    else if(n>=70 && n<=79){
        printf("Grade c\n");
    }
    else if(n>=60 && n<=69){
        printf("Grade D\n");
    }
    else if (n<60){
        printf("Grade F\n");
    }
    return 0;
}
