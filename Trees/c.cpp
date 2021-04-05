#include<bits/stdc++.h>
using namespace std;


struct Node{
   int data;
   Node* left;
   Node* right;
};


Node* getnewNode(int data)
{
    Node* root=new Node();
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    
    return root;
}

Node* insert(Node* root, int data)
{
   if(root==NULL)
     root=getnewNode(data);
   else if(data<=root->data)
     root->left=insert(root->left,data);
   else
     root->right=insert(root->right,data);
   return root;
}

int findmin(Node* root)
{
    while(root->left!=NULL)
      root=root->left;
    return root->data;
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
    
    bool flag=search(root,data);
    cout<<flag<<"\n";
    
    int c=findmin(root);
    cout<<c<<"\n";
  
   cout<<"\n";
 return 0;
}
