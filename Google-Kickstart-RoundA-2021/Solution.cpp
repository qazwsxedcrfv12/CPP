#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int t,d=0;
   cin>>t;
   while(t--)
   {
       d++;
       int n,k,c=0;
       string str;
       cin>>n>>k;
       cin>>str;
       for(int i=0; i<n/2; i++)
       {
           if(str[i]!=str[n-i-1])
             c++;
       }
       if(c==k)
         cout<<"Case #"<<d<<": "<<0<<"\n";
       else
         cout<<"Case #"<<d<<": "<<abs(k-c)<<"\n";
   }
  return 0;
}
