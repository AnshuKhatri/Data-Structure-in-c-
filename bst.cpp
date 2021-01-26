/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include<stack>
using namespace std;


struct tnode
{
    
    public:
    int data;
    tnode* left;
    tnode* right;
    tnode(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
    
    //inorder
tnode* display(tnode* hroot)
{
    
    if(hroot==NULL)
    return NULL;
    //inorder Left -Node-Right
    display(hroot->left);
    cout<<hroot->data<<" ";
    display(hroot->right);
    
}
};



tnode* insert(tnode* hroot, int d)
{
    if(hroot==NULL)
    return new tnode(d);
    if(hroot->data<d)
    hroot->right=insert(hroot->right,d);
    else
    hroot->left=insert(hroot->left,d);
    
    return hroot;
    
}

int main()
{
    tnode* root=new tnode(10);
    insert(root,100);
    insert(root,22);
    root->display(root);
    
    return 0;
}
