#include <iostream> 
using namespace std; 
int main() 
{ 
int PackagePrice = 100; 
int PurschasedQuantity , AmountWithoutDiscount , AmountofDiscount ; 
double FinalAmountofPurchase; 
double PercentageofDiscount = 0.0;
cout << "How many package will you purchase ?\n"; 
cin >> PurschasedQuantity; 
AmountWithoutDiscount = PurschasedQuantity * PackagePrice; 
cout << "So, you will purchase " << PurschasedQuantity << " Package.\n"; 
cout << "Amount without discount is " << AmountWithoutDiscount << " Dollar.\n"; 
cout << "Discount percentage is depend on how many package you purchase\n"; 
cout << "Quantity Discount\n 1-9	  0%\n10-19	  20%\n20-49	  30%\n50-99	  40%\n100 or more 50%\n"; 
if (PurschasedQuantity <= 0) {
    cout << "Error: Number of package(s) must be greater than 0.\n";
    return 0; 
} 
if (PurschasedQuantity >= 1 &&  PurschasedQuantity <=9 ) 
{PercentageofDiscount = 0.0; 
} 
else if(PurschasedQuantity >= 10 &&  PurschasedQuantity <=19 )  
{PercentageofDiscount = 20.0; 
} 
else if(PurschasedQuantity >= 20 &&  PurschasedQuantity <=49 )  
{PercentageofDiscount = 30.0; 
} 
else if(PurschasedQuantity >= 50 &&  PurschasedQuantity <=99 )  
{PercentageofDiscount = 40.0; 
} 
else if(PurschasedQuantity >=100)  
{PercentageofDiscount = 50.0; 
} 
cout << "\nYour discount is " << PercentageofDiscount << " %"; 
AmountofDiscount = AmountWithoutDiscount * (PercentageofDiscount/100); 
cout << "\nYou will not pay " << AmountofDiscount << " Dollar with discount\n";  
FinalAmountofPurchase = AmountWithoutDiscount - AmountWithoutDiscount * ( PercentageofDiscount/100 ); 
cout << "You will pay " <<  FinalAmountofPurchase << " Dollar\n"; 
return 0; 
} 
