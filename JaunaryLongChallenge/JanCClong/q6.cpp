/* And-or Game

Chef is playing a game with two sequences of non-negative integers A1,A2,…,AN and B1,B2,…,BM. He has an integer V, which is initially equal to 0. Chef will play for a number of turns he chooses (possibly zero); he stops playing when he gets bored. In each turn of the game, Chef must perform one of the following operations:

Choose an integer X from A and change V to V∨X, i.e. the bitwise OR of V and X.
Choose an integer X from B and change V to V∧X, i.e. the bitwise AND of V and X.
Find the number of possible distinct values which V can have after the game ends.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and M.
The second line contains N space-separated integers A1,A2,…,AN.
The third line contains M space-separated integers B1,B2,…,BM.
Output
For each test case, print a single line containing one integer ― the number of possible values of V after the game ends.

Constraints
1≤N,M≤220
0≤Ai<220 for each valid i
0≤Bi<220 for each valid i
A1,A2,…,AN are pairwise distinct
B1,B2,…,BM are pairwise distinct
the sum of N over all test cases does not exceed 220
the sum of M over all test cases does not exceed 220
Subtasks
Subtask #1 (30 points, time limit 2 seconds):

1≤N,M≤210
0≤Ai<210 for each valid i
0≤Bi<210 for each valid i
Subtask #2 (30 points, time limit 2 seconds):

1≤N,M≤215
0≤Ai<215 for each valid i
0≤Bi<215 for each valid i
Subtask #3 (40 points, time limit 5 seconds): original constraints

Example Input
3
3 1
5 12 14
15
6 1
0 1 3 6 12 14
1
4 3
1 3 5 6
3 6 10
Example Output
6
9
8
Explanation
Example case 1: V can reach the values {0,5,12,13,14,15}.

Example case 2: V can reach the values {0,1,3,6,7,12,13,14,15}.

Example case 3: V can reach the values {0,1,2,3,4,5,6,7}.

*/

// Answer Code

#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

#define st stack<int> 
#define pu st1.push
#define to st1.top() 
#define po st1.pop()
#define em st1.empty() 
#define u_s unordered_set<int>
#define in s.insert 
#define fi s.find
#define en s.end() 
#define si s.size()
#define cl s.clear()
#define f1 for(int i=0; i<n1; i++)
#define f2 for(int i=0; i<m1; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    st st1;
    u_s s;
    int q,n1,m1,z,x1;
    cin>>q;
    while(q--)
    {
        cin>>n1>>m1;
        int arr[n1],arr1[m1];
        f1 cin>>arr[i];
        f2 cin>>arr1[i];
     pu(0);
          while(!em)
         {  
             x1=to;  po;
             f1 {z=arr[i]; if(fi(x1|z)==en){in(x1|z); pu(x1|z);} }
             f2 {z=arr1[i]; if(fi(x1&z)==en){in(x1&z); pu(x1&z);} }
         }
      cout<<si<<endl; cl;
    }
   return 0;
}
