#pragma once
#include <string>
#include <vector>
#include "car.h"

class Dealer{
public:
	std::string name;
	std::string location;
	std::vector<Car> inventory;
private:
	int reserve;
	int capital;

public:
	Dealer(std::string name_in, std::string location_in);

	void addCars(const std::vector<Car>& cars_to_add);
	void addCar(const Car& car_to_add);

	void removeCar(const Car& car_to_remove);

	std::string printInventory();
};