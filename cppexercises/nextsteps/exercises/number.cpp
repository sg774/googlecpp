#include<iostream>
#include<math.h>
#include<typeinfo>
using namespace std;
int square( int a)
{
  int d=2;
 if(typeid(sqrt(a)).name() == typeid(d).name())
 return 1;
 else
 return 0;
}

int sumseries( int b)

{
  int f=2;
 if(typeid((sqrt((8*b)+1)-1) / 2).name() == typeid(f).name()) //from the formula of sum of A.P with a=1 and d=1
 return 1;
 else
 return 0;
}

int main()
{
int c;
for(c=32767 ; c<2147483648; c++)
{
if(square(c)==1 && sumseries(c)==1)
{cout << "the required number is:" << c << endl;
break;
}
}
cout << "number not found" << endl;
return 0;
}

