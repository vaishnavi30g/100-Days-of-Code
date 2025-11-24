// DAY20
//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int a,b,i,num,multi=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    a=num%10;
    if(a%2!=0)
    {
        multi=a*multi;
    }
    b=num/10;
    num=b;
}
printf("The product of the odd number is: %d",multi);
    return 0;
}






// Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main(){
    int a,b=0,num,p=1,count=0,t;
    printf("Enter the binary number: ");
    scanf("%d",&num);
    t=num; 
   
    while(t>0){
        t=t/10;
        count++;  
    }
    while(num>0){
        a=num%10; 
        if(a==1){  
            b=b+0*p; 
        }
        else{
            b=b+1*p; 
        }
        num=num/10;  
        p=p*10;  
    printf("The 1s complement of the binary number is: %0*d",count,b); 
    return 0;
}
