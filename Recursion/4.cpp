                                       //Power of a no using Recursion

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int fact(int n, int p)
{
     if(p==0)
      return 1;
     return n*fact(n,p-1);
}

int main()
{
  f0;
  int n,p;
  cin>>n>>p;
  int c=fact(n,p);
  cout<<c<<"\n";
 return 0;
}
