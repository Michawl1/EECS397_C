#include <iostream>

#include "car.h"
#include "dealer.h"

int main(const int argc, const char** argv) {
	Dealer d = Dealer("Ground Zero Towing / Cash For Junk Cars", "11813 Saywell Ave");

	Car c_1 = Car(
		"Celica",
		"Toyota",
		1995,
		rand() % 100000,
		5500
	);
	Car c_2 = Car(
		"Karmann Ghia",
		"Volkswagen",
		1974,
		rand() % 100000,
		17900
	);
	Car c_3 = Car(
		"Ranger",
		"Edsel",
		1958,
		rand() % 100000,
		15390
	);

	std::vector<Car> c_vec = { c_2, c_3 };

	d.addCar(c_1);
	d.addCars(c_vec);
	std::cout << d.printInventory();
	d.removeCar(c_2);

	std::cout << d.printInventory();
}