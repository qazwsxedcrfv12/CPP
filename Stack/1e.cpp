                                             // Maximum Area of histogram
#include<bits/stdc++.h>
using namespace std;

vector<int> search1(int arr[], int n)       // Find nearest greater to right
{
   stack<pair<int,int>>s;
   vector<int>v;
   for(int i=n-1; i>=0; i--)
   {
       if(s.size()==0)
         v.push_back(n);
       else if(s.size()>0 && s.top().first<arr[i])
         v.push_back(s.top().second);
       else if(s.size()>0 && s.top().first>=arr[i])
       {
           while(s.size()>0 && s.top().first>=arr[i])
             s.pop();
           if(s.size()==0)
             v.push_back(n);
           else
             v.push_back(s.top().second);
       }
       s.push({arr[i],i});
   }
  
  reverse(v.begin(),v.end());         // Reverses the vector
  return v;
}
   

int* search(int arr[], int n)       // Find nearest smaller to left
{
   stack<pair<int,int>>s;
   vector<int>v,v1;
   for(int i=0; i<n; i++)
   {
       if(s.size()==0)
         v.push_back(-1);
       else if(s.size()>0 && s.top().first<arr[i])
         v.push_back(s.top().second);
       else if(s.size()>0 && s.top().first>=arr[i])
       {
           while(s.size()>0 && s.top().first>=arr[i])
              s.pop();
           if(s.size()==0)
              v.push_back(-1);
           else
              v.push_back(s.top().second);
       }
       s.push({arr[i],i});
   }
    v1=search1(arr,n);
    for(int i=0; i<v.size(); i++)
    {
       v[i]=(v1[i]-v[i]-1);
    }
    for(int i=0; i<v.size(); i++)
    {
       arr[i]=arr[i]*v[i];
    }
   
   int *c=max_element(arr,arr+n);       // Find the maximum element from array
   return c;
}

// Driver Code
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
      cin>>arr[i];
   
   int* c=search(arr,n);
   cout<<*c<<"\n";
  return 0;
}
