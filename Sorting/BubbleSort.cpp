#include<bits/stdc++.h>
using namespace std;

int bubble_sort(int arr[], int n)
{
   for(int r = 1; r <= n-1; r++)
   {
     for(int i = 0; i <= n-1-r; i++)
     {
        if(arr[i] > arr[i+1])
        {
           t = arr[i];
                    arr[i] = arr[i+1];
           arr[i+1] = t;
        }
     }
  }
}

int main()
{
   int n;
          cin>>n;
   int arr[n];
   for(int i = 0; i < n; i++)
     cin>>arr[i];
     
   bubble_sort(arr,n);                   // call bubble sort function
   
   for(int i = 0; i < n; i++)
     cout<<arr[i]<<" ";                  // Print the array elements after sorting
   return 0;
}
           
