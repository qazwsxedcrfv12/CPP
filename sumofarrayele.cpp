#include<bits/stdc++.h>
using namespace std;

void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main()
{
   fastIO();
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
      cin>>arr[i];
      
  int sum=accumulate(arr,arr+n,0);
  cout<<sum<<endl;
 return 0;
}
