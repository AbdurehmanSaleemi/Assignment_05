#include <iostream>

class Customer{
    protected:
    unsigned int CustomerId;
    std::string CustomerName;
    std::string CustomerAddress;
    int phoneNumber;
    std::string CustomerEmail;

    public:
    Customer();
    Customer(unsigned int id, std::string name, std::string address, int number, std::string email);
    void setCustomerDate(unsigned int id, std::string name, std::string address, int number, std::string email);
    void printCustomerData();
    void setCustomerId(int id);
    unsigned int getCustomerId();
    std::string getCustomerName();
    std::string getCustomerAddress();
    int getPhoneNumber();
    std::string getCustomerEmail();
};