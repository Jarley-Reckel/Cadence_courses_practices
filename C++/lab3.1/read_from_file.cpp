#include "personal_information.hpp" 

#include <fstream>
#include <iostream>

int main() {
    std::ifstream file("personal_information.txt");
    if (!file.is_open()) {
        std::cerr << "Error: file could not be opened." << std::endl;
        return 1;
    }

    personal_information info;
    file >> info.name;
    file >> info.birth_date;

    file.close();

    std::cout << "Name: " << info.name << std::endl;
    std::cout << "Birth date: " << info.birth_date << std::endl;

    return 0;
}