
                                     //Naive Solution for Pattern Searching

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)


vector<int> search(string text, string pattern, int n, int m)
{
    int j;
    vector<int>v;
    for(int i=0; i<=n-m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(pattern[j]!=text[i+j])
              break;
        }
        
        if(j==m)
          v.push_back(i);
    }
   return v;
}

int main()
{
   f0;
   
   vector<int>v;
     
   string text;
   string pattern;
   
   cin>>text>>pattern;
   int n=text.length();
   int m=pattern.length();
   
   v=search(text,pattern,n,m);
   if(v.size()>0)
   {
       cout<<"Pattern is found in text at index: "<<"\n";
       for(auto it: v)
         cout<<it<<" ";
        cout<<"\n";
   }
   else
    cout<<"pattern is not found\n";
  return 0;
}
