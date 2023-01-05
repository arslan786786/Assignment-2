#include <iostream>
using namespace std; // This is for demonstration purposes ONLY
#include <iomanip>

int main()
{
	const float STATE_SALES_TAX  = 0.04,
                COUNTY_SALES_TAX = 0.02,
                SALES_TAX        = 0.06;

    float S,  
          T,     
          total_state_tax,
          total_county_tax,
          total_sales_tax;

    string month;

    int year;
    int chyesno;
    
    char choice;
    do { // do everything in the do block while...

      cout << "Total amount collected for the month of (-1 to quit) "  << ": ";
    cin >> T;
 
   

    cout << endl;
    cout << "Enter the month to receive the report for: ";
    cin >> month;
    
    // Calculate Sales, County Sales Tax, State Sales Tax, and Total Sales Tax
    S = T / 1.06;
    total_state_tax = S * STATE_SALES_TAX;
    total_county_tax = S * COUNTY_SALES_TAX;
    total_sales_tax  = S * SALES_TAX;

    // Display Calculations
    cout << setprecision(2) << fixed << right << endl;
    cout << "---------------------------------" << endl;
    cout << "Month: " << month << endl;
    cout << "---------------------------------" 
	<< endl;
    cout << "Total Collection:    $" << T << endl;
    cout << "Sales :              $" << S << endl;
    cout << "County Sales Tax:   $"  << total_county_tax << endl;
    cout << "State Sales Tax:    $"  << total_state_tax << endl;
    cout << "Total Tales Tax:    $" << total_sales_tax << endl;
    
    cout << "---------------------------------" << endl;
    cout << endl;

        if (T != '-1' and T != '1-' and T != '-1' and T != '-1') // if needed add input 
            cout << T << " is not a valid option. Try agian" << endl; // validation

    } while (T !='-1' && T !='-1'); // the user input does not equal 'N'andr 'n'

return 0;
}
