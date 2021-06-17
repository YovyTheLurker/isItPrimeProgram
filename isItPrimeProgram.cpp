// isItPrimeProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Functions, reusing functions and return types.

#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {
	bool isPrimeFlag = true;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) 
			return false;
	}
	return true;

}

int main()
{
//reusing function 
	for (int i = 1; i <= 1000; i++) {
		bool isPrime = isPrimeNumber(i);
		if (isPrime)
			cout << i << " is prime.\n";
	}
	/*int number;
	cout << "Number: ";
	cin >> number;
	
	
	bool isPrimeFlag = isPrimeNumber(number);
	if (isPrimeFlag) {
		cout << "Prime number" << endl;
	}
	else
		cout << "Not a prime number" << endl;*/
	
	system("pause>0");
}
