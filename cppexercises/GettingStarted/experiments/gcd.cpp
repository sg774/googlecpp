#include<iostream>
using namespace std;
int gcd(int a, int b);
int main()
{
  int x,y,z;
  cout << "enter the first integer:" << endl;
  cin >> x;
  cout << "enter the second integer:" << endl;
  cin >> y;
  z = gcd(x,y);
  cout << "gcd of entered numbers is:" << z << endl;
  return 0;
}
gcd( a, b)
{
 int c;
 while(b!=0)
   {
      c = b;
      b = a%b;
      a = c;
   }
 return a;
}
