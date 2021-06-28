//Reverse the string ( uisng iterator )


#include<bits/stdc++.h>
using namespace std;


#define f0 ios_base::sync_with_stdio(false); cin.tie(0)
#define pb v.push_back
#define all(x) x.begin(),x.end()


string reverse_string(string str)
{
   string rev_str = string(str.rbegin(), str.rend());
   
   return rev_str;
}

int main()
{
   f0;
   string str;
   cin>>str;
   
   str=reverse_string(str);
   cout<<str<<"\n";
  return 0;
}
