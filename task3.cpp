#include <iostream>
using namespace std;
void marks(int num);
main ()
{
  int num;
  cout << "Enter number=";
  cin >> num;
  marks(num);
}
void marks(int num)
{
  if (num > 50)
  {
   cout << "Pass" ;
  }
  if (num == 50)
  {
   cout << "Work Hard" ;
  }
  if (num < 50)
  {
   cout << "Fail" ;
  }
}