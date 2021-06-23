//Sort the array in decreasing order ( max heap )

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)
#define pb v.push_back

void sort_it(vector<int>v)
{
   priority_queue<int>q;
   for(int i=0; i<v.size(); i++)
      q.push(v[i]);
   while(!q.empty())
   {
      cout<<q.top()<<" ";
      q.pop();
   }
}
   

int main()
{
   f0;
   vector<int>v;
   int n,a;
   cin>>n;
   
   for(int i=0; i<n; i++)
   {
       cin>>a;
       pb(a);
   }
   
      sort_it(v);
      
  cout<<"\n";
 return 0;
}
