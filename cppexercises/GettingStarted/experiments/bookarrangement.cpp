#include<iostream>
using namespace std;
int factorial(int a);
int main()
{
  int x;
  cout << "enter the no. of different books tob arranged:" << endl;
  cin >> x;
  cout << "the no. of ways in which books can be arranged:" << factorial(x) << endl;
  return 0;
}
int factorial( int a )
{
 if(a==1 or a==0)
   return 1;
 else
   return a*factorial(a-1);
}

