//Reverse the array
//Time Complexity O(n)
//Extra Auxillary Space O(n)

#include<bits/stdc++.h>
using namespace std;


#define f0 ios_base::sync_with_std(false); cin.tie(0)


int main()
{
   f0;
   int n,ind=0;
   cin>>n;
   
   int arr[n];
   for(int i=0; i<n; i++)
      cin>>arr[i];
   
   int rev[n];
   
   for(int i=n-1; i>=0; i--)
     rev[ind++]=arr[i];
   
   for(auto it: rev)
     cout<<it<<" ";
   cout<<"\n";
  return 0;
}
