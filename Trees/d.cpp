#include<bits/stdc++.h>
using namespace std;

struct Node{           //Defining the structure of tree
  char data;
  Node* left;
  Node* right;
};



Node* getnewNode(char data)        //Creating teh New Node
{
    Node* root=new Node();
    root->data=data;
    root->left=NULL;
    root->right=NULL;
   return root;
}


Node* insert(Node* root, char data)       //Inserting the data in BST
{
    if(root==NULL)
      root=getnewNode(data);
    else if(data<=root->data)
       root->left=insert(root->left,data);
    else
       root->right=insert(root->right,data);
  return root;
}

void print(Node* root)
{
   if(root==NULL)
     return;
   print(root->left);
   cout<<root->data<<" ";
   print(root->right);
}

char minele(Node* root)         //Find the minimum Element
{
   while(root->left!=NULL)
      root=root->left;
    return root->data;
}

int main()
{
   Node* root=NULL;
   string str;
   cin>>str;
   int l=str.length();
   
  for(int i=0; i<l; i++)
     root=insert(root,str[i]);
 
  cout<<minele(root)<<"\n";
  
   print(root);
   cout<<"\n";
  return 0;
}
