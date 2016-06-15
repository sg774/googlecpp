#include<iostream>
using namespace std;
int main()
{
int chirps;
float temp;
cout << "enter no. of chirps per min." << endl;
cin >> chirps;
temp = (chirps + 40)/4;
cout << "the temperature is:" << temp << endl;
return 0;
}
