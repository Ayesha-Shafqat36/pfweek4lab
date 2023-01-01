#include <iostream>
using namespace std;
void isEvenOdd(int num);

main()
{
  int num;
  cout <<"Enter number=";
  cin >> num;
  isEvenOdd(num);
}
void isEvenOdd(int num)
{
 if (num%2 == 0)
  {
   cout<< "Even";
  }
 if (num%2 != 0)
  {
   cout<< "Odd";
  }
}