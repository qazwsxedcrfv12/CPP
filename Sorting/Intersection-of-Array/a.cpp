// If the array does not contain Duplicates
//Time Complexity O(n)
//Extra Auxilary Space O(1)


#include<bits/stdc++.h>
using namespace std;

void find_intersection(int a[], int b[], int n, int m)
{
   int i=0,j=0;
   while(i<n && j<m)
   {
      if(a[i]==b[j])
      { cout<<a[i++]; j++; }
      else if(a[i]<b[j])
       i++;
      else
       j++;
   }
}

int main()
{
   int n,m;
   cin>>n>>m;
   int a[n],b[m];
   
   for(int i=0; i<n; i++)
      cin>>a[i];
   for(int i=0; i<m; i++)
      cin>>b[i];
  
   find_intersection(a,b,n,m);
   
   cout<<"\n";
 return 0;
}
