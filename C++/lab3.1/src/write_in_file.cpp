#include "personal_information.hpp"


#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream file("personal_information.txt");
    if (!file.is_open()) {
        std::cerr << "Error: file could not be opened." << std::endl;
        return 1;
    }

    personal_information info;
    std::cout << "Enter your name: ";
    std::cin >> info.name;
    std::cout << "Enter your birth date (DD-MM-YYYY):";
    std::cin >> info.birth_date;

    file << info.name << std::endl;
    file << info.birth_date << std::endl;

    file.close();
    return 0;
}