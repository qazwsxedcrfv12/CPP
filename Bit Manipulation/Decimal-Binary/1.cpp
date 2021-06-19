
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

void find_binary(int n)
{
    if(n==0)
     return;
    find_binary(n>>1);
    cout<<n%2;
}

int main()
{
   f0;
   int n;
   cin>>n;
   find_binary(n);
   
   cout<<"\n";
 return 0;
}
