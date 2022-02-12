/*
Project 2-2
Create a XOR using the C++ operators.
*/

#include <iostream>
using namespace std;

int main(){
	bool p, q;

	p = true;
	q = true;

	cout << p << " XOR " << q << " is ";
	cout << (p || q) && !(p && q);
	cout << "\n";

	p = false;
	q = true;

	cout << p << " XOR " << q << " is ";
	cout << (p || q) && !(p && q);
	cout << "\n";

	p = false;
	q = false;

	cout << p << " XOR " << q << " is ";
	cout << (p || q) && !(p && q);
	cout << "\n";

	return 0;
}