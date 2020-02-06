/*
// Lecture3_Codes.cpp :

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Get file locations.
    std::string input_file_name = "dice.txt";

    // Create an input file stream object
    std::ifstream input;
    // open the file
    input.open(input_file_name);


    // check if the file is oen
    if (input.is_open()) {
        std::cout << "File is open.\nFile name is: " << input_file_name << ".\n";
    }

    // check whether state of stream is good
    if (!input.good()) {
        std::cout << "Stream is not good :( " << input_file_name << ".\n";
        //return 0;
    }

    // close the file
    input.close();

    // check if the file is oen
    if (!input.is_open()) {
        std::cout << "File is closed."<< ".\n";
    }
    //checks the stream object, not the file
    if (input.good()) {
        std::cout << "Stream is still good " << ".\n";
        //return 0;
    }

    //Open file all in one line
    std::ifstream input_f = std::ifstream("my_text.txt");
    // eof
    if (input_f.eof()) {
        std::cout << "End of file is reached \n";
    }
    else {
        std::cout << "End of file is NOT reached. \n";
    }

    // get line
    std::cout << "Read line using: >> \n";
    std::string line;
    while (!input_f.eof()) {
        input_f >> line; //load one line from input to dice string
        std::cout << line << std::endl;
    }

    //Create a file to write
    std::string output = "sample_output.txt";
    std::ofstream out = std::ofstream(output);

    // check if good
    if (!out.good()) {
        std::cout << "Stream is not good :( " << output << ".\n";
        return 0;
    }

    // check if the output file is open
    if (out.is_open()) {
        std::cout << "Output file is open." << ".\n";
    }

    //Write into the file
    out << "Now we are writing to the output file.\n";
    out << "All will be included. ";
    out << "No new line so I continue writing \n.";

    out.close();

    std::ifstream check = std::ifstream("sample_output.txt");
    std::string read;
    while (!check.eof()) {
        std::getline(check, read);
        std::cout << read<<std::endl;
    }


    // close all of the files
    check.close();
    out.close();
    input_f.close();
    input.close();

}

*/