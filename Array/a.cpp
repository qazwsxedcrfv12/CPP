                                    //Remove duplicates from Array
                                    // Time complexity O(n)  Space O(n)


#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n)
{
   int temp[n];
   temp[0]=arr[0];
   int res=1;
   for(int i=1; i<n; i++)
   {
       if(temp[res-1]!=arr[i])
       {
          temp[res]=arr[i];
          res++;
       }
   }
   for(int i=0; i<res; i++)
     arr[i]=temp[i];
   return res;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   
   int n;cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
      cin>>arr[i];
   int c=duplicate(arr,n);
   for(int i=0; i<c; i++)
     cout<<arr[i]<<" ";
 return 0;
}
