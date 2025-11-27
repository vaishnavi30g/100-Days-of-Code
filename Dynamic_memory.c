#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=6;
    int* ptr;
    ptr = (int*)malloc(6 * sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter the value \n");
        scanf("%d",&ptr[i]);
    }
    printf("The values are %d %d %d %d %d %d\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5]);
    free(ptr);
    return 0;
}




#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=6;
    int* ptr;
    ptr = (int*)calloc(6 , sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter the value \n");
        scanf("%d",&ptr[i]);
    }
    printf("The values are %d %d %d %d %d %d\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5]);
    free(ptr);
    return 0;
}




#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int* ptr;
    ptr = (int*)malloc(5 * sizeof(int));
    for(int i=0;i<5;i++){
        printf("Enter the value \n");
        scanf("%d",&ptr[i]);
    }
    printf("The values are %d %d %d %d %d \n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
    n=10;
    ptr = (int*)realloc(ptr,10 * sizeof(int));
    for(int i=0;i<10;i++){
        printf("Enter the value \n");
        scanf("%d",&ptr[i]);
    }
    printf("The values are\n");
    for(int i=0;i<10;i++){
        printf("%d\n",ptr[i]);
           }
    free(ptr);
    
    return 0;
}




#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=10;
    int* ptr;
    ptr = (int*)malloc(10 * sizeof(int));
    printf("Table of 7 upto 10\n");
    for(int i=0;i<10;i++){
      printf(" 7 x %d = %d \n",(i+1),7*(i+1)); 
    }
    printf("Upto 15\n");
    n=15;
    ptr = (int*)realloc(ptr,15 * sizeof(int));
    for(int i=0;i<15;i++){
        printf(" 7 x %d = %d \n",(i+1),7*(i+1));
    }
    free(ptr);
    
    return 0;
}
