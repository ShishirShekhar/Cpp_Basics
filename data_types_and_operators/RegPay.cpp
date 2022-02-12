/*
Project 2-3
Calculate the regular payment on the loan
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double principal, pay_per_year, rate, payment, num_years, numer, demo, b, e;

	cout << "Enter the principal amount: ";
	cin >> principal;

	cout << "Enter the interest rate: ";
	cin >> rate;

	cout << "Enter the number of payment per year: ";
	cin >> pay_per_year;

	cout << "Enter the total number of years: ";
	cin >> num_years;

	numer = rate * principal / pay_per_year;
	
	b = (rate / pay_per_year) + 1;
	e = - (pay_per_year * num_years);
	
	demo = 1 - pow(b, e);
	
	payment = numer / demo;

	cout << "The total payment is " << payment;
	return 0;
}