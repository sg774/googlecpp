#include<iostream>
using namespace std;
void data(int a,float b,int c,int d,char e,char f)
{
cout <<"**********************************************" << endl;
cout << "book id:" << a << endl;
cout << "unit cost:" << b << endl;
cout << "available stock:" << c << endl;
cout << "expected enrollment:" << d << endl;
cout << "this book is" << e << "and" << f << endl;
cout << "*********************************************" << endl;
}
float cost(int a,float b,int c,char x, char y)
{
float cst;
if(x=='r' && y=='n')
{
cst = b*(a*0.9-c);
cout << "need to order:" << int(a*0.9)-c << endl;
cout << "total cost:" << cst << endl;
}
if(x=='o' && y=='n')
{
cst = b*(a*0.4-c);
cout << "need to order:" << int(a*0.4)-c << endl;
cout << "total cost: " << cst << endl;
}
if(x=='r' && y=='u')
{
cst = b*(a*0.65-c);
cout << "need to order:" << int(a*0.65)-c << endl;
cout << "total cost: " << cst << endl;
}
if(x=='o' && y=='u')
{
cst = b*(a*0.2-c);
cout << "need to order:" << int(a*0.2)-c << endl;
cout << "total cost: " << cst << endl;
}
cout <<"**********************************************" << endl;
return cst;
}
float profit(float z)
{
float prof;
prof = z*0.2;
return prof;
}
 

int main()
{
int code,stock,enroll;
float unit;
char res1,res2,res3;

float total_order=0,total_profit=0;
do
{
cout << "enter book code: " << endl;
cin >> code;
cout << "enter cost per unit:" << endl;
cin >> unit;
cout << "enter available stock:" << endl;
cin >> stock;
cout << "enter expected enrollment:" << endl;
cin >> enroll;
cout << "is book require/optional? (r/o)" << endl;
cin >> res1;
cout << "is the book new/used? (n/u)" << endl;
cin >> res2;
data(code,unit,stock,enroll,res1,res2);
cost(enroll,unit,stock,res1,res2);
cout << "add another book? (Y/N)" << endl;
cin >> res3;
total_order+=cost(enroll,unit,stock,res1,res2);
total_profit+=profit(total_order);
cout <<"**********************************************" << endl;
cout << "total expenditure: " << total_order << endl;
cout << "total profit: " << total_profit << endl;
}while(!(res3=='N'));
return 0;
}
