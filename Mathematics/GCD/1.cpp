
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0);

int find_gcd(int a, int b)
{
    int res=min(a,b);
    while(res>0)
    {
       if(a%res==0 && b%res==0)
        break;
       res--;
    }
   return res;
}

int main()
{
    f0;
    int a,b;
    cin>>a>>b;
    int c=find_gcd(a,b);
    cout<<c<<"\n";
  return 0;
}
