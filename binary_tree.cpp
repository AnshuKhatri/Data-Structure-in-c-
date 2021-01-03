/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
//structure for tree

struct tnode
{
    public:
    int data;
    tnode* left;
    tnode* right;   /// max of 2 children    if a node has no child -> left node
    tnode(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
        
    }
    tnode* display(tnode* hroot)
    {
        if(hroot==NULL)
        return NULL;
        
        //inorder left root right
      /*  display(hroot->left);
        cout<<hroot->data<<" ";
        display(hroot->right);*/
        
        //preorder root left right
        cout<<hroot->data<<" ";
        display(hroot->left);
        display(hroot->right);
        
        //postorder left right root
       /* display(hroot->left);
        display(hroot->right);
        cout<<hroot->data<<" ";*/
        
    }
    
};


int main () 
{ 
	tnode* root=new tnode(10);
	root->left=new tnode(11);
	root->left->left=new tnode(122);
	root->right=new tnode(234);
    root->display(root);
	return 0; 
}
