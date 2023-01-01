#include <iostream>
using namespace std;
void payable(int total,string day);
void WeeklyPayable(int total,string day);
main()
{
  int total;
  string day;
  while(true)
{ 
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
      WeeklyPayable(total,day);
    }
 if (day == "tuesday")
    {
     WeeklyPayable(total,day);
    }
 if (day == "wednesday")
    {
      WeeklyPayable(total,day);
    }
 if (day == "thursday")
    {
      WeeklyPayable(total,day);
    } 
if (day == "friday")
    {
     WeeklyPayable(total,day);
    }
 if (day == "saturday")
    {
      WeeklyPayable(total,day);
    } 

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
void WeeklyPayable(int total,string day)
{
  int Per;
  Per=(total*5)/100.0;
  int WPayable;
  WPayable=total-Per;
  cout<< "Payable=" << WPayable << endl;
}
