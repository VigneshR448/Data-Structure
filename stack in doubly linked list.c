#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
struct Node*head=NULL;
struct Node*tail=NULL;
void push(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    else{
        tail=newNode;
        
    }head=newNode;
}
void pop(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    newNode->prev=tail;
    if(head!=NULL)
    {
        tail->next=newNode;
    }
    else
    {
        head=newNode;
    }
    tail=newNode;
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
void peek()
{
    printf("%d",head->data);
}
void isEmpty()
{
    if(head==NULL)
    {
        printf("is Empty");
    }
    else
    {
        printf("No");
    }
}
int main()
{
push(5);
push(6);
push(7);
push(8);
display();
pop(9);
printf("\n");
display();
printf("\n");
peek();
printf("\n");
isEmpty();

    return 0;
}
