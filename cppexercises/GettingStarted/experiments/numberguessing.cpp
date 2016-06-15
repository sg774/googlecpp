#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{ 
  int guess,generated_number; 
  time_t seconds;
  time(&seconds);
  srand((unsigned int) seconds);
  generated_number=rand()%10 + 1;
  do
  {
    cout << "Enter a guess b/w 1 and 10:"<<endl;
    cin >> guess;
    if(guess<generated_number)
      cout << "the number is larger";
    if(guess>generated_number)
      cout << "the number is smaller";
  }while(guess!=generated_number);
 cout << "correct guess!";
 return 0;
}


