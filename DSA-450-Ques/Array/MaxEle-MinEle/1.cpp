
//Find maximum and minimum Element
//Time Complexity O(n)
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
   
   int min_ele=arr[0],max_ele=arr[0];
   for(int i=1; i<n; i++)
   {
      max_ele=max(arr[i],max_ele);
      min_ele=min(arr[i],min_ele);
        min_ele=arr[i];
   }
   
   cout<<"Max Element: "<<max_ele<<" "<<"\n";
   cout<<"Min Element: "<<min_ele<<"\n";
   return 0;
}
     
