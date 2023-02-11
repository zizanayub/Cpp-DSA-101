//First Occ. of a key
//Example: 1,2,3,3,3,6,7
//Example: 2,2,3,4,4,4,5



//**It is a sorted array

#include<bits/stdc++.h>
using namespace std;



//Function for First Occurrence 

int FirstOcc (int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;


    int mid = start + (end-start)/2;

    while (start <= end){
      
    // 2 == 2
    if (key == arr[mid])
    {
        ans = mid;
        end = mid - 1;
    }
    
      
    //2 > 1
    else if (key > arr[mid])
    {
        start = mid + 1;
    }
    
      
    //2 < 3 
    else
    {
        end = mid - 1;
    }

    mid = start + (end - start)/2;
    }

    return ans;
}





//Function for last occurrence 
int LastOcc (int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;


    int mid = start + (end-start)/2;

    while (start <= end){

    if (key == arr[mid])
    {
        ans = mid;
        start = mid + 1;
    }

    else if (key > arr[mid])
    {
        start = mid + 1;
    }

    else if (key < arr[mid])
    {
        end = mid - 1;
    }

    mid = start + (end - start)/2;
    }
return ans;
}



int main()
{
    int given_array [7] = {1,2,2,2,3,4,5};
    int answer1 = FirstOcc (given_array,7,2);
    int answer2 = LastOcc (given_array,7,2);

    cout << "The first occurrence of 2 is: " << answer1 << endl;
    cout << "The last occurrence of 2 is: " << answer2 << endl;
}
