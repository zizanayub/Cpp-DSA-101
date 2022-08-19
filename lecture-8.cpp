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






//BASIC of SWITCH CASE (With CHAR)

#include<bits/stdc++.h>
using namespace std;

int main()
{
   char ch = '1';
   switch( ch )
   {
   case 1:
       cout << "First" << endl;
       break;
   case '1':
       cout << "Character 1" << endl;
       break;
   default:
       cout << "It's a default case!" << endl;
   }
}



//OUTPUT: "Character 1" 
