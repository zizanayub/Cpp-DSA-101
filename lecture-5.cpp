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
