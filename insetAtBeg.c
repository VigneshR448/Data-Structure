#include <stdio.h>
#include<stdlib.h>
struct Node
{
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
insertAtBeg(5);
insertAtBeg(6);
insertAtBeg(7);
insertAtBeg(8);
insertAtBeg(9);
display();
    return 0;
}
