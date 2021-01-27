                            //Remove duplicates from array 
                            //Time Complexity O(n)  Space O(1)

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio;cin.tie(0);cout.tie(0)
#define endl "\n"

int main()
{
    f0;
    int n,j=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin>>arr[i];
  
  arr[j++]=arr[0];
   
    for(int i=1; i<n; i++)
    {
       if(arr[i]!=arr[i-1])
         arr[j++]=arr[i];
    }
   
    for(int i=0; i<j; i++)
       cout<<arr[i]<<" ";
    cout<<endl;
   return 0;
}
