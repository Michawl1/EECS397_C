/*
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

int main(const int argc, const char** argv) {
	std::srand(time(NULL)); //initialize the random number generator

	//Get file locations.
	std::string input_file_name;
	input_file_name = "dice_part_1.txt";

	// Get file output location
	std::string output_file_name;
	output_file_name = "dice_out.txt";

	//Check if the input file exists and complain if it doesn't.
	std::ifstream input_file = std::ifstream(input_file_name);
	if (!input_file.good()) {
		std::cout << "Could not find file " << input_file_name << ".\n";
		return 0;
	}

	//Don't check if this is already open.
	//Outputs will automatically be created if they aren't already there.
	//it will override if the file name exits
	std::ofstream output_file = std::ofstream(output_file_name);

	//Go through the entire file and parse each expression.
	std::string dice_string;
	while (!input_file.eof()) {
		input_file >> dice_string; //load one line from input to dice string

		//example:  3d10
		// 3 d 10
		//parse from start to d where d not included -> 3
		std::string upTod = dice_string.substr(0, dice_string.find_first_of('d'));
		int count_part = std::stoi(upTod); //convert number to integer

		//parse from d to the end (d is not included)
		std::string afterd = dice_string.substr(dice_string.find_first_of('d') + 1);
		int size_part = std::stoi(afterd); //convert number to integer

		int sum = 0;
		for (int i = 0; i < count_part; i++) {
			//rand() returns uniformly distributed integer from 0 to MAX 32 bit value (2^32)
			// mode with size_part truncates the random value from 0 to size_part
			sum += (std::rand() % size_part) + 1;
		}

		//writes each number into output file (one per line)
		//convert sum to string
		output_file << (dice_string + " = " + std::to_string(sum)) << "\n";
		std::cout << (dice_string + " = " + std::to_string(sum)) << std::endl;
	}

	input_file.close(); //close input file
	output_file.close(); //close output file

	return 0;
}
*/