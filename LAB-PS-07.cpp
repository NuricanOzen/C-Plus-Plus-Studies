#include<iostream>

using namespace std;

void printBattery (int arr[], int size)

{

for(int Number = 0 ; Number < size ; Number++)

{

if( Number  == size-1 )

{

cout << arr[Number];

}

else

{

cout << arr[Number] << " - ";

}

}

}

void countAbove(const int arr[], int size, int thresholdfinal)

{

int count = 0;

for(int Number = 0 ; Number < size ; Number++)

{

if(arr[Number] > thresholdfinal )

{

count ++;

}

}

cout << count;

}

void chargeAll(int arr[], int size, int amount)

{

for(int Number = 0 ; Number < size ; Number++)

{

arr[Number] = arr[Number] + amount;

}

}

int main()

{

const int ROBOT = 10;

int charge[ROBOT];

for(int count=0 ; count < ROBOT ; count ++)

{

cout << "Please write your battery for robot " << count+1 << ": "; 

cin >> charge[count];

}

printBattery(charge, ROBOT);

int threshold;

cout << "\nPlease write your threshold: ";

cin >> threshold;

countAbove(charge,ROBOT, threshold);

cout << endl;

cout << endl;

int amount = 10;

chargeAll(charge, ROBOT, amount);

printBattery(charge, ROBOT);

int threshold2;

cout << "\nPlease write your threshold: ";

cin >> threshold2;

countAbove(charge,ROBOT, threshold2);

cout << endl;

cout << endl;

int amount2 = -15;

chargeAll(charge, ROBOT, amount2);

printBattery(charge, ROBOT);

int threshold3;

cout << "\nPlease write your threshold: ";

cin >> threshold3;

countAbove(charge,ROBOT, threshold3);

return 0;

} 
