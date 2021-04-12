
                                       //Print 1 to n using Recursion

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

void print(int n)
{
    if(n==0)
      return;
    print(n-1);
    cout<<n<<" ";
}

int main()
{
  f0;
  int n;
  cin>>n;
  print(n);
  cout<<"\n";
 return 0;
}
