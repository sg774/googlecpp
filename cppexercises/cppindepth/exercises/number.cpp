#include<iostream>
#include<math.h>
#include<typeinfo>
using namespace std;
class Square
{
 private:
 int d;
 public:
 int Typeid(int a)
 {
 if(typeid(sqrt(a)).name() == typeid(d).name())
 return 1;
 else
 return 0;
 }
};

class Sumseries

{
 private:
 int f;
 public:
 int Typeid2(int b)
 {
 if(typeid((sqrt((8*b)+1)-1) / 2).name() == typeid(f).name()) //from the formula of sum of A.P with a=1 and d=1
 return 1;
 else
 return 0;
 }
};

int main()
{
int c;
Square sq;
Sumseries ss;
for(c=32767 ; c<20000000; c++)
{
if(sq.Typeid(c)==1 && ss.Typeid2(c)==1)
{cout << "the required number is:" << c << endl;
break;
}
}
cout << "number not found" << endl;
return 0;
}

