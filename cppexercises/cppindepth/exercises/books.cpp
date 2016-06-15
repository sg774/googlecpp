#include<iostream>
using namespace std;
class calculation
{
private:
int a,c,d,g,i;
float b,h,z,prof,cst;
char e,f,x,y;
public:
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
float cost(int g,float h,int i,char x, char y)
{
if(x=='r' && y=='n')
{
cst = h*(g*0.9-i);
cout << "need to order:" << int(g*0.9)-i << endl;
cout << "total cost:" << cst << endl;
}
if(x=='o' && y=='n')
{
cst = h*(g*0.4-i);
cout << "need to order:" << int(g*0.4)-i << endl;
cout << "total cost: " << cst << endl;
}
if(x=='r' && y=='u')
{
cst = h*(g*0.65-i);
cout << "need to order:" << int(g*0.65)-i << endl;
cout << "total cost: " << cst << endl;
}
if(x=='o' && y=='u')
{
cst = h*(g*0.2-i);
cout << "need to order:" << int(g*0.2)-i << endl;
cout << "total cost: " << cst << endl;
}
cout <<"**********************************************" << endl;
return cst;
}
float profit(float z)
{
prof = z*0.2;
return prof;
}
};
 

int main()
{
calculation book;
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
book.data(code,unit,stock,enroll,res1,res2);
book.cost(enroll,unit,stock,res1,res2);
cout << "add another book? (Y/N)" << endl;
cin >> res3;
total_order+=book.cost(enroll,unit,stock,res1,res2);
total_profit+=book.profit(total_order);
cout <<"**********************************************" << endl;
cout << "total expenditure: " << total_order << endl;
cout << "total profit: " << total_profit << endl;
}while(!(res3=='N'));
return 0;
}
