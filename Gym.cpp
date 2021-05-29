#include "Date.cpp"
#include "Customer.cpp"
#include "Trainer.cpp"

int main(){
    // Date d(2,3,1995);
    // d.printDate();

    // Customer custData[3];
    // std::string name[3] = {"Hamza", "Ali","Adnan"};
    // int id = 1;
    // for (int i = 0; i < 3; i++)
    // {
    //     custData[i].setCustomerDate(id, name[i], "Johar Town", 45434351, "hamza123@gmail.com");
    //     id++;
    // }
    // std::cout << "id  Name    Address      PhoneNo    Email" << std::endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     custData[i].printCustomerData();
    // }
    Trainers t[3];
    std::string name[3] = {"Hamza", "Ali","Adnan"};
    int id = 1;
    for (int i = 0; i < 3; i++)
    {
        t[i].setTrainer(id, name[i]);
        id++;
    }
    for (int i = 0; i < 3; i++)
    {
        t[i].printTrainer();
    }
    
}