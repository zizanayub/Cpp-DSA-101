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





//IF WE REMOVE DEFAULT, WHAT WILL HAPPEN?

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n = 3;
   switch( n )
   {
   case 1:
       cout << "First" << endl;
       break;
   case 2:
       cout << "Second" << endl;
       break;

       //It will print empty if we don't add 'default' case
   }

}


//OUTPUT: 
// ****EMPTY****



////Why we added break in each case?
//Let's find out without adding break!

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout << "Enter the number: ";
   cin >> n;

   switch( n )
   {
   case 1:
       cout << "It's 1" << endl;
   case 2:
       cout << "It's 2" << endl;
   case 3:
       cout << "It's 3" << endl;
   }

    First it will execute matched cases, then it will execute all of
    following cases after that if break is not added!
}



//OUTPUT: Input: 2
//"It's 2"
//"It's 3"
