#include<iostream>
#include<string.h>
using namespace std;
void monthdecode(string a)
 {
  if(a[0]=='A')
  cout << "month: Jan" << endl;
  if(a[0]=='B')
  cout << "month: feb" << endl;
  if(a[0]=='C')
  cout << "month: mar" << endl;
  if(a[0]=='D')
  cout << "month: aprl" << endl;
  if(a[0]=='E')
  cout << "month: may" << endl;
  if(a[0]=='F')
  cout << "month: June" << endl;
  if(a[0]=='G')
  cout << "month: july" << endl;
  if(a[0]=='H')
  cout << "month: aug" << endl;
  if(a[0]=='I')
  cout << "month: sept" << endl;
  if(a[0]=='J')
  cout << "month: oct" << endl;
  if(a[0]=='K')
  cout << "month: nov" << endl;
  if(a[0]=='L')
  cout << "month: dec" << endl;
 }

void datedecode1(string a)
{
  if(a[1]=='Q')
  cout << "date: 0" << endl;
  if(a[1]=='R')
  cout << "date: 1" << endl;
  if(a[1]=='S')
  cout << "date: 2" << endl;
  if(a[1]=='T')
  cout << "date: 3" << endl;
  if(a[1]=='U')
  cout << "date: 4" << endl;
  if(a[1]=='V')
  cout << "date: 5" << endl;
  if(a[1]=='W')
  cout << "date: 6" << endl;
  if(a[1]=='X')
  cout << "date: 7" << endl;
  if(a[1]=='Y')
  cout << "date: 8" << endl;
  if(a[1]=='Z')
  cout << "date: 9" << endl;
 
}
void datedecode2(string a)
{

  if(a[2]=='Q')
  cout << "date: 0" << endl;
  if(a[2]=='R')
  cout << "date: 1" << endl;
  if(a[2]=='S')
  cout << "date: 2" << endl;
  if(a[2]=='T')
  cout << "date: 3" << endl;
  if(a[2]=='U')
  cout << "date: 4" << endl;
  if(a[2]=='V')
  cout << "date: 5" << endl;
  if(a[2]=='W')
  cout << "date: 6" << endl;
  if(a[2]=='X')
  cout << "date: 7" << endl;
  if(a[2]=='Y')
  cout << "date: 8" << endl;
  if(a[2]=='Z')
  cout << "date: 9" << endl;
 
}
void yeardecode(string a)
 {
  if(a[3]=='A')
  cout << "year: 1996" << endl;
  if(a[3]=='B')
  cout << "year: 1997" << endl;
  if(a[3]=='C')
  cout << "year: 1998" << endl;
  if(a[3]=='D')
  cout << "year: 1999" << endl;
  if(a[3]=='E')
  cout << "year: 2000" << endl;
  if(a[3]=='F')
  cout << "year: 2001" << endl;
  if(a[3]=='G')
  cout << "year: 2002" << endl;
  if(a[3]=='H')
  cout << "year: 2003" << endl;
  if(a[3]=='I')
  cout << "year: 2004" << endl;
  if(a[3]=='J')
  cout << "year: 2005" << endl;
  if(a[3]=='K')
  cout << "year: 2006" << endl;
  if(a[3]=='L')
  cout << "year: 2007" << endl;
  if(a[3]=='M')
  cout << "year: 2008" << endl;
  if(a[3]=='N')
  cout << "year: 2009" << endl;
  if(a[3]=='O')
  cout << "year: 2010" << endl;
  if(a[3]=='P')
  cout << "year: 2011" << endl;
  if(a[3]=='Q')
  cout << "year: 2012" << endl;
  if(a[3]=='R')
  cout << "year: 2013" << endl;
  if(a[3]=='S')
  cout << "year: 2014" << endl;
  if(a[3]=='T')
  cout << "year: 2015" << endl;
  if(a[3]=='U')
  cout << "year: 2016" << endl;
  if(a[3]=='V')
  cout << "year: 2017" << endl;
  if(a[3]=='W')
  cout << "year: 2018" << endl;
  if(a[3]=='X')
  cout << "year: 2019" << endl;
  if(a[3]=='Y')
  cout << "year: 2020" << endl;
  if(a[3]=='Z')
  cout << "year: 2021" << endl;
 }

int main()
{
//char d[5];
string d;
cout << "enter the coded date:" << endl;
cin >> d;
monthdecode(d);
datedecode1(d);
datedecode2(d);
yeardecode(d);
return 0;
}

