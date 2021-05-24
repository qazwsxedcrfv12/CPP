
#include <bits/stdc++.h>
using namespace std;
 
#define f0 ios_base::sync_with_stdio(false); cin.tie(0)
#define pv v.push_back
#define all(x) x.begin(),x.end()
#define ll long long int
 
ll count(ll N)
{
    ll count = 0;
    for (ll L = 1; L * (L + 1) < 2 * N; L++)
    {
        double a = (1.0 * N-(L * (L + 1)) / 2) / (L + 1);
        if (a-(ll )a == 0.0)
            count++;       
    }
    return count;
}
 
int main()
{
    f0;
    int t,i=0;
    ll N;
    cin>>t;
    while(t--)
   {
      i++;
      cin>>N;
     cout <<"Case "<<"#"<<i<<": "<<count(N)+1<<"\n";
   }
    return 0;
}  
