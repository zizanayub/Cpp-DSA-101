//Binary Search 
//Implementation
//TC: O(logN)

#include<bits/stdc++.h>
using namespace std;

int BinarySearch (int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;
  
  while (start <= end)
  {
    if(arr[mid]==key) 
    {
      return mid;
    }
    
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    
    else 
    {
      end = mid - 1;
    }
    
    mid = (start + end)/2;
  }
  
  return -1;
}




int main()
{
  int even[6] = {2,4,6,8,10,12};
  int odd[5] = {1,3,5,7,9}
  
  int even_answer = BinarySearch (even, 6, 2);
  int odd_answer = BinarySearch (odd, 5, 3);
  
  cout << "The required index is " << even_answer << endl;
  cout << "The required index is " << odd_answer << endl;
  
  return 0;
}






//With conditions 
//2^31-1



#include<bits/stdc++.h>
using namespace std;



int BinarySearch(int arr[],int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;

    while (start <= end)
    {
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else end = mid - 1;
        mid = start + (end - start)/2;
    }

    return -1;
}


int main()
{
    int even[6] = {2,4,6,8,10,12};

    int even_answer = BinarySearch(even,6,12);
    cout << even_answer;
}
