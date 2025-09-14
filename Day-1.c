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







//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers (Input 1 and Input 2): ");
    scanf("%d %d", &a, &b);

    printf("Sum=%d, ", a + b);
    printf("Diff=%d, ", a - b);
    printf("Product=%d, ", a * b);

    if (b != 0) {
        printf("Quotient=%d\n", a / b);
    } else {
        printf("Quotient=undefined (division by zero)\n");
    }

    return 0;
}
