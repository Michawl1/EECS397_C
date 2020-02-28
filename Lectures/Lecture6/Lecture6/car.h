#pragma once

#include <string>
#include <vector>

class Car{
public:
	std::string model;
	std::string make;
	int year;
	int VIN;
	int price;

	Car(std::string model_in, std::string make_in, int year_in, int VIN_in, int price_in);

	static int ComputeTotalValue(const std::vector<Car>& l_in);
};