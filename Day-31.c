//Day 31
// Search for an element in an array using linear search.
#include<stdio.h>
int main(){
    int n,i,j,flag=0;
    int a[50];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to check: ");
    scanf("%d",&j);
    for(i=0;i<n;i++){
        if(j==a[i])
        {
            printf("Found at index %d",i);
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
            printf("-1");
        }
        
    
    return 0;
}





// Reverse an array without taking extra space.
#include<stdio.h>
int main(){
    int arr[15],i,n,j,k;
    
    printf("Enter the total numbers: ");
    scanf("%d",&n);
    
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    j=n-1;
    while(i<j){   
        k=arr[i];
        arr[i]=arr[j];  
        arr[j]=k;  
        i++; 
        j--; 
          
    }
    printf("Reversed array is: ");
    for(i=0;i<n;i++){
         printf("%d ", arr[i]);
    }
   
    return 0;
}
