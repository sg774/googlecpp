#include<iostream>
using namespace std;
int reversal(int a)
{ 
 int reverse =0; 
 while(a!=0)
 {
  reverse = reverse*10;
  reverse = reverse + a%10;
  a=a/10;
 }
 return reverse;
}
int main()
{
 int x;
 cout << "enter the 3 digit integer:" << endl;
 cin >> x;
 reversal(x);
 if(!(x>>reversal(x)))
  {
   cout << "warning!first digit should be greater than the last" << endl;
   cin.clear();
   cin.ignore(5,'\n');
  }
 else
  {
   int y = x - reversal(x);
   int z = y + reversal(y);
   cout << " the final no. is: " << z << endl;
  }
 return 0;
}
   
   
