//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values of sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c){
        printf("Equilateral\n");
    }
    else if (a!=b && a!=c && c!=b){
        printf("Scalene\n");
    }
    else{
        printf("Isoceles\n");
    }

    return 0;
}





//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number in 1-7 to know the day of the week\n");
    scanf("%d",&day);
    switch(day){
     case 1 :
     printf("Monday\n");
     break;
     case 2 :
     printf("Tuesday\n");
     break;
     case 3 :
     printf("Wednesday\n");
     break;
     case 4 :
     printf("Thursday\n");
     break;
     case 5 :
     printf("Friday\n");
     break;
     case 6 :
     printf("Saturday\n");
     break;
     case 7 :
     printf("Sunday\n");
     break;
     default :
        printf("Invalid input. Please enter a number between 1 and 7.\n");
        break;
    }
    return 0;
}
