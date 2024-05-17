#include <iostream>
using namespace std;
int main ()
{
	//Print out numbers and calculate
	
	float sum  , num1  , num2  , average;
	
	
	cout<<"The First Number is:";
	cin >> num1;
	cout<<"\n The Second Number is;";
	cin >> num2;
	
	sum=num1+num2; 
	average=sum/2;
	
	cout<<"The sum is:"<<sum;
	cout<<"\n The Average is:"<<average;
	
	return 0;
	
}
