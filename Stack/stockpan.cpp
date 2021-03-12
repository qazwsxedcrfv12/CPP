#include<bits/stdc++.h>
using namespace std;

vector<int> search(int arr[], int n)
{
    vector<int>v;
    stack<pair<int,int>>s;
    for(int i=0; i<n; i++)
    {
        if(s.size()==0)
          v.push_back(-1);
        else if(s.size()>=0 && s.top().first>arr[i])
          v.push_back(s.top().second);
        else if(s.size()>=0 && s.top().first<=arr[i])
        {
           while(s.size()>=0 && s.top().first<=arr[i])
             s.pop();
           if(s.size()==0)
             v.push_back(-1);
           else
             v.push_back(s.top().second);
        }
      s.push({arr[i],i});
    }
    for(int i=0; i<n; i++)
      v[i]=i-v[i];
   return v;
}

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin>>arr[i];
    
    v=search(arr,n);
    for(auto it: v)
      cout<<it<<" ";
    cout<<"\n";
  return 0;
}
