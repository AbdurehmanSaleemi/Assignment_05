#include "Customer.hpp"

Customer::Customer(){
    CustomerId = 0;
    CustomerName = "\0";
    CustomerEmail = "\0";
    phoneNumber = 0;
    CustomerEmail = "\0";
}
Customer::Customer(unsigned int id, std::string name, std::string address, int number, std::string email){
    CustomerId = id;
    CustomerName = name;
    CustomerAddress = address;
    phoneNumber = number;
    CustomerEmail = email;
}

void Customer::setCustomerDate(unsigned int id, std::string name, std::string address, int number, std::string email){
    CustomerId = id;
    CustomerName = name;
    CustomerAddress = address;
    phoneNumber = number;
    CustomerEmail = email;
}

unsigned int Customer::getCustomerId(){
    return CustomerId;
}
std::string Customer::getCustomerName(){
    return CustomerName;
}
std::string Customer::getCustomerAddress(){
    return CustomerAddress;
}
int Customer::getPhoneNumber(){
    return phoneNumber;
}
std::string Customer::getCustomerEmail(){
    return CustomerEmail;
}

void Customer::printCustomerData(){
    std::cout << getCustomerId() << "   " << getCustomerName() << "   " << getCustomerAddress() << "   " << getPhoneNumber() << "   " << getCustomerEmail() << std::endl;
}

void Customer::setCustomerId(int id){
    CustomerId = id;
}