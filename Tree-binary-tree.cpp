#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *createnode(int data)
{
    node *newnode=new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void Inorder(node*root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}

void Preorder(node*root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        Inorder(root->left);
        Inorder(root->right);
    }
}

void Postorder(node * root)
{
    if(root!=NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    node*root=createnode(10);
    root->left=createnode(20);
    root->right=createnode(30);
    root->left->left=createnode(40);
    root->left->right=createnode(50);
    root->right->left=createnode(60);
    root->right->right=createnode(70);
    
    cout<<"Inorder Traversal>>> ";
    Inorder(root);
    cout<<endl;
    
    cout<<"Preorder Traversal>>> ";
    Preorder(root);
    cout<<endl;
    
    cout<<"Postorder Traversal>>> ";
    Postorder(root);
    cout<<endl;
    
    return 0;
}
