#include <iostream>
using namespace std;
void number(int num1,int num2);
main()
{
  int num1;
  int num2;
  cout << "Enter number 1=";
  cin >> num1;
  cout << "Enter number 2=";
  cin >> num2;
  number(num1,num2);

}
void number(int num1,int num2)
{
if (num1>num2)
  {
   cout<< "1st number";
  }

if (num2>num1)
  {
   cout<< "2nd number";
  }
}