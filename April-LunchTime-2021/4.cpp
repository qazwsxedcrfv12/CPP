
                          //Bench Press


//Problem Statement
In the gym, Chef prefers to lift at least W grams during a bench press and if that's impossible, Chef considers his workout to be incomplete and feels bad.

The rod weighs Wr grams and there are N other weights lying on the floor that weigh w1,w2,...,wN grams. To maintain balance and to ensure that there is no unnecessary load due to torque, it's important that the weights added to the left side are symmetric to the weights added to the right side. It is not required to use all of the weights. It is also not required to use any weights at all, if Chef feels satisfied lifting only the rod.

For example:

1 2 2 1 |Rod Center| 1 1 1 3 is a wrong configuration, but

1 2 3 1 |Rod Center| 1 3 2 1 is a right configuration.

Find whether Chef will be able to collect the required weights to feel satisfied.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains two lines of input.
The first line contains three space-separated integers N,W,Wr.
The second line contains N space-separated integers w1,w2,…,wN.
Output
For each test case, output the answer in a single line: "YES" if Chef will be satisfied after his workout and "NO" if not (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤10
1≤N≤105
1≤W≤2⋅105
1≤wi≤105
1≤Wr≤2⋅104
Subtasks
Subtask #1 (30 points): wi=1 for all valid i

Subtask #2 (70 points): original constraints

Sample Input
3
2 5 10 
2 2
7 100 50
100 10 10 10 10 10 90 
6 100 40 
10 10 10 10 10 10
Sample Output
YES
NO
YES
Explanation
Test case 1: Since the weight of the rod is at least the required weight to be lifted, Chef will feel satisfied after the workout.

Test case 2: The configuration having maximum weight is:

10 10 |Rod Center| 10 10
So the maximum total weight Chef can lift is 50+4⋅10=90 which is less than the required amount to get satisfied.

Test case 3: The configuration having maximum weight is:

10 10 10 |Rod Center| 10 10 10
So the maximum total weight Chef can lift is 40+6⋅10=100 which is equal to the required amount to get satisfied.




//Code

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main()
{
   f0;
   ll t,n,wi,w;
   unordered_map<ll,ll>mp;
   cin>>t;
   while(t--)
   {
       cin>>n>>w>>wi;
       ll arr[n];
       for(ll i=0; i<n; i++)
       {
           cin>>arr[i];
           mp[arr[i]]++;
       }
          
       if(wi>=w)
        cout<<"YES\n";
       else
       {
          w-=wi;
          for(auto it: mp)
          {
             if(it.second%2==0)
             {
                w-=(it.first*it.second);
             }
             else
             {
                w-=(it.first*(it.second-1));
             }
          }
          
          if(w<=0)
           cout<<"YES\n";
          else
           cout<<"NO\n";
       }
       mp.clear();
   }
  return 0;
}
   
