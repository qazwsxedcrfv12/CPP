
                                //Implementation of min stack using extra space
#include<bits/stdc++.h>
using namespace std;

stack<int>s;
stack<int>ss;

void push(int a)
{
    s.push(a);
   if(ss.size()==0 || ss.top()>=a)
    ss.push(a);
}

int pop()
{
   if(s.size()==0)
    return -1;
   int a=s.top();
    s.pop();
   if(ss.top()==a)
    ss.pop();
  return a;
}

int minele()
{
   if(ss.size()==0)
    return -1;
   else
    return ss.top();
}    

int main()
{
   int c,d;
    push(2);
    push(5);
    push(6);
    c=pop();
    cout<<"Poped Element is: "<<c<<"\n";
    push(8);
    d=minele();
    cout<<"Min ele is: "<<d<<"\n";
    c=pop();
    cout<<"Poped Element is: "<<c<<"\n";
    d=minele();
    cout<<"Min ele is: "<<d<<"\n";
   return 0;
}
