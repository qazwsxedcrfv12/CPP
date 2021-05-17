                                    //Uisng extra space (A temporary Array)
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

void sort_it(int arr[], int n)
{
    int temp[n];
    for(int i=0; i<n; i++)
    {
        int mine=0;
        for(int j=1; j<n; j++)
           if(arr[j]<arr[mine])
             mine=j;
        temp[i]=arr[mine];
        arr[mine]=numeric_limits<int>::max();
    }
    for(int i=0; i<n; i++)
       cout<<temp[i]<<" ";
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
