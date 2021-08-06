#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
   unordered_map<int,int>mp;
   for(int i=0; i<n; i++)
     mp[arr[i]]++;
   
   priority_queue<pair<int,int>>q;
   for(auto it: mp)
     q.push({it.first,it.second});
   while(!q.empty())
   {
      int val=q.top().second;
      int c=q.top().first;
      for(int i=0; i<c; i++)
        cout<<val<<" ";
      q.pop();
   }
   cout<<"\n";
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   
   for(int i=0; i<n; i++)
      cin>>arr[i];
   
   print(arr,n);
  return 0;
}
