#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=NULL,*second=NULL,*end=NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    end = (struct Node*)malloc(sizeof(struct Node));
    head->data=29;
    head->next=second;
    second->data=38;
    second->next=end;
    end->data=59;
    end->next=NULL;

    struct Node *temp=head;
    while(temp->next !=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    return 0;

}
