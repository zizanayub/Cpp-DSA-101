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

//     First it will execute matched cases, then it will execute all of
//     following cases after that if break is not added!
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









//Local Variables

#include<bits/stdc++.h>
using namespace std;

int power(int num1, int num2)
{
    cout << a;

   

    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int answer = power(a,b);
    cout << answer;
}


//error: 'a' was not declared in this scope|
//Beacause a is the variable of main function. a was not declared in power function. 









//Local Variables-2 (Num)


#include<bits/stdc++.h>
using namespace std;

int power(int num1, int num2)
{

    cout << num1 << endl;
    int ans = 1;

    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int answer = power(a,b);
    cout << answer;
}


//OUTPUT:
//Input: 2 3
//Answer:
//2 
//8

//The program ran correct as the num1 variable was existed in the power function. 









//Odd-even Identification
#include<bits/stdc++.h>
using namespace std;

bool isEven(int num)
{
    if(num&1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << "This number is odd" ;
    }
    else
    {
        cout << "This number is even";
    }

}


//OUTPUT
//Input: 33
//"This number is odd"









//nCr
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int ans = 1;
    for ( int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n,int r)
{
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    return num/den;
}


int main()
{
    int n,r;
    cin >> n >> r;
    int answer = nCr(n,r);
    cout << "The answer is: " << answer;
}


//OUTPUT
//InputL 7 2
// The answer is: 21








//Counting Number Function (Using void)
#include<bits/stdc++.h>
using namespace std;

void countNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}


int main()
{
    int n;
    cin >> n;

    countNumber(n);
}

//OUTPUT
//Input: 5
// 1 2 3 4 5 









//Check if the number is prime or not

#include<bits/stdc++.h>
using namespace std;


bool checkPrime(int n)
{
   for ( int i = 2; i < n ; i++ )
   {
      if ( n % i == 0 )
      {
         return 0;
      }
   }
   return 1; 
}



int main()
{
   int n;
   cin >> n;
   if (checkPrime(n))
   {
      cout << "Prime Number" << endl;
   }
   else 
   {
      cout << "Not a Prime Number."<< endl;
   }
}


//OUTPUT
//3
//Prime Number 
















//Pass by value

#include<bits/stdc++.h>
using namespace std;

void pass(int n)
{
    n++;
    cout << "The value of n in the pass is: "<< n << endl;

}

int main()
{
    int n;
    cin >> n;
    pass(n);
    cout << "The value of n is: " << n << endl;
}

//OUTPUT
// Input: 4
// The value of n is the pass is: 5
// The value of n is: 4

