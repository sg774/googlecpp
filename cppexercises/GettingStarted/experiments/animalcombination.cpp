#include<iostream>
using namespace std;
int main()
{
int h,p,r;
for(h=0;h<100;h++)
  for(p=0;p<100;p++)
    for(r=0;r<100;r++)
      if((h+p+r)==100)
        if((h*10 + p*3 + r*0.5) == 100)
          cout << h << "horses" << p << "pigs" << r << "rabbits satisfy the combination." << endl;
return 0;
} 
