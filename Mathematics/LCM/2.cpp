#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int find_gcd(int a, int b)
{
    if(b==0)
      return a;
    return find_gcd(b,a%b);
}

int main()
{
   f0;
   int a,b;
   cin>>a>>b;
   int c=find_gcd(a,b);
   cout<<(a*b)/c<<"\n";
  return 0;
}
