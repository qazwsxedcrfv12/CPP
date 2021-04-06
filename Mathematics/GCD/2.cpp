                            //Eculid's Algorithm
#include<bits/stdc++.h>
using namespace std;

#define f0 iso_base::sync_with_stdio(false); cin.tie(0);

int find_gcd(int a, int b)
{
    while(a!=b)
    {
       if(a>b)
        a=a-b;
       else
        b=b-a;
    }
  return b;
}

int main()
{
   int a,b;
   cin>>a>>b;
   int c=find_gcd(a,b);
   cout<<c<<"\n";
  return 0;
}
