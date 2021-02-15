                                     //Highest Divisor
/*Question*/
You are given an integer N. Find the largest integer between 1 and 10 (inclusive) which divides N.

Input
The first and only line of the input contains a single integer N.

Output
Print a single line containing one integer ― the largest divisor of N between 1 and 10.

Constraints
2≤N≤1,000
Subtasks
Subtask #1 (100 points): original constraints

Example Input 1
24
Example Output 1
8
Explanation
The divisors of 24 are 1,2,3,4,6,8,12,24, out of which 1,2,3,4,6,8 are in the range [1,10]. Therefore, the answer is max(1,2,3,4,6,8)=8.

Example Input 2
91
Example Output 2
7
Explanation
The divisors of 91 are 1,7,13,91, out of which only 1 and 7 are in the range [1,10]. Therefore, the answer is max(1,7)=7.
*/

/*Answer*/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fo for(int i=10; i>=1; i--)

int main()
{
   ios_base::sync_with_stdio(false); 
   cin.tie(0); 
   cout.tie(0);
   int qq;
   cin>>qq;
       fo {if(qq%i==0){ cout<<i<<endl; break;}}
  return 0;
}
