#include<iostream>
using namespace std;
int main()
{
int asg1,asg2,asg3,asg4;
int final,mid,part;
float grade;
cout << "enter the assignment 1 marks:" << endl; cin >> asg1;
cout << "enter the assignment 2 marks:" << endl; cin >> asg2;
cout << "enter the assignment 3 marks:" << endl; cin >> asg3;
cout << "enter the assignment 4 marks:" << endl; cin >> asg4;
cout << "enter the mid term marks:" << endl; cin >> mid;
cout << "enter the final marks:" << endl; cin >> final;
cout << "enter the section grade:" << endl; cin >> part;
grade = ((asg1+asg2+asg3+asg4)*0.4)/4 + mid*.15 + final*.35 + part*0.1;
cout << "the final grade is:" << grade << endl;
return 0;
}



