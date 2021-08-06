
#include<bits/stdc++.h>
using namespace std;

vector<int> insert(int arr[], int n, int k)
{
   vector<int>v;
   priority_queue<int,vector<int>,greater<int>>q;
   for(int i=0; i<n; i++)
   {
       q.push(arr[i]);
       if(q.size()>k)
       { v.push_back(q.top()); q.pop(); }
   }
   while(!q.empty())
   { v.push_back(q.top()); q.pop(); }
  return v;
}
       
        

int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n];
  
  for(int i=0; i<n; i++)
     cin>>arr[i];
  vector<int>v=insert(arr,n,k);
  for(auto it: v)
     cout<<it<<" ";
  cout<<"\n";
 return 0;
}
