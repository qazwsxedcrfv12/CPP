//If Array is sorted and contains duplicates
//Time complexity 0(n+m)
//Extra Auxilary Space 0(1)

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

void find_intersection(int a[], int b[], int n, int m)
{
   int i=0,j=0;
   while(i<n && j<m)
   {
      if(i>0 && a[i]==a[i-1]){ i++; continue; }
      if(a[i]==b[j])
      { cout<<a[i++]<<" "; j++; }
      else if(a[i]<b[j])
       i++;
      else
       j++;
   }
}

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
  
   find_intersection(a,b,n,m);
   
   cout<<"\n";
 return 0;
}
