/*
Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main(){
int d,f,t3,t2,Fine;
printf("Enter the days you are late\n");
scanf("%d",&d);
    
    if (d < 0)
        printf("Invalid Input: Days late cannot be negative.");
    
    else if (d > 30)
       printf("Membership Cancelled");
    
    else{
        f = 0;
        if(d > 10){
            t3 = d - 10;
            f += t3 * 6;
            f += 30; }
        
        else if (d > 5){
            t2 = d - 5;
            f += t2 * 4;
            f += 10; 
        }
        
        else if (d > 0)
            f = d * 2;
             Fine=f;
    }
    printf("Fine is %d",Fine);
    
 return 0;
}










// Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/ 


#include <stdio.h>

int main() {
    int units;
    int bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 9;
    }
    else {
        bill = 100 * 5 + 100 * 9 + (units - 200) * 16;
    }

    printf("Bill: ₹%d \n", bill);
    return 0;
}
