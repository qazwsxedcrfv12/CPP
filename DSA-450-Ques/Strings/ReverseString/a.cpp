
//Reverse the string
//Time complexity O(lengthof(string))


#include<bits/stdc++.h>
using namespace std;


#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

string reverse_string(string str)
{
   int l=str.length();
   for(int i=0; i<l/2; i++)
     swap(str[i],str[l-i-1]);
  return str;
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
