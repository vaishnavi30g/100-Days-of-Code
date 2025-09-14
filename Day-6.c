//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of integer 'n'\n");
    scanf("%d",&n);
    if(n%2==0){
    printf("The number %d is even\n",n);
    }
    else{
    printf("The number %d is odd\n",n);
    }
    return 0;
}







//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of interger'n'\n");
    scanf("%d",&n);
    if(n==0){
    printf("Value is zero\n");
    }
    else if(n>0){
    printf("The value %d is positive\n",n);
    }
    else if(n<0){
    printf("The value %d is negative\n",n);
    }
    return 0;
}
