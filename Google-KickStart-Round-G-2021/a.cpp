
#include<bits/stdc++.h>
#include<string>

using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)
#define all(x) x.begin(),x.end()

int main()
{
    f0;
    
    int t,n,dO=0,cA=0,c,d,m,xx;
    
    string str;
    cin>>t;
    
    xx=1;
    while(t--)
    {
             cA=0; dO=0; 
                cin>>n>>d>>c>>m;
                cin>>str;
       
       int l=str.length();
       
       for(int i=0; i<l; i++)
       {
          if(str[i]=='C')
             cA++;
          else
             dO++;
       }
       
       
                if(d<dO)
                   {  cout<<"Case #"<<xx++<<": "<<"NO\n"; continue;}
      
      
       for(int i=0; i<l; i++) 
      {
           if(d==0 && str[i]=='D')
              break;
           else if(str[i]=='D' && d!=0)
               { d--; c+=m; dO--;}
           else if(c==0 && str[i]=='C')
             break; 
           else if(c!=0 && str[i]=='C')
               { c--; cA--; }
      }
      
      if(dO!=0)
         {  cout<<"Case #"<<xx++<<": "<<"NO\n";}
      else
         {  cout<<"Case #"<<xx++<<": "<<"YES\n";}
   }
   
  return 0;
}
