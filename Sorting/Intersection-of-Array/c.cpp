//If Array is not sorted and also contains Duplicates
//Time Complexity O(max(n,m))
//Extra Auxilary Space O(min(n,m))

// Code


#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)


int main()
{
   
   f0;
   
   int n,m;
   cin>>n>>m;
   int a[n],b[m];
   
   for(int i=0; i<n; i++)
      cin>>a[i];
   for(int i=0; i<m; i++)
      cin>>b[i];

   unordered_set<int>s(b.brgin(),b.end());   //if m is small  
 // unordered_set<int>s(a.brgin(),a.end());   //if m is small 
 
  for(int i=0; i<n; i++)               //if m is small
  {
     if(s.find(a[i])!=s.end())
     { cout<<a[i]<<" "; s.erase(a[i]); }
  }
  
 /* for(int i=0; i<m; i++)              //if n is small
  {
     if(s.find(b[i])!=s.end())
     { cout<<b[i]<<" "; s.erase(b[i]); }
  } */
   
   cout<<"\n";
 return 0;
}
