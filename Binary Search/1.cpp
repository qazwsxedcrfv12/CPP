
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)


int find_element(int arr[], int n, int k)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==k)
          return mid;
        else if(arr[mid]>k)
          e=mid-1;
        else
          s=mid+1;
    }
  return -1;
}

int main(){
   
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0; i<n; i++)
       cin>>arr[i];
    
    sort(arr,arr+n);
    
    int c=find_element(arr,n,k);
    if(c==-1)
      cout<<"Element not found\n";
    else
      cout<<"Element present at index "<<c<<"\n";
  return 0;
}
