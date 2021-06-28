//Sort array of 0,1,2
//Time Complexity O(nlogn)
//Space Complexity O(1)



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
   
   sort(arr,arr+n);
   
   for(int it: arr)
      cout<<it<<" ";
   cout<<it<<"\n";
 return 0;
}
