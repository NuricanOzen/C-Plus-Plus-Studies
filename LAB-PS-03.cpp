#include <iostream> 
using namespace std; 
int main() 
{ 
int ALES, EYDS , TOEFL, InterviewPoint; 
double GPA; 
bool DisciplinaryPunishments, UniversityA, UniversityB , UniversityC; 
cout << "Write your ALES note: "; 
cin >> ALES; 
cout << "Write your GPA note: "; 
cin >> GPA; 
cout << "Write your Interview Point:"; 
cin >> InterviewPoint; 
cout << "Write your E-YDS note: "; 
cin >> EYDS; 
cout << "Write your TOEFL note: " ;  
cin >> TOEFL; 
cout << "Do you have Disciplinary Punishments (If you have, press 1. If you do not have press 0: "; 
cin >> DisciplinaryPunishments; 
if ((ALES>=70 || GPA>=3.00) && (InterviewPoint>=60) && (EYDS>=70 || TOEFL>=220)) 
UniversityA = true; 
else 
UniversityA = false; 
if ((ALES>=60 || GPA>=2.50) && (InterviewPoint>=60) && (EYDS>=70 || TOEFL>=180) && (DisciplinaryPunishments == 0)) 
UniversityB = true; 
else 
UniversityB = false; 
if ((ALES>=50 || GPA>=2.25) && (InterviewPoint>=70) && (EYDS>=80 || TOEFL>=250)) 
UniversityC = true; 
else 
UniversityC = false; 
if ((UniversityA == true && UniversityB == false && UniversityC == false )) 
cout << "Only University A accepted "; 
if ((UniversityA == false && UniversityB == true && UniversityC == false )) 
cout << "Only University B accepted "; 
if ((UniversityA == false && UniversityB == false && UniversityC == true )) 
cout << "Only University C accepted "; 
if ((UniversityA == true && UniversityB == true && UniversityC == false )) 
cout << " A and B accepted but University C is not accepted"; 
if ((UniversityA == true && UniversityB == false && UniversityC == true )) 
cout << " A and C accepted but University B is not accepted"; 
if ((UniversityA == false && UniversityB == true && UniversityC == true )) 
cout << " B and C accepted but University A is not accepted"; 
if ((UniversityA == true && UniversityB == true && UniversityC == true )) 
cout << "All of them are accepted"; 
if ((UniversityA == false && UniversityB == false && UniversityC == false )) 
cout << "All of them are rejected"; 
return 0; 
}
