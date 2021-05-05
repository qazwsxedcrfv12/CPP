
                                //Chef in Heaven


//Problem Statement
When Chef was born, his parents took him to the famous monk Doctor Strange to know whether he will land himself in heaven after his life or not. According to Strange, Chef will live for L years in total. If he wants to go to heaven, he must spend at least 50% of his life years doing good deeds. He also shows them his future using a string S of length L where Si=0 means the i-th year will be counted as bad as per the rule books of heaven and Si=1 means the i-th year will be counted as good.

Also, Strange can use his special powers to make Chef end his life earlier than that planned by god, i.e, he can choose some L′ (1≤L′≤L) and make him live for only L′ years. Strange wants Chef to succeed, so if there is any choice of L′ that allows Chef to go to heaven, he will do so.

Tell whether Chef can go to heaven.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains two lines of input.
The first line contains a single integer L.
The second line contains a string S of length L, consisting of symbols 0 and 1.
Output
For each test case, output the answer in a single line: "YES" if Chef can go to heaven and "NO" if not (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤L≤105
The sum of L over all tests does not exceed 106
Subtasks
Subtask #1 (100 points): original constraints

Sample Input:
3
2
10
3
001
4
0100
Sample Output
YES
NO
YES
Explanation
Test case 1: If Chef lives for the complete 2 years, he will have a total of 1 good year which is 1∗1002=50% of his life, and hence he will go to heaven.

Test case 2: There's no way Chef can go to heaven.

Test case 3: If Chef lives for 2 years, he will have a total of 1 good year which is 1∗1002=50% of his life, and hence he will go to heaven.





//Code
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int main()
{
    f0;
    int t,l,c,d;
    bool flag;
    string str;
    
    cin>>t;
    while(t--)
    {
        c=0; d=0;
        flag=true;
        cin>>l;
        cin>>str;
        
        if(str[0]=='1')
          cout<<"YES\n";
        else
        {
            for(int i=0; i<l; i++)
            {
               if(str[i]=='0')
                c++;
               else
                d++;
               if(d>=c)
               { cout<<"YES\n"; flag=false; break; }
            }
            
            if(flag)
             cout<<"NO\n";
         }
    }
   return 0;
}
