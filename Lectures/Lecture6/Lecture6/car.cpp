#include "car.h"

int Car::ComputeTotalValue(const std::vector<Car>& l_in) {
	int sum = 0;
	for (Car c : l_in) {
		sum += c.price;
	}
	return sum;
}

Car::Car(std::string model_in, std::string make_in, int year_in, int VIN_in, int price_in) {
	model = model_in;
	make = make_in;
	year = year_in;
	VIN = VIN_in;
	price = price_in;
}