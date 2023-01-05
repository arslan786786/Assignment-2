#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

class EmployeeSalary
{
    public:
    /* hourly workers*/
          double CalculateHourlySalary(int hrRate, int hours)
          {
            if ( hours <= 40 )


              salary = hours *  hrRate;

                else

                salary = 40.0 * hrRate + ( hours - 40 ) * hrRate * 1.5;
                return salary;
          }

        /*Commission workers*/
          double getCommissionHourlySalary(double sale)
          {
              sale =(sale* 0.057 )+ 250;
              return sale;
          }

           /* Piece Workers*/

          double getPieceWorkerHourlySalary(int product, int rate)
          {
            int pro = product * rate;
              return   pro;
          }
          void instruct()
          {
          
              cout<<"The Purpose of this Program is to calculate each employees pay rate by entering the employee paycode "
               "for example, when the user type in 1, it will calculate the"
               "Manager salary, 2 for hourlyWorkers,"
               " 3 for Commission Workers and 4 for PieceWorkers "
               "and the program itself will do "
               "the calculation for that particular employee"
               " and when ever the user Enter -1 as the PayCode ,program will executed."<<endl;
          }

    private:
          double salary;
};




int main()
{
    EmployeeSalary salary;
    int paycode;
    double sal;
    int hrRate;
    int product;
    int rate;
    int hours;
    int sale;
salary.instruct();
cout<<endl<<endl;
cout<<" *******************************************"<<endl;
cout<<" %%%%%%% [-1] To End The Program:   %%%%%%%%"<<endl;
cout<<" *******************************************"<<endl;
 
cout<<" **** [2] Hourly worker PayCode:      ******"<<endl;
 
 
cout<<" *******************************************"<<endl;


while(paycode!=-1)
{
    cout<<endl;
cout<<"          Enter PayCode:"<<" "<<setiosflags( ios::fixed | ios::showpoint );
cin>>paycode;
cout<<"*******************************************"<<endl;
cout<<endl;

     if(paycode==2)
     {

             cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
             cout<<"^^^^^^^^   Hourly Worker PayCode   ^^^^^^^^"<<endl;
             cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
             cout<<"Enter Hour Rate:$ ";
             cin>>hrRate;
             cout<<"Enter hours worked: ";
             cin>>hours;
             cout<<"Hourly worker's salary is:$ "<<setprecision(2)<<salary.CalculateHourlySalary(hrRate,hours)<<endl;
             cout<<endl;
             system("pause");
    }

 
    else
        cout<<"Input Error"<<endl;

}



    return 0;
}
