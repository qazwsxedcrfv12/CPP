//Tie Complexity- O(m+n)
//Space Complexity- O(1)

#include<bits/stdc++.h>
using namespace std;

void combine_array(int arr[], int brr[], int n, int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
       if(i>0 && arr[i]==arr[i-1]){ i++; continue; }
       if(j>0 && brr[j]==brr[j-1]){ j++; continue; }
       if(arr[i]<brr[j])
         cout<<arr[i++]<<" "; 
       else if(arr[i]>brr[j])
         cout<<brr[j++]<<" "; 
       else
        { cout<<brr[j++]; i++; }
    }
   
    while(i<n)
     { 
        if(i>0 && arr[i]!=arr[i-1])
           cout<<arr[i++];
     }
    
     while(j<m)
     { 
        if(j>0 && brr[j]!=brr[j-1])
           cout<<brr[j++];
     }
}

int main()
{
   int n,m;
   cin>>n>>m;
   int arr[n],brr[m];
   
   for(int i=0; i<n; i++)
      cin>>arr[i];
   for(int i=0; i<m; i++)
      cin>>brr[i];
   
   combine_array(arr,brr,n,m);
  return 0;
}
