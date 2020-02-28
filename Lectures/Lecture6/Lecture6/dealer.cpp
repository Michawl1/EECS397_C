#include "dealer.h"

Dealer::Dealer(std::string name_in, std::string location_in) {
	name = name_in;
	location = location_in;
	inventory = std::vector<Car>();
	reserve = 0;
	capital = 0;
}

void Dealer::addCars(const std::vector<Car>& cars_to_add) {
	for (Car c : cars_to_add) {
		inventory.push_back(c);
		reserve++;
	}
	capital += Car::ComputeTotalValue(cars_to_add);
}
void Dealer::addCar(const Car& car_to_add) {
	inventory.push_back(car_to_add);
	reserve++;
	capital += car_to_add.price;
}

void Dealer::removeCar(const Car& car_to_remove) {
	for (int i = 0; i < inventory.size(); i++) {
		if (inventory[i].VIN == car_to_remove.VIN) {
			inventory.erase(inventory.begin() + i);//Quick conversion to the Iterator type erase annoyingly takes.
		}
	}
}

std::string Dealer::printInventory() {
	std::string output = "";
	for (Car c : inventory) {
		output = output + std::to_string(c.year) + " " + c.make + " " + c.model + ":\n";
		output = output + "\t$" + std::to_string(c.price) + "\n";
		output = output + "\t#" + std::to_string(c.VIN) + "\n\n";
	}
	return output;
}