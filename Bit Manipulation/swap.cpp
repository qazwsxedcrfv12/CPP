
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int main()
{
   f0;
   
   int a,b;
   cin>>a>>b;
   
   a^=b;
   b^=a;
   a^=b;
   
   cout<<"The value of a and b are "<<a<<" "<<b<<"\n";
  return 0;
}
