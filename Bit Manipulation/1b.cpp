                                   // Turn off right most set bit

#incude<bits/stdc++.h>
using namespace std;

int main()
{
   int x;
  cin>>x;
  int c=x&(x-1);    // It removes the last set bit
     cout<<c<<"\n";
return 0;
}
