#include"bst.h"

node* create(int data)
{ 
    node *temp=(node*)malloc(sizeof(node));
    temp->left=temp->right=NULL;
    temp->data=data;
    return temp;
}

int search(node *root,int key)
{   if(root==NULL)return 0;
    else if(root->data==key)
    return 1;
    else if(key<root->data)
    return search(root->left,key);
    else
    return search(root->right,key);   
}
node* insert(node *root,int data)
{
   if(root==NULL)
   {
       node* temp=create(data);
       root=temp;
   }
   else if(data<root->data)
       root->left=insert(root->left,data);
    else 
       root->right=insert(root->right,data);

    return root; 
}


void inorder(node *root)
{
    if(root==NULL)
        return;
    
    inorder(root->left);
    pf("%d ",root->data);
    inorder(root->right);
}

void preorder(node* root)
{
    if(root==NULL)
    return;

    pf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    pf("%d ",root->data);
}

void displaystr(node *root)
{     

    if(root==NULL)
       { pf("-");
       return;}
       pf("%d",root->data);
    if(root->left==NULL&&root->right==NULL)
        return;
    pf("(");
    displaystr(root->left);
    pf(",");
    displaystr(root->right);
    pf(")");

}

int height(node *root)
{
    if(root==NULL)
        return -1;
    else
        return max(height(root->left),height(root->right))+1;
}