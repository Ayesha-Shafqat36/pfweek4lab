#include <iostream>
using namespace std;
void add(int number1,int number2);
void multiply(int number1,int number2);
void sub(int number1,int number2);
void divide(int number1,int number2);

main()
{
    int number1;
    int number2;
    char op;
  while(true)
{
    cout << "Enter number1=";
    cin >> number1;
    cout << "Enter number2=";
    cin >> number2;
    cout << "Operator(+,-,*,/)=";
    cin >> op;

if (op == '+')
  {
    add(number1,number2);
  }
if (op == '-')
  {
    sub(number1,number2);
  }
if (op == '*')
  {
    multiply(number1,number2);
  }
if (op == '/')
  {
    divide(number1,number2);
  }
}
}

void add(int number1,int number2)
{
 int sum;
 sum=number1+number2;
 cout << "sum=" << sum;
}
void sub(int number1,int number2)
{
 int subtract;
 subtract=number1-number2;
 cout << "Subtract=" << subtract;
}
void multiply(int number1,int number2)
{
  int product;
  product=number1*number2;
  cout << "Product=" << product;
}
void divide(int number1,int number2)
{
  int divd;
  divd=number1/number2;
  cout << "Divide=" << divd;
}