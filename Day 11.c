//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days
*/

#include <stdio.h>

int main() {
    int monthNumber;
    int year; // Variable to store the year for leap year calculation

    // Prompt user for input
    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);

    // Prompt user for year to determine leap year for February
    printf("Enter the current year: ");
    scanf("%d", &year);

    switch (monthNumber) {
        case 1:
            printf("January, 31 days\n");
            break;
        case 2:
            // Check for leap year for February
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("February, 29 days (Leap Year)\n");
            } else {
                printf("February, 28 days\n");
            }
            break;
        case 3:
            printf("March, 31 days\n");
            break;
        case 4:
            printf("April, 30 days\n");
            break;
        case 5:
            printf("May, 31 days\n");
            break;
        case 6:
            printf("June, 30 days\n");
            break;
        case 7:
            printf("July, 31 days\n");
            break;
        case 8:
            printf("August, 31 days\n");
            break;
        case 9:
            printf("September, 30 days\n");
            break;
        case 10:
            printf("October, 31 days\n");
            break;
        case 11:
            printf("November, 30 days\n");
            break;
        case 12:
            printf("December, 31 days\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
















//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include<stdio.h>
int main()
{
    float sp,cp,loss,profit;
    printf("Enter the cost price and selling price\n");
    scanf("%f %f",&cp,&sp);
    if (sp>cp){
        profit=((sp-cp)/cp)*100;
        printf("Profit %.0f", profit);
        printf("%%");
    }
    else if (sp<cp){
        loss=((cp-sp)/cp)*100;
        printf("loss %.0f", loss);
        printf("%%");
        
    }
    else if (sp==cp){
        printf("No profit no loss prices are same.");
    }
    return 0;

}
