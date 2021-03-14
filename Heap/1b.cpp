

                              // Kth  element in an array using Heap
                              
#include<bits/stdc++.h>
using namespace std;


#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int search(int arr[], int n, int k)
{
    priority_queue<int>q;   // Defining max heap(as we want kth smallest
                                                     // so we will pop greatest elements
    for(int i=0; i<n; i++)
    {
        q.push(arr[i]);
        if(q.size()>k)
          q.pop();
    }
  return q.top();
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0; i<n; i++)
       cin>>arr[i];
    
    int c=search(arr,n,k);
    cout<<c<<"\n";
  return 0;
}
