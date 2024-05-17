#include<iostream>
using namespace std;
int main()

{
	
	//Write a program that asks the user for a weight in kilograms and converts it to pounds. 
	//There are 2.2 pounds in a kilogram
	
	float kg, lbs;
	cout << "Kilogram:";
	cin >> kg;
	
	lbs=kg*2.2;
	
	cout << "converted into pounds:"<<lbs; 

	
	return 0;
	
}
