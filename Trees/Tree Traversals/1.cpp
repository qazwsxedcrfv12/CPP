
#include<bits/stdc++.h>
using namespace std;


struct Node{
   int data;
   Node* left;
   Node* right;
};


Node* getnewNode(int data)                  //Creating a new node
{
    Node* root=new Node();
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    
    return root;
}

Node* insert(Node* root, int data)          //Inserting a new node to tree
{
   if(root==NULL)
     root=getnewNode(data);
   else if(data<=root->data)
     root->left=insert(root->left,data);
   else
     root->right=insert(root->right,data);
   return root;
}

void print(Node* root)             //Processing the nodes of tree in DFS(inorder) strategy
{
    if(root==NULL)
      return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

int main()
{
    Node* root=NULL;
    int n,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        root=insert(root,a);
    }
  
    print(root);
   
   cout<<"\n";
 return 0;
}
