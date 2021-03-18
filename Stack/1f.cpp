                                          //Rain Water Trapping 
#include<bits/stdc++.h>
using namespace std;


int search(int arr[], int n)
{
    vector<int>v,v1;
    int c,d;
    
    c=arr[0];
    v.push_back(arr[0]);
    for(int i=1; i<n; i++)
    {
       if(arr[i]<c)
        v.push_back(c);
       if(arr[i]>=c)
       { 
          v.push_back(arr[i]);
          c=arr[i];
       }
    }
    
    d=arr[n-1];
    v1.push_back(d);
    for(int i=n-2; i>=0; i--)
    {
       if(arr[i]<c)
        v1.push_back(c);
       if(arr[i]>=c)
       { 
          v1.push_back(arr[i]);
          d=arr[i];
       }
    }
    
    for(int i=0; i<v.size(); i++)
      v[i]=min(v[i],v1[i]);
    
    for(int i=0; i<n; i++)
     arr[i]=v[i]-arr[i];
    
    int x=accumulate(arr,arr+n,0);
  return x;
}


int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
     cin>>arr[i];
   
   int c=search(arr,n);
   cout<<c<<"\n";
  return 0;
}
