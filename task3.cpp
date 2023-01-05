#include <stdio.h>
#include <stdlib.h>

int main()
{
    int term;
    float principal,rate,interest;
    while (term>=0){
    printf("Enter loan principal (-1 to end): ");
    scanf("%f",&principal);
    if (principal==-1)
        break;
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter term of the loan in days: ");
    scanf("%d",&term);
    interest = principal * rate * term / 365;
    printf("The interest charge is $%.2f\n",interest);
    }
    return 0;

}
