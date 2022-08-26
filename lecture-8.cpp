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








//NESTED SWITCH CASE



#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch = '1';
    int n = 1;

    switch(ch)
    {
    case 1:
        cout << "First" << endl;
        break;

    case '1':
        switch (n)
        {
        case 1:
            cout << "Value of number is: " <<n;
            break;
        }
        break;

        case 2:
            cout << "Two" << endl;
            break;
    }
}


//OUTPUT: "Value of Number is 1"






//Let's have function's basic

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b;
   cin >> a >> b;

   int ans = 1;

   for ( int i = 1; i <= b ; i++ )
   {
       ans = ans * a;
   }

   cout << ans;

   return 0;
}



//OUTPUT: 2 3
//Answer: 8









//First Function

#include<bits/stdc++.h>
using namespace std;


int power (int a,int b)
{
   int ans = 1;
   for (int i = 1; i <= b; i++)
   {
       ans = ans * a;
   }
   return ans;
}


int main()
{
   int a,b;
   cin >> a >> b;

   int answer = power (a,b);
   cout << answer;
}



//OUTPUT: 3 2
//Answer: 9










//Another try without function parameters 

#include<bits/stdc++.h>
using namespace std;


int power()
{
   int a, b;
   cin >> a >> b;

   int ans = 1;
   for ( int i = 1; i <= b; i++ )
   {
       ans = ans * a;
   }
   return ans;
}

int main()
{
   int answer = power();
   cout << "The answer: " << answer << endl;
}



//OUTPUT: Input: 2 3
//Answer: 8









//Printing the same function multiple times


#include<bits/stdc++.h>
using namespace std;

int power (int num1, int num2)
{
   int ans = 1;

   for ( int i = 1; i <= num2; i++)
   {
       ans = ans * num1;
   }
   return ans;
}




int main()
{
   int n;
   cout << "Enter the number of inputs: ";
   cin >> n;
   int a,b;


   for (int i = 1; i <= n; i++)
   {
   cin >> a >> b;
   int answer = power(a,b);
   cout << "The answer is: " << answer << endl;
   }
   }


//OUTPUT
// Input: Enter the number of inputs: 2
// Output:
// 2 3
// The answer is: 8
// 4 2
// The answer is: 16
