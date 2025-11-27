#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("file.txt","w");
    if("ptr"== NULL){
        printf("Error , file is not created");
    }
    fprintf(ptr,"Experiment 9\n Wednesday is lab of C\n");
    fclose(ptr);
    return 0;
}




#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    FILE *fptr;
    fptr=fopen("file.txt","r");
    while((ch = fgetc(fptr)) != EOF){
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}



#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch[50];
    FILE *ptr;
    ptr=fopen("file.txt","r");
    while ((fgets(ch,50,ptr)) != NULL){
        printf("%s",ch);
    }
    fclose(ptr);
    return 0;
}
