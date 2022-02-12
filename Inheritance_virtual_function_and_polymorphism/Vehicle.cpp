 // Creating class vehicle.

#include <iostream>
using namespace std;

class Vehicle{
	// These are private.
	int passenger; // number of passenger.
	int fuelcap; // fuel capacity in liters.
	int mpg; // fuel consumption in kms per liters.

	public:
		// This is a constructor for Vehicle.
		Vehicle(int p, int f, int m){
			passenger = p;
			fuelcap = f;
			mpg = m;
		}

		// Compute range.
		int range() {return mpg * fuelcap;}

		// Accessor functions.
		int get_passenger() {return passenger;}
		int get_fuelcap() {return fuelcap;}
		int get_mpg() {return mpg;}
};

// Use Vehcile to create a Truck specialization.
class Truck : public Vehicle{
	int cargocap; // cargo capacity in kilos.

	public:
		// This is a constructor for Truck.
		Truck(int p, int f, int m, int c) : Vehicle(p, f, m){
			cargocap = c;
		}

		// Accessor function for cargo.
		int get_cargocap() {return cargocap;}
};

int main(){
	
	// Construct some trucks.
	Truck semi(2, 200, 7, 40000);
	Truck pickup(3, 28, 15, 2000);
	int dist = 252;

	cout << "Semi truck can carry " << semi.get_cargocap() << " kilos.\n";
	cout << "It has a range of " << semi.range() << "kms.\n";
	cout << "To go " << dist << " kms semi needs " << dist / semi.get_mpg() <<
	" liters of fuel.\n\n";

	cout << "Pickup truck can carry " << pickup.get_cargocap() << " kilos.\n";
	cout << "It has a range of " << pickup.range() << "kms.\n";
	cout << "To go " << dist << " kms pickup needs " << dist / pickup.get_mpg() <<
	" liters of fuel.\n\n";

	return 0;
}