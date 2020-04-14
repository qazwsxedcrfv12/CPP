#include<bits/stdc++.h>
using namespace std;

int sum1(int,int);
int even_odd(int);



int main()
{
int a,i,n,j=0,sum=0,q,w,u;
cout<<"Enter the choice:"<<endl;
for(int i=0; i<=1; i++)
{
 cin>>a;
 if(a==1)
 {  
   int b,c,d;
   cout<<"Enter two no:"<<endl;
   cin>>b>>d;
   c=sum1(b,d);
   cout<<c<<endl;
 }
 if(a==2)
 {
  cout<<"Enter the limit:"<<endl;
  cin>>n;
  
   while(j<n)
 { 
   
   sum=sum+j;
  cout<<sum<<endl;
  j=j+1;
 }
 }
 if(a==3)
 {
   cout<<"Enter the no:"<<endl;
   cin>>q;
   u=even_odd(q);
   cout<<u;
 }
}
return 0;
}

 int sum1(int x, int y)
  {
    return (x+y);
  }

 int even_odd(int h)
  {
    if(h%2==0)
       return 1;
    else
       return 0;
  }
