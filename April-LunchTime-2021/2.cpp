
                             //Equinox Strings


//Problem Statement
Sarthak and Anuradha are very good friends and are eager to participate in an event called Equinox. It is a game of words. In this game, N strings S1,…,SN are given. For each string Si, if it starts with one of the letters of the word “EQUINOX”, Sarthak gets A points and if not, Anuradha gets B points. The one who has more points at the end of the game wins. If they both the same number of points, the game is a draw..

Print the winner of the game, if any, otherwise print “DRAW”.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
The first line of each test case contains three integers N, A, B.
N lines follow, each containing a string Si.
All strings are in UPPERCASE.
Output
For each test case, print “SARTHAK” (case insensitive) if he has more points than Anuradha, print “ANURADHA” (case insensitive) if she has more points than Sarthak, otherwise print “DRAW” (case insensitive), without the quotes.
Constraints
1≤T≤100
1≤N≤100
1≤A, B≤109
1≤|Si|≤100
Subtasks
Subtask #1 (100 points): original constraints

Sample Input
2
4 1 3
ABBBCDDE
EARTH
INDIA
UUUFFFDDD
2 5 7
SDHHD
XOXOXOXO
Sample Output
DRAW
ANURADHA


//Code
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int main()
{
   f0;
   long long t,a,b,n,c=0,d=0;
   string str;
   cin>>t;
   while(t--)
   {
       cin>>n>>a>>b;
       while(n--)
       {
           cin>>str;
           if(str[0]=='E' || str[0]=='Q' || str[0]=='U' || str[0]=='I' || str[0]=='N' || str[0]=='O' || str[0]=='X')
            c+=a;
           else
            d+=b;
        }
        if(c>d)
          cout<<"SARTHAK\n";
        else if(c<d)
          cout<<"ANURADHA\n";
        else
          cout<<"DRAW\n";
       c=0; d=0;
    }
  return 0;
}
