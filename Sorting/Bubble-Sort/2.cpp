#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

void sort_it(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
       for(int j=0; j<n-1; j++)
          if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
    }
    for(int i=0; i<n; i++)
       cout<<arr[i]<<" ";
     cout<<"\n";
}

int main()
{
   f0;
   int n;
   cin>>n;
   int arr[n];
   
   for(int i=0; i<n; i++)
      cin>>arr[i];
   
   sort_it(arr,n);
  return 0;
}

