There are K problems in a contest with N participants. All the problems don't necessarily have the same points assigned to them - you are given an array A of integers, where Ai denotes the points assigned to the ith problem. If a participant solves the ith problem, they will get Ai points added to their total score. Note that there are no partial points - they can get only 0 or Ai points on the ith problem. For each participant i, you are also given their final verdict in each problem in the form of a binary string Si - a 1 denotes that they solved that problem, and a 0 denotes that they did not.

Your job is to find the total score of each participant.

Input:
The first line of input contains a single integer T, denoting the number of testcases. Then the testcases follow.
First line of each testcase contains 2 space separated integers, N and K, denoting the number of participants and the number of problems in the contest respectively.
The second line contains K space separated integers - A1,A2,…,AK, where Ai denotes the points assigned to the ith problem.
The ith of the next N lines contains a binary string Si of length K, where Sij represents the verdict of the jth problem for ith participant. Sij=1 if they solved that problem, and Sij=0 otherwise.
Output:
For each testcase, output N lines, with the ith line containing a single integer denoting the total score of the ith participant.

Constraints
1≤T≤5
1≤Ai≤105
0≤Sij≤1
Sum of N∗K over all tests is atmost 106
Sample Input:
3
2 2
1 2
01
10
2 2
1 2
11
00
2 1
100
0
1
Sample Output:
2
1
3
0
0
100
Explanation:
Case 1: The first participant's binary string is "01", which means that they did not solve the first problem, but they solved the second problem. And as the points assigned to the two problems are 1 and 2, the total score of the first participant is 2. Hence the first output is 2.

Similarly, the second participant's binary string is "10", which means that they solved the first problem, but did not solve the second problem. So their total score is 1. Hence the second output is 1.

Case 2: The first participant's binary string is "11", which means that they solved both the first and second problems. And as the points assigned to the two problems are 1 and 2, the total score of the first participant is 1+2=3. Hence the third output is 3.

Similarly, the second participant's binary string is "00", which means that they did not solve any problem. So their total score is 0. And hence the fourth output is 0.

Case 3: The first participant's binary string is "0", which means that they did not solve the only problem of the contest. Hence the total score of the first participant is 0. Hence the fifth output is 0.

Similarly, the second participant's binary string is "1", which means that they solved the only problem in the contest. And as the points assigned to that problem is 100, the total score of the second participant is 100. Hence the last output is 100.

// ANSWER

#include<bits/stdc++.h>
using namespace std;

#define ll long

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll t,n,k,c=0;
   string str;
   cin>>t;
   while(t--)
   {
      cin>>n>>k;
      int arr[k];
      for(int i=0; i<k; i++)
        cin>>arr[i];
     while(n--)
    {
      c=0;
      cin>>str;
      for(int i=0; i<k; i++)
      {
         if(str[i]=='1')
           c+=arr[i];
      }
      cout<<c<<"\n";
    }
   }
  return 0;
}
