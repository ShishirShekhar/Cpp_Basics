/*
Project 1-2
This programme shows feet to meter conversion table.
*/

#include <iostream>
using namespace std;

int main()
{
	int f, counter;
	double m;

	counter = 1;

	for(f = 1; f <= 100; f++){
		m = f/3.28;
		cout << f << "in meters is " << m << endl;

		if (counter == 10){
			cout << "\n";
			counter = 0;
		}

		counter++;
	}

	return 0;
}
