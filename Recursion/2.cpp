                                       //Print n to 1 using Recursion

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

void print(int n)
{
    if(n==0)
      return;
    cout<<n<<" ";
    print(n-1);
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
