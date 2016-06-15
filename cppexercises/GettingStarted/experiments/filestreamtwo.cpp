#include <fstream>
#include <iostream>
using namespace std;

int main() 
{
  char first_name[30], last_name[30]; int age;
  char file_name[20], response;
  cout << "Enter the name of the file: "; cin >> file_name;
  ofstream People(file_name, ios::out);
  while(1)
  {
  cout << "Enter First Name: "; cin >> first_name;
  cout << "Enter Last Name: "; cin >> last_name;
  cout << "Enter Age: "; cin >> age;
  People << first_name << endl << last_name << endl << age << endl; 
  cout << "enter another data? y/n" << endl;
  cin >> response;
  if(response == 'n')
    break;
  }

 
  
  People.close();
  ifstream infile(file_name, ios::in);
  while(1)
  {
  infile >> first_name >> last_name >> age;
  if(infile.eof())
  break;
  cout << endl << "first name:" << first_name << endl << "last name:" << last_name << endl << "Age:" << age << endl;
  }
  infile.close();
  return 0;
} 
