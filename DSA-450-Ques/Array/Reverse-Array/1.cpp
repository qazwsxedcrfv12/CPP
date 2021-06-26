

// Reverse the Array
//Time Complexity O(n)
// Extra Auxillary Space O(1)

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)


int main()
{
   f0;
   int n;
   cin>>n;
   int arr[n];
   
   for(int i=0; i<n; i++)
      cin>>arr[i];
   
   for(int i=0; i<n/2; i++)
     swap(arr[i],arr[n-i-1]);
   
   for(int it: arr)
     cout<<it<<" ";
   cout<<"\n";
 return 0;
}


