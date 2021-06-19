
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)    //Fast I/O 

int main()
{
   f0;
   vector<int>v;
   
   int n;
   cin>>n;
   
   
   while(n!=0)
   {
      v.push_back(n%2);
      n/=2;
   }
   
  reverse(v.begin(),v.end());
  
  for(auto it: v)
   cout<<it;
   
  cout<<"\n";
 return 0;
}
