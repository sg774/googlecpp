#include<iostream>
using namespace std;

void method1()
{
 cout << "the weekly earing is 600" << endl;
}

void method2(int sales)
{
 int weekly_hours(28);
 float comm(0.1);
 
 float weekly_earning2 = weekly_hours*7 + comm*sales;
 cout << "the weekly earning is:" << weekly_earning2 << endl;
}
void method3(int sales)
{
 float comm2(0.2);
 float weekly_earning3 = comm2*sales +  (sales/225)*20;
 cout << "the weekly earning is:" << weekly_earning3 << endl;
}
int main()
{
 int sales;
 int units;
 cout << "enter no. of units sold:" << endl;
 cin >> units;
 sales = units*225;
 cout << "the estimated weekly earnings from different alternatives are:" << endl;
 method1();
 method2(sales);
 method3(sales);
 return 0;
}
 
