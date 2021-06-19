
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)    //Fast I/O 

int main()
{
   f0;
   
   int n;
   cin>>n;
   
   
   int l=floor(log2(n)+1);        //No of digits in binary of given no
   
   for(int i=l-1; i>=0; i--)            //Logic
   {
      if(n&(1<<i))
       cout<<1;
      else
       cout<<0;
   }
   
  cout<<"\n";
 return 0;
}
