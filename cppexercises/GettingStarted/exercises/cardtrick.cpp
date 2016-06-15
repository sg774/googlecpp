#include<iostream>
using namespace std;

int calculation(int a)
{
int p,q;
 if (a%2!=0)
  {
   p = a+11;
   q = a-11;
   if(p>0 && p<20)
   cout << "one of the number is:" << p/2 << endl;
   else
   cout << "one of the number is:" << q/2 << endl;
  }
 else
   cout << "one of the number is:" << a/2 << endl;
}
int main() 
{
int ABC,A,B,C,X,Y,Z,P[3];
cout << "enter the 3 digit number:" << endl;
cin >> ABC;
A = ABC/100;
B = (ABC%100)/10;
C = ABC%10;
X = ABC%11;
Y = (B*100 + C*10 + A)%11;
Z = (C*100 + A*10 + B)%11;
P[0] = X+Y;
P[1] = Y+Z;
P[2] = Z+X;
for(int i=0;i<3;i++)
{
 if(P[i] == 9)
  {
   cout << "one of the sum is 9, process stopped" << endl;
   break;
  }
 else
  calculation(P[i]);
}
return 0;
} 

  
