#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int i,j;
for(i=0;i<6;i++)
{
  for(j=0;j<4;j++)
    {
      cout << left << setw(17) << "Hello World!";
    }
  cout << endl;
}
return 0;
}
