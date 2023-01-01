#include <iostream>
using namespace std;
void payable(int total,string day);
void WPayable(int total,string day);
main()
{
  int total;
  string day;
  
  cout << "Total Amount=";
  cin >> total;
  cout << "Enter Day:";
  cin >> day;
  
  if (day == "sunday")
    {
      payable(total,day);
    }
 if (day == "monday")
    {
      WPayable(total,day);
    }
 if (day == "tuesday")
    {
     WPayable(total,day);
    }
 if (day == "wednesday")
    {
      WPayable(total,day);
    }
 if (day == "thursday")
    {
      WPayable(total,day);
    } 
if (day == "friday")
    {
     WPayable(total,day);
    }
 if (day == "saturday")
    {
      WPayable(total,day);
    } 


}
void payable(int total,string day)
{
  int percent;
  percent=(total*10)/100;
  int payable;
  payable=total-percent;
  cout<< "payable=" << payable << endl;
}
void WPayable(int total,string day)
{
  int Payable;
  Payable=total;
  cout<< "Payable=" << Payable << endl;
}
