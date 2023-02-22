//Pivot in rotated and sorted array 


#include<bits/stdc++.h>
using namespace std;

int getpivot (int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start)/2;
  
  
  while (start < end)
  {
    if (arr[mid] >= arr[0])
    {
      start = mid + 1;
    }
    else 
    {
      end = mid;
    }
    
    mid = start + (end - start)/2;
    }
  
  return start; 
}



int main()
{
  int arr[5] = {5,6,8,1,2};
  int answer = getpivot(arr,5);
  cout << answer;
}


//Answer will be 3
