#include<iostream>
#include<cmath>

using namespace std;

int main()
{
double weight, height, BMI;

cout << "\n++++++++++++++++++++++++++++++++++++\n"
<< "            Body Mass Index"
<< "\n++++++++++++++++++++++++++++++++++++\n";

cout << "Enter your weight (in pounds): ";
cin >> weight;
cout << "\nEnter your height (in inches): ";
cin >> height;

BMI = (weight * 703) / (height * height);

if(BMI < 18.5)
cout << "You are underweight!! Eat More!! \n\n";
if(BMI >= 18.5 && BMI <= 25)
cout << "You are in optimal shape!! Good Work! \n\n";
if(BMI > 25)
cout << "You are overweight!! Eat Less!! \n\n";

system("pause");

return 0;
}
