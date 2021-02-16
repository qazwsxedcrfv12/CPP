                                     //Chef and Meetings
/*Question*/
A time is a string in the format "HH:MM AM" or "HH:MM PM" (without quotes), where HH and MM are always two-digit numbers. A day starts at 12:00 AM and ends at 11:59 PM. You may refer here for understanding the 12-hour clock format.

Chef has scheduled a meeting with his friends at a time P. He has N friends (numbered 1 through N); for each valid i, the i-th friend is available from a time Li to a time Ri (both inclusive). For each friend, can you help Chef find out if this friend will be able to attend the meeting? More formally, check if Li≤P≤Ri for each valid i.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single time P.
The second line contains a single integer N.
N lines follow. For each valid i, the i-th of these lines contains two space-separated times Li and Ri.
Output
For each test case, print a single line containing one string with length N. For each valid i, the i-th character of this string should be '1' if i-th friend will be able to attend the meeting or '0' otherwise.

Constraints
1≤T≤500
1≤N≤500
each time is valid in the 12-hour clock format
for each valid i, the time Ri is greater or equal to Li
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
12:01 AM
4
12:00 AM 11:42 PM
12:01 AM 11:59 AM
12:30 AM 12:00 PM
11:59 AM 11:59 PM
04:12 PM
5
12:00 AM 11:59 PM
01:00 PM 04:12 PM
04:12 PM 04:12 PM
04:12 AM 04:12 AM
12:00 PM 11:59 PM
Example Output
1100
11101
Explanation
Example case 1:

Friend 1: 12:01 AM lies between 12:00 AM and 11:42 PM (that is, between 00:00 and 23:42 in the 24-hour clock format), so this friend will be able to attend the meeting.
Friend 2: 12:01 AM lies between 12:01 AM and 11:59 AM (between 00:01 and 11:59 in the 24-hour clock format).
Friend 3: 12:01 AM does not lie between 12:30 AM and 12:30 PM (between 00:30 and 12:30 in the 24-hour clock format), so this friend will not be able to attend the meeting.
Friend 4: 12:01 AM does not lie between 11:59 AM and 11:59 PM (between 11:59 and 23:59 in the 24-hour clock format).
Example case 2: For friend 3, 04:12 PM lies between 04:12 PM and 04:12 PM (inclusive) and hence this friend will be able to attend the meeting.


/*Answer*/

#include<bits/stdc++.h>
#include<string>
using namespace std;

#define endl "\n"
#define gt getline

int check_2a(string str)
{  int caa=0;
     if(str[0]=='1' && str[1]=='2')
       { caa=caa*10+str[0]-'0'; caa=caa*10+str[1]-'0'; caa=caa*10+str[2]-'0'; caa=caa*10+str[3]-'0'; }
     if(str[1]!='2' || str[0]!='1')
       { caa=caa*10+str[0]-'0'; caa=caa*10+str[1]-'0'; caa=caa*10+str[2]-'0'; caa=caa*10+str[3]-'0'; caa+=1200; }
   return caa;
}

int check_4a(string str)
{  int da=0;
     if(str[6]=='1' && str[7]=='2')
       { da=da*10+str[6]-'0'; da=da*10+str[7]-'0'; da=da*10+str[8]-'0'; da=da*10+str[9]-'0'; }
       if(str[7]!='2' || str[6]!='1')
       { da=da*10+str[6]-'0'; da=da*10+str[7]-'0'; da=da*10+str[8]-'0'; da=da*10+str[9]-'0'; da+=1200; }
   return da;
}

int check_1a(string str)
{   int ca=0;
    if(str[0]=='1' && str[1]=='2')
    { ca=ca*10+str[2]-'0'; ca=ca*10+str[3]-'0'; }
    if(str[1]!='2' || str[0]!='1')
    { ca=ca*10+str[0]-'0'; ca=ca*10+str[1]-'0'; ca=ca*10+str[2]-'0'; ca=ca*10+str[3]-'0'; }
   return ca;
}

int check_3a(string str)
{   int da=0;
      if(str[6]=='1' && str[7]=='2')
       { da=da*10+str[8]-'0'; da=da*10+str[9]-'0'; }
       if(str[7]!='2' || str[6]!='1')
       { da=da*10+str[6]-'0'; da=da*10+str[7]-'0'; da=da*10+str[8]-'0'; da=da*10+str[9]-'0'; }
   return da;
}

void remove_spaces(string &s)
{ s.erase(remove(s.begin(),s.end(),' '),s.end()); s.erase(remove(s.begin(),s.end(),':'),s.end()); }

int main()
{
   ios_base::sync_with_stdio(false); 
   cin.tie(0); 
   cout.tie(0);
     int qq,eval=0,value1,value2;
     string s;
     cin>>qq;
        gt(cin,s);
     while(qq--)
     {  
        eval=0; string sx1;
        gt(cin,s);
                remove_spaces(s);
       if(s[4]=='A')
      {
           if(s[0]=='1' && s[1]=='2')
            { eval=eval*10+s[2]-'0'; eval=eval*10+s[3]-'0'; }
           if(s[1]!='2' || s[0]!='1')
          { eval=eval*10+s[0]-'0'; eval=eval*10+s[1]-'0'; eval=eval*10+s[2]-'0'; eval=eval*10+s[3]-'0'; }
      }
      if(s[4]=='P')
     {
         if(s[0]=='1' && s[1]=='2')
        { eval=eval*10+s[0]-'0'; eval=eval*10+s[1]-'0'; eval=eval*10+s[2]-'0'; eval=eval*10+s[3]-'0'; }
       if(s[1]!='2' || s[0]!='1')
        { eval=eval*10+s[0]-'0'; eval=eval*10+s[1]-'0'; eval=eval*10+s[2]-'0'; eval=eval*10+s[3]-'0'; eval+=1200; }
      }
       int t;
       cin>>t;
       string xy;
       gt(cin,xy);
       while(t--)
      {
          gt(cin,xy); remove_spaces(xy);
          if(xy[4]=='A') value1=check_1a(xy); if(xy[4]=='P') value1=check_2a(xy); if(xy[10]=='A') value2=check_3a(xy); if(xy[10]=='P') value2=check_4a(xy);
          if(eval>=value1 && eval<=value2) sx1+='1';
          else sx1+='0';
      }
       cout<<sx1<<endl;
   }
   return 0;
}
