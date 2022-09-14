//Array
//Filling with 0 in array


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[5] = {1};
    cout << array[1];
}


//OUTPUT
//0

//******Array automatically fills out the index with 0 if the values in the array are not declared.








//Homework-1
//Fill out the whole array[1000] with 1 (or any number)
//Solve of Homework
//Comment of Kartik Gupta
//*****fill_n command 


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int array[100];
    fill_n(array,100,-9);

    for ( int i = 1; i <= 5; i++ )
    {
        cout << array[i] << endl;
    }
}

//OUTPUT
// -9
// -9
// -9
// -9
// -9









//Array with Functions
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size)
{
    cout << "Printing the Array" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }

}


int main()
{
    int array[10] = {1,4,21,2};
    printArray(array,10);
}


//OUTPUT
// Printing the Array
// 1 4 21 2 0 0 0 0 0 0 16










//sizeof
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[12] = {1,2,31,21};
    cout << "The size of the array is: " << sizeof(array)/sizeof(int) <<endl;

}
//OUTPUT









//Different types of array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char chArray[15] = {'a','e','b','z'};
    for (int i = 0; i <= 20; i++)
    {
        cout << chArray[i] << " ";
    }
}
//OUTPUT
//a e b z                       ☼       0 ↨
