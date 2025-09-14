//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include<stdio.h>
int main()
{
int year;
printf("Enter year:\n");
scanf("%d",&year);

if((year %4==0 && year%100!=0) || year%400==0){
printf("This is a leap year");
}
else{
printf("This is not a leap year");
}
return 0;
}






  
//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character 'ch'\n");
    scanf("%c",&ch);
    if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U')||(ch=='i')||(ch=='I')){
    printf("The character %c is vowel\n",ch);
    }
    else{
    printf("The character %c is consonant",ch);
    }
    return 0;
}
