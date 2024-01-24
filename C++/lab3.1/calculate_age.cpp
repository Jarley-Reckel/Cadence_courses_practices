#include "personal_information.hpp"
#include "time.hpp"

#include <fstream>
#include <iostream>
#include <ctime>

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

    int day, month, year;
    sscanf(info.birth_date.c_str(), "%d-%d-%d", &day, &month, &year);

    time_t currentTime = time(nullptr);
    struct tm *timeinfo;    
    timeinfo = localtime(&currentTime);
    age age;
    age.years = timeinfo->tm_year + 1900 - year;
    age.months = timeinfo->tm_mon + 12 - month;
    age.days = timeinfo->tm_mday - day;
    age.hours = timeinfo->tm_hour;
    age.minutes = timeinfo->tm_min;
    age.seconds = timeinfo->tm_sec;

    if(timeinfo->tm_mon < month) {
        age.years--;
    } else if(timeinfo->tm_mon == month) {
        if(timeinfo->tm_mday < day) {
            age.years--;
        }
    }

    std::cout << "Name: " << info.name << std::endl;
    std::cout << age.years << " years, " 
              << age.months << " months, " 
              << age.days << " days, " 
              << age.hours << " hours, " 
              << age.minutes << " minutes, "
              << age.seconds << " seconds." 
              << std::endl;

    return 0;
}