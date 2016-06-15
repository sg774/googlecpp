#include<iostream>
#include<iomanip>
using namespace std;
void printF()
{
 cout << "FFFFF" << endl;
 cout << "F" << endl;
 cout << "FFF" << endl;
 cout << "F" << endl;
 cout << "F" << endl;
}
void printI()
{
 cout << "IIIII" << endl;
 for(int i=0;i<3;i++)
   cout << setw(3) << "I" << endl;
 cout << "IIIII" << endl;
}
void printZ()
{
 cout << "ZZZZZ" << endl;
 for(int i=4;i>=2;i--)
   cout << setw(i) << "Z" << endl;
 cout << "ZZZZZ" << endl;
}
int main()
{
printF();
printI();
printZ();
printZ();
return 0;
}
