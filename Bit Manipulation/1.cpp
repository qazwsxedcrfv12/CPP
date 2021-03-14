#include<bits/stdc++.h>
using namespace std;

//Using Bit manipulation

bool cheack(int x, int y)
{
    return ( (x^y) <0 );
}

int main()
{
   int x,y;
   cin>>x>>y;
   
   bool flag=check(x,y);
   
   if(flag)
     cout<<"YES\n";
   else
     cout<<"NO\n";
  return 0;
}
   
   
