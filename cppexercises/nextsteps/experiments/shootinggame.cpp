#include<iostream>
#include<cstdlib>
#include<time.h>
#include<math.h>
using namespace std;
void startup()
{
cout << "Welcome to Artillery." << endl;
cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
cout << "You have one cannon, which you can shoot at any angle." << endl;
cout << "You only have 10 cannonballs for this target.." << endl;
cout << "Let's begin..." << endl;
}
int distance()
{
float vel=200.0,g=32.2,time,dist;
int angle;
cout << "what angle?" << endl;
cin >> angle;
angle = angle*3.14/180;
time = 2*vel*sin(angle)/g;
dist = round((vel*cos(angle))*time);
return dist;
}
int position()
{
int a;
srand(time(NULL));
a = rand()%1000 + 500;
cout << "the enemy is" << a << "feet away" << endl;
return a;
}
int fire(int kills)
{
int shells =10;
int shots = 10,d;
int s=position();
do
{
d=distance();
if(d==s)
{
kills++;
cout << "You hit him!!!" << endl;
cout << "It took you " << shells -shots +1 << "shots" << endl;
cout << "You have killed " << kills << "enemies" << endl;
}
if(d<s)
{
cout << "You over shot by " << d-s << endl;
shots--;
}
if(d<s)
{
cout << "You under shot by " << s-d << endl;
shots--;
}
}while(shots > 0);
if(shots == 0)
cout << "game over" << endl;
return kills;
}
int main()
{
startup();
int kills = 0;
char response;
do
{
kills = fire(kills);
cout << "I see another one, care to shoot again? (Y/N) " << endl;
cin >> response;
}while(response != 'N');
cout << "You killed " << kills << "of the enemy" << endl;
return 0;
} 

