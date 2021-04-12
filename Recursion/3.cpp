
                                       //Factorial of a no using Recursion

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int fact(int n)
{
     if(n==0)
      return 1;
     return n*fact(n-1);
}

int main()
{
  f0;
  int n;
  cin>>n;
  int c=fact(n);
  cout<<c<<"\n";
 return 0;
}
