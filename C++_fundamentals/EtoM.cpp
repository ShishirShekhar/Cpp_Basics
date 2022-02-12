#include <iostream>
using namespace std;

int main()
{
	int e, counter;
	double m;

	counter = 0;

	for (e = 0; e <= 100; e++){
		m = e * 0.17;
		cout << e << " kg of earth is " << m << "kg of moon\n";

		if (counter == 10){
			cout << "\n";
			counter = 0;
		}

		counter ++;
	}

	return 0;
}
