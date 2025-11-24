
//DAY17
// check if a number is armstrong number or not

#include <stdio.h>
#include <math.h>
int main() {
    int n,y=0,x,m,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    m=n;  
  while(m>0){
      m=m/10; 
      count++;
  m=n;  
    while(m>0){
        x=m%10;
        y=y+pow(x,count);  
        m=m/10;  
        
    }
    if(n==y)
    {
        printf("number is armstrong number");
    }
    else
    {
        printf("number not armstrong");
        
    }
    
    return 0;
}





// Check if the number is prime or not
#include <stdio.h>
int main(){
    int i,n,c=0; 
    printf("Enter a number: ");
    scanf("%d",&n);

  for (i=2;i<n;i++)
    {
        if(n%i==0) 
        {
        c++; 
        break; 
        }
    }
    if(c==0){
        printf("Number is prime");
    }
    else {
        printf("NUmber is not prime");
    }
    
   
    return 0;
}
