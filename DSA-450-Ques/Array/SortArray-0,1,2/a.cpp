
//Sort the array of 0,1,2
//Time Complexity O(n)
//Space Complexity O(1)

#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n,one=0,zero=0,two=0,j=0;
   cin>>n;
   int arr[n];
   
   for(int i=0; i<n; i++)
   {
       cin>>arr[i];
       if(arr[i]==0)
         zero++;
       else if(arr[i]==1)
         one++;
       else
         two++;
   }
   
   for(int i=0; i<zero; i++)
     arr[j++]=0;
   for(int i=zero; i<one+zero; i++)
     arr[j++]=1;
   for(int i=one+zero; i<n; i++)
     arr[j++]=2;
   
   for(int it: arr)  
     cout<<it<<" ";
   cout<<"\n";
  return 0;
}
