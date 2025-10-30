//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
    printf("The character is a digit");
    }
    else if(ch>='a' && ch<='z'){
    printf("The character is lowercase alphabet");
    }
    else if(ch>='A' && ch<='Z'){
    printf("The character is uppercase");
    }
    else{
    printf("The character is a special character");
    }
    return 0;
}





//Q16: Write a program to input three numbers and find the largest among them using if�else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/


#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Largest is %d\n",a);
    }
    else if(b>a && b>c){
        printf("largest is %d\n",b);
    }
    else{
        printf("Largest is %d\n",c);
    }
    return 0;
}

