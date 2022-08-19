// Basic of Switch Case


#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cout << "Enter the number: ";
   cin >> n;

   switch(n)
   {
   case 1:
       cout << "First" << endl;
       break;

   case 2:
       cout << "Second" << endl;
       break;
   case 3:
       cout << "Third" << endl;
       break;
   default:
       cout << "Please enter the correct number! " << endl;
}
}


// OUTPUT: Input: 1, 
// "First"
