#include <iostream>
using namespace std;
int main()
{
int counter;
int number;
int largest;


counter=0;
largest=0;



cout<<" ENTER 10 NUMBERS"<<endl;

while (counter<10)
{
cin>>number;
if (largest<number)
{

largest=number;
}

}
cout<<"THANK YOU\n\n"<<endl;
cout<<"THE LARGEST NUMBER IS:"<<largest<<endl;
 
return 0;

}
