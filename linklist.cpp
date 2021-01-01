/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class node
{
    public:
    int data;
    node* left;
};

void insert_end_node(node* head, int n)
{
    node* new_node= new node();
    new_node->data=n;
    new_node->left=NULL;
    node* temp=head;
    if(head==NULL)
    {
        head=new_node;
        return;
    }
    while(temp->left!=NULL)
   {
       temp=temp->left;
   }
   temp->left=new_node;
}

int main()
{
    node* root= new node();
    root->data=10;
    root->left=NULL;
    insert_end_node(root,9);
    insert_end_node(root,66);
    
    while(root!=NULL)
    {
        cout<<"data "<<root->data<<"->";
        root=root->left;
    }

    return 0;
}
