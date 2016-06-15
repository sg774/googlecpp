#include<iostream>
using namespace std;
int acceleration(int &speed , int amount)
{
int acceleration;
acceleration = speed + amount;
return acceleration;
}
int main()
{
int *speed , *amount;
speed = new int;
cout << " enter the speed: " << endl;
cin >> *speed;
amount = new int;
cout << " enter the amount: " << endl;
cin >> *amount;
cout << "the aceeleration is : " << acceleration(*speed,*amount) << endl;
return 0;
}

