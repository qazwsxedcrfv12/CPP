                            //Optimized Eculid's Algo(Modular Arthematic)
#include<bits/stdc++.h>
using namespace std;

#define f0 iso_base::sync_with_stdio(false); cin.tie(0);

int find_gcd(int a, int b)
{
    if(b==0)
     return a;
    return find_gcd(b,a%b);
}

int main()
{
   int a,b;
   cin>>a>>b;
   int c=find_gcd(a,b);
   cout<<c<<"\n";
  return 0;
}
