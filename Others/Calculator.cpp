#include<iostream>
using namespace std;
 int main() {
  cout << " __ Welcome to Vaibhe Calculator __" << endl;
  int first;
  int second;
  char sign;
  cout << " Enter First number " << endl;
  cin >> first;

   cout << " Enter the Operator  " << endl;
  cin >> sign;

   cout << " Enter Second number " << endl;
  cin >> second;

  switch (sign)
  {
  case '+':
     cout << "Answer is " << first + second << endl;
    break;

  case '-':
     cout <<"Answer is " << first - second << endl;
    break;

  case '*':
     cout <<"Answer is " <<  first * second << endl;
    break;

  case '/':
     cout <<" Answer is " << first / second << endl;
    break;
  
  default:
  cout << " Invalid Operator " << endl;
    break;
  }
  cout << " Thanks for using my Calculator " << endl;

 }
