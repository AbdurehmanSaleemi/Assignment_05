#include <iostream>
#include "Date.hpp"

Date::Date(){
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(unsigned int d, unsigned int m,unsigned int y){
    day = d;
    month = m;
    year = y;
}

void Date::setDate(unsigned int d,unsigned int m,unsigned int y){
    day = d;
    month = m;
    year = y;
}

unsigned int Date::getDay(){
    return day;
}
unsigned int Date::getMonth(){
    return month;
}
unsigned int Date::getYear(){
    return year;
}

void Date::printDate(){
    std::cout << getDay() << "/" << getMonth() << "/" << getYear() << std::endl;
}

void Date::operator =(Date &d){
    day = d.getDay();
    month = d.getMonth();
    year = d.getYear();
}

void Date::userInput(){
    int d,m,y;
    std::cout << "Enter Day : ";
    std::cin >> d;
    std::cout << "Enter Month : ";
    std::cin >> m;
    std::cout << "Enter Year : ";
    std::cin >> y;
    setDate(d,m,y);
}