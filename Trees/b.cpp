
#include<bits/stdc++.h>
using namespace std;


struct Node{                    //Defining the structure of tree
   int data;
   Node* left;
   Node* right;
};


Node* getnewNode(int data)             //Creating  new Node
{
    Node* root=new Node();
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    
    return root;
}

Node* insert(Node* root, int data)       //Inserting a new Node
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

bool search(Node* root, int data)          //Searching for data in BST
{
    if(root==NULL)
       return false;
    else if(data<=root->data)
     return search(root->left,data);
    else
     return search(rott->right,data);
}

int main()                                  //Driver Code
{
    Node* root=NULL;
    int n,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        root=insert(root,a);
    }
    bool flag=search(root,data);
    cout<<flag<<"\n";
    print(root);
   cout<<"\n";
 return 0;
}
