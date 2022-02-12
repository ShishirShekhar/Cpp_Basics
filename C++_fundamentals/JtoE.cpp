/*
This programme take input of jovian year to earth years
*/

#include <iostream>
using namespace std;

int main(){
	double j, e;

	cout << "Enter the jovian years: ";
	cin >> j;
	
	e = j * 12;
	cout << j << " jovian years is " << e << " years on earth";
	
	return 0;
}
