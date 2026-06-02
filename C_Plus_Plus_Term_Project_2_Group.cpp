#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
double getRadian(double degrees) { 
return (degrees * M_PI) / 180.0; 
} 
double factorial(int number) { 
double fact = 1.0; 
for (int i = number; i > 0; i--) { 
fact *= i; 
} 
return fact; 
} 
double mySin(double x) { 
double sum = 0; 
double curent_term=0; 
double previous_term=0; 
int i = 0; 
do { 
previous_term=curent_term; 
double numerator = pow(-1, i) * pow(x, 2 * i + 1); 
double denominator = factorial(2 * i + 1); 
curent_term = numerator / denominator; 
sum += curent_term; 
i++; 
} while (fabs(curent_term-previous_term) > 0.001); 
if (abs(sum) < 0.001) { 
return 0.0; 
} 
return sum; 
} 
double myCos(double x){ 
double sum=0; 
double curent_term=0; 
double previous_term=0; 
int i=0; 
do{ 
previous_term=curent_term; 
double numerator =pow(-1,i)*pow(x,2*i); 
double denominator = factorial(2*i); 
curent_term=numerator/denominator; 
sum+=curent_term; 
i++; 
} while(abs(curent_term-previous_term)>0.001); 
if (fabs(sum) < 0.001) { 
return 0.0; 
} 
return sum; 
} 
double myTan(double x){ 
if (fabs(myCos(x)) < 0.001) {  
return INFINITY; 
} 
double Tangent=mySin(x)/myCos(x); 
return Tangent; 
} 
double myCot(double x){ 
if (fabs(mySin(x)) < 0.001) {  
return INFINITY; 
} 
double Cotangent=myCos(x)/mySin(x); 
return Cotangent; 
} 
int main() { 
int size=24; 
int degree[]={ 0,30,45,60,90,120,135,150,180,210,225,240,270,230,315,330,360,450,540,630,720,-30, -60,-90}; 
cout << fixed << setprecision(4); 
cout<<"--------" <<" Proof " <<"--------" <<endl 
<<setw(8) <<"Sin^2(x)+Cos^2(x)= "<<pow(mySin(getRadian(degree[1])),2)+pow(myCos(getRadian(degree[1])),2) 
<<"\n" 
<<setw(8) <<"Tan(x)*Cot(x)= "<<myTan(getRadian(degree[1]))*myCot(getRadian(degree[1])) <<endl; 
cout<<"------------------------------------------------------" <<endl; 
cout << setw(8) << "Degree" << " | "  
<< setw(10) << "Sin" << " | "  
<< setw(10) << "Cos" << " | "  
<< setw(10) << "Tan" << " | "  
<< setw(10) << "Cot" << endl; 
cout<<"------------------------------------------------------" <<endl; 
for (int i=0;i<size;i++){ 
cout<<setw(8) <<degree[i] <<" | " 
<<setw(10) <<mySin(getRadian(degree[i])) <<" | " 
<< setw(10) << myCos(getRadian(degree[i])) << " | "  
<< setw(10) << myTan(getRadian(degree[i])) << " | "  
<< setw(10) << myCot(getRadian(degree[i])) << endl; 
} 
cout << fixed << setprecision(6); 
cout<<"------------------------------------------------------"<<endl; 
cout<<"\t Sine Comparison \t"<<endl; 
cout<<"------------------------------------------------------"<<endl; 
cout<<setw(8) <<"Degree" <<" | " 
<<setw(15) <<"Mysin(x)" <<" | " 
<<setw(15) <<"Original sin(x)" " | " 
<<setw(15) <<"Difference"  <<endl; 
cout<<"------------------------------------------------------"<<endl; 
for (int i = 0; i < size; i++) { 
double rad = getRadian(degree[i]); 
double myResult = mySin(rad); 
double originalResult = sin(rad); 
cout << setw(8) << degree[i] << " | " 
<< setw(15) << myResult << " | " 
<< setw(15) << originalResult << " | " 
<< setw(15) << abs(myResult - originalResult) << endl; 
} 
cout<<"------------------------------------------------------"<<endl; 
cout<<"\t Cosine Comparison \t"<<endl; 
cout<<"------------------------------------------------------"<<endl; 
cout<<setw(8) <<"Degree" <<" | " 
<<setw(15) <<"Mycos(x)" <<" | " 
<<setw(15) <<"Original cos(x)" " | " 
<<setw(15) <<"Difference"  <<endl; 
cout<<"------------------------------------------------------"<<endl; 
for (int i = 0; i < size; i++) { 
double rad = getRadian(degree[i]); 
double myResult = myCos(rad); 
double originalResult = cos(rad); 
cout << setw(8) << degree[i] << " | " 
<< setw(15) << myResult << " | " 
<< setw(15) << originalResult << " | " 
<< setw(15) << abs(myResult - originalResult) << endl; 
} 
cout<<"------------------------------------------------------"<<endl; 
cout<<"\t Tangent Comparison \t"<<endl; 
cout<<"------------------------------------------------------"<<endl; 
cout<<setw(8) <<"Degree" <<" | " 
<<setw(15) <<"MyTan(x)" <<" | " 
<<setw(15) <<"Original tan(x)" " | " 
<<setw(15) <<"Difference"  <<endl; 
cout<<"------------------------------------------------------"<<endl; 
for (int i = 0; i < size; i++) { 
double rad = getRadian(degree[i]); 
double myResult = myTan(rad); 
double originalResult = tan(rad); 
cout << setw(8) << degree[i] << " | " 
<< setw(15) << myResult << " | "; 
if (fabs(cos(rad)) < 0.001){ 
cout << setw(15) << "inf" << " | " 
<< setw(15) << "0.000000" << endl; 
} 
else{ 
cout << setw(15) << originalResult << " | " 
<< setw(15) << abs(myResult - originalResult) << endl; 
} 
} 
cout<<"------------------------------------------------------"<<endl; 
cout<<"\t Cotangent Comparison \t"<<endl; 
cout<<"------------------------------------------------------"<<endl; 
cout<<setw(8) <<"Degree" <<" | " 
<<setw(15) <<"MyCot(x)" <<" | " 
<<setw(15) <<"Original cot(x)" " | " 
<<setw(15) <<"Difference"  <<endl; 
cout<<"------------------------------------------------------"<<endl; 
for (int i = 0; i < size; i++) { 
double rad = getRadian(degree[i]); 
double myResult = myCot(rad); 
double originalResult = 1.0/tan(rad); 
cout << setw(8) << degree[i] << " | " 
<< setw(15) << myResult << " | ";            
if (fabs(sin(rad)) < 0.001){ 
cout << setw(15) << "inf" << " | " 
<< setw(15) << "0.000000" << endl; 
} 
else{ 
cout << setw(15) << originalResult << " | " 
<< setw(15) << abs(myResult - originalResult) << endl; 
} 
}  
return 0; 
} 

