/*
This programme tells the dealy of time in transmition of the
radio signal to reach to the mars from the earth.
*/

#include <iostream>
using namespace std;

int main(){
	double distance, speed_of_light, delay, delaym;
	
	distance = 34000000.0;
	speed_of_light = 186000.0;
	
	delay = distance / speed_of_light;
	cout << "The delay in transmition is " << delay << " seconds.\n";
	
	delaym = delay / 60.0;
	cout << "The delay in mintues is " << delaym << " min.";

	return 0;
}