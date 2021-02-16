                                     //Forg Sort
/*Question*/
There are N frogs (numbered 1 through N) in a line. For each valid i, the i-th frog is initially at the position i, it has weight Wi, and whenever you hit its back, it jumps a distance Li to the right, i.e. its position increases by Li. The weights of the frogs are pairwise distinct.

You can hit the back of each frog any number of times (possibly zero, not necessarily the same for all frogs) in any order. The frogs do not intefere with each other, so there can be any number of frogs at the same time at each position.

Your task is to sort the frogs in the increasing order of weight using the smallest possible number of hits. In other words, after all the hits are performed, then for each pair of frogs (i,j) such that Wi<Wj, the position of the i-th frog should be strictly smaller than the position of the j-th frog. Find the smallest number of hits needed to achieve such a state.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers W1,W2,…,WN.
The third line contains N space-separated integers L1,L2,…,LN.
Output
For each test case, print a single line containing one integer ― the smallest number of times you need to hit the backs of the frogs.

Constraints
1≤T≤2⋅104
2≤N≤4
1≤Wi≤N for each valid i
1≤Li≤5 for each valid i
no two frogs have the same weight
Subtasks
Subtask #1 (50 points):

T=50
N=2
Subtask #2 (50 points): original constraints

Example Input
3
3
3 1 2
1 4 5
3
3 2 1
1 1 1
4
2 1 4 3
4 1 2 4
Example Output
3
6
5
Explanation
Example case 1: We can hit the back of the first frog three times.

Example case 2: We can hit the back of the first frog four times, then hit the back of the second frog two times.


/*Answer*/
 
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define f1 for(int i=0; i<n; i++)

int main()
{
   f0;
   int t,n,a,a1,b,b1,c,c1,d,d1,ans=0;
   cin>>t;
   while(t--)
   {
      cin>>n;
      int w[n],l[n];
      ans=0;
                                  
                                   if(n==2)
                                  {
                                      cin>>a>>b;
                                      cin>>c>>d;
                                     if(a==1 && b==2) cout<<0<<"\n"; else { if(c==1) cout<<2<<"\n"; else cout<<1<<"\n"; }
                                  }
                               
                                  if(n==3)
                                 {
                                        f1
                                       { cin>>w[i]; if(w[i]==1) {a=i; a1=i;} else if(w[i]==2) {b=i; b1=i;} else {c=i; c1=i;}}
                                        
                                        f1
                                          cin>>l[i];
                                        while(b<=a)
                                          { b+=l[b1]; ans+=1; }
                                        while(c<=b || c<=a)
                                          { c+=l[c1]; ans+=1; }
                                       
                                     cout<<ans<<"\n";
                                 }
                               
                                 if(n==4)
                                { 
                                         f1
                                         { cin>>w[i]; if(w[i]==1) {a=i; a1=i;} else if(w[i]==2) {b=i; b1=i;} else if(w[i]==3) {c=i; c1=i;} else {d=i; d1=i;}}
                                         
                                         f1
                                           cin>>l[i];
                                         while(b<=a)
                                         { b+=l[b1]; ans+=1; }
                                         while(c<=b || c<=a)
                                         { c+=l[c1]; ans+=1; }
                                         while(d<=a || d<=b || d<=c)
                                         { d+=l[d1]; ans+=1; }
                                     
                                     cout<<ans<<"\n";
                                }
  }
  return 0;
}
     
