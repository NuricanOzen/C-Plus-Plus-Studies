#include <iostream> 
using namespace std; 
int main() 
{  
double Dollar; 
double Tax; 
const double Limit1= 50000.0 , Limit2 = 75000.0 , Limit3 = 100000.0 ,Limit4 = 250000.0, Limit5 = 500000.0,Rate1 = 0.01 , Rate2= 0.02, Rate3= 0.03, Rate4=0.04 , Rate5=0.05, 
Rate6= 0.06; 
cout << "How many dollar is your income ?\n"; 
cin >>Dollar; 
if(Dollar <0) 
{cout << "You need to write an positive integer number"; 
return 0; 
} 
if (Dollar <= Limit1 ) 
{Tax = Dollar*Rate1; 
} 
else if (Dollar >Limit1  && Dollar <= Limit2) 
{Tax = (Limit1*Rate1) + ((Dollar - Limit1)*Rate2);  
} 
else if (Dollar >Limit2  && Dollar <= Limit3) 
{Tax = (Limit1*Rate1) + ((Limit2 - Limit1)*Rate2) + ((Dollar - Limit2) *Rate3); 
} 
else if (Dollar >Limit3  && Dollar <= Limit4) 
{Tax = (Limit1*Rate1) + ((Limit2 - Limit1)*Rate2) + ((Limit3 - Limit2) *Rate3) +  ((Dollar - Limit3) *Rate4); 
} 
else if (Dollar >Limit4  && Dollar <= Limit5) 
{Tax = (Limit1*Rate1) + ((Limit2 - Limit1)*Rate2) + ((Limit3 - Limit2) *Rate3) + ((Limit4 -Limit3)*Rate4) + ((Dollar -Limit4)*Rate5) ; 
} 
else  
{ Tax = (Limit1*Rate1) + ((Limit2 - Limit1)*Rate2) + ((Limit3 - Limit2) *Rate3) + ((Limit4 -Limit3)*Rate4) + ((Limit5 -Limit4)*Rate5) + ((Dollar -Limit5)*Rate6); 
} 
cout << "Your total tax is: " << Tax; 
return 0;  
}
