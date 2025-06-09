#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*head=NULL;
void insertAtBeg(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
void insertEnd(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    struct Node*temp=head;
    if(head==NULL)
    {
        head=newNode;
        return ;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    }
int main()
{
    printf("Beginning...\n");
    insertAtBeg(7);
    insertAtBeg(8);
    display();
    printf("\n");
    printf("Ending...\n");
    insertEnd(9);
    insertEnd(10);
    insertEnd(11);
    insertEnd(12);
    display();
    
}
