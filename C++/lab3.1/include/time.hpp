#ifndef TIME_HPP
#define TIME_HPP

#include <ctime>

struct age {
    int years;
    int months;
    int days;
    int hours;
    int minutes;
    int seconds;
};

time_t time(time_t* timer);
struct tm *localtime(const time_t *timer);

#endif // TIME_HPP