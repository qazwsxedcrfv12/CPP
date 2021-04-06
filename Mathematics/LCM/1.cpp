#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int find_lcm(int a, int b)
{
   int res=max(a,b);
   while(true)
   {
       if(res%a==0 && res%b==0)
         return res;
       res++;
   }
  return res;
}

int main()
{
   f0;
   int a,b;
   cin>>a>>b;
   int c=find_lcm(a,b);
   cout<<c<<"\n";
  return 0;
}
