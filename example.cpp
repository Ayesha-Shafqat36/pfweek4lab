#include <iostream>
using namespace std;

void add();
void product();
main()
{
  add();
  product(); 
}

 void add()
{
  int num1;
  int num2;
  int sum;
  cout << "Enter number 1:";
  cin >> num1;
  cout << "Enter number 2:";
  cin >> num2;
  sum=num1+num2;
  cout << "Enter Sum=" << sum;
  cout << endl;

}

void product()
{
  int num3;
  int num4;
  int product;
  cout << "Enter number 3:";
  cin >> num3;
  cout << "Enter number 4:";
  cin >> num4;
  product=num3*num4;
  cout << "Product=" << product;



}