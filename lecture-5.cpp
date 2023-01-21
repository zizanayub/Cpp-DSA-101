//5.1 Introduction of bitwise operators 

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b;
  int a = 4;
  int b = 6;
  cout << (a & b) << endl;
  cout << (a | b) << endl;
  cout << (~a) << endl;
  cout << (a ^ b) << endl;
}




//5.2
//** Right shift: Decrease 
//** Left Shift: Increase 

#include<bits/stdc++.h>
using namespace std;

int main()
{
  cout << (14 >> 1) << endl;
  cout << (5 >> 2) << endl;
  cout << (19 << 1) << endl;
  cout << (20 << 2) << endl;
}




//5.3
//Pre and post decrement/increment

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a = 12;
  cout << (a++) << endl;
  cout << a << endl;
  cout << (++a) << endl;
  cout << (a--) << endl;
  cout << (--a) << endl;
}




//5.4
//5 MCQs by Love Babbar
//5.4.1

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b = 1;
  a = 10;
  if (++a)
    cout << b;
  else 
    cout << ++b;
}




//5.4.2

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a = 1;
  int b = 2;
  if (a-- > 0 && ++b > 2)
    cout << "Stage 1- Inside if" << endl;
  else 
    cout << "Stage 2- Inside else" << endl;
  
  cout << a << " " << endl; 
}




//5.4.3
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a = 1;
  int b = 2;
  
  if(a-- > 0 || ++b >2) cout << "Stage 1- Inside if";
  else cout << "stage 2- Inside else";
  
  cout << a << " " << b << endl;
}





//5.4.4

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int number = 3;
  cout << (25* (++number));
}
// 100




//5.4.5

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a = 1;
  int b = a++;
  int c = ++a;
  cout << b;
  cout << c; 
  
  //1,3
}





//5.5
//For Loop
// Printing the number from 1 no n. 

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  for (int i = 1; i <= n; i++){
    cout << i << " ";
  }
}





//5.5.1
//Removing initiation i = 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int i = 1;
  for (; i <= n; i++)
  {
    cout << i << " ";
  }
}





//5.5.2
//Removing upgradation

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int i = 1;
  for (; i <= n; )
  {
    cout << i << " ";
    i++;
  }
}






//5.5.3
//Removing all portions in for condition
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  int i = 1;
  for (; ;)
  {
    if (i <= n)
    cout << i <<" ";
    i++;
 }
  
  
  
  
 //5.5.4
 //break statement
 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
  {
    int n;
    cin >> n;
    int i = 1;
    for (; ;)
    {
      if (i <= n) cout << i << " ";
      else break;
      i++;
    }
}
  

  
  
  
 //5.5.5
 //Multiple conditions in for loop
 
  #include<bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n;
    for (a = 0, b = 2; a < n, b <= n; a--, b++)
    {
      cout << a << " " << b;
    }
  }
 
  
  
  
  
  
 //5.5.6
 //Sum from 1 to n
 
 #include<bits/stdc++.h>
 using namespace std;
  
 int main()
 {
   int n;
   cout << "Enter the value of n: ";
   cin >> n;
   
   int sum = 0;
   for (int i = 1; i <= n; i++)
   {
     sum += i;
   }
   cout << "The sum from 1 to " << n << " is " << sum << endl;
 }
 
  
  
  
  
  
 //5.5.7
 //Fibonacci Series
 
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   int n;
   cin >> n;
   int a = 0;
   int b = 1;
   cout << a << " " << b << " ";
   for (int i = 0; i <= n; i++)
   {
     int sum = a+b;
     cout << sum << " ";
     a = b;
     b = sum;
   }
 }
  
 
  
  
  
 //5.5.8
 //Check the number is prime or not
 
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   int n;
   cin >> n;
   
   //Checking the prime number 
   for (int i = 2; i < n; i++)
   {
     if(n%i==0){
       cout << " Not a prime number!" << endl;
       break;
     }
     else {
       cout << " A prime number!" << endl;
       break;
     }
   }
     
 }
   

  
  
  
  
//5.5.9
//Checking prime number with boolean

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  bool isPrime = 1;
  
  for (int i = 2; i < n; i++)
  {
    if(n%i==0)
    {
      isPrime = 0;
      break;
    }
    else 
    {
      isPrime = 1;
      break;
    }
  }
  
  if(isPrime == 1)
  {
    cout << "is a prime number" << endl;
  }
  else 
  {
    cout << " Not a prime number" << endl;
  }
  
}
  

  
