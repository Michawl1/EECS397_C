/*
// Lecture3_Codes.cpp :

#include <iostream>
#include <fstream>
#include <string>

int main()
{

    std::string input_file_name = "sample_output.txt"; // Get file locations.
    std::ifstream input; // Create an input file stream object
    input.open(input_file_name); // open the file

    // check whether state of stream is good
    if (!input.good()) {
        std::cout << "Stream is not good :( " << input_file_name << ".\n";
        return 0;
    }

    // get line
    std::string line;
    std::getline(input, line); //read one line 
    std::cout << line;

    //length of the string
    int len = line.length();
    std::cout << "\nLength of Hello World! is : " << len;

    int size = line.size();
    std::cout << "\nSize of Hello World! is : " << size;

    //look at a particular element
    char c = line.at(2);
    std::cout << "\nCharacter at 5 is: " << c;

    char ch_f = line.front();  // first character
    char ch_b = line.back();   // last character
    std::cout << "First char is : " << ch_f << ", Last char is : " << ch_b;

    //append string
    line.append(" and Moon");
    std::cout << "\nNew line is: " << line;

    std::string pattern = "Moon";
    //find specific pattern
    if (line.find(pattern) != std::string::npos)
        std::cout << "\npattern found in line at " << line.find(pattern) << " pos" << std::endl;
    else
        std::cout << "pattern not found in line" << std::endl;

    // find only finds the first occurance
    line.append(" and Moon");
    if (line.find(pattern) != std::string::npos)
        std::cout << "\npattern found in line at " << line.find(pattern) << " pos" << std::endl;
    else
        std::cout << "pattern not found in line" << std::endl;


    // find the last occurance
    std::string my_str("The sixth sick sheik's sixth sheep's sick.");
    std::string key("sixth");

    std::cout << my_str << '\n';

    std::size_t found_idx = my_str.rfind(key);
    if (found_idx != std::string::npos)
        my_str.replace(found_idx, key.length(), "seventh");

    std::cout << my_str << '\n';

    //  substr(a, b) function returns a substring of b length 
    //  starting from index a 
    std::cout << "Line is: " << line << std::endl;
    std::cout << line.substr(7, 3) << std::endl;

    //  replace(a, b, str)  replaces b characters from a index by str 
    line.replace(22, 7, "Moon");
    std::cout << "Line after erase: " << line << std::endl << std::endl;



    // Find first of
    std::string str("Please, replace the vowels in this sentence by asterisks.");
    std::cout << str << '\n';
    int found = str.find_first_of(',');
    std::string before = str.substr(0, found);
    std::string after = str.substr(found + 1);
    std::cout << before + after << '\n';


    // Parsing example:
    std::string s = "EECS>=297>=397";
    std::string delimiter = ">=";

    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        std::cout << token << std::endl;
        s.erase(0, pos + delimiter.length());
    }
    std::cout << s << std::endl;


}

*/