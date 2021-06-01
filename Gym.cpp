#include <iostream>
#include <string>
#include <fstream>

//Date
class Date {
protected:
    unsigned int day;
    unsigned int month;
    unsigned int year;

public:
    Date();
    Date(unsigned int d, unsigned int m, unsigned int y);
    void setDate(unsigned int d, unsigned int m, unsigned int y);
    void printDate();
    unsigned int getDay();
    unsigned int getMonth();
    unsigned int getYear();
    void operator =(Date& d);
    void userInput();
    void editDate(Date &d){
        setDate(d.getDay(), d.getMonth(), d.getYear());
    }
};

//Date Driver Data
Date::Date() {
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(unsigned int d, unsigned int m, unsigned int y) {
    day = d;
    month = m;
    year = y;
}

void Date::setDate(unsigned int d, unsigned int m, unsigned int y) {
    day = d;
    month = m;
    year = y;
}

unsigned int Date::getDay() {
    return day;
}
unsigned int Date::getMonth() {
    return month;
}
unsigned int Date::getYear() {
    return year;
}

void Date::printDate() {
    std::cout << getDay() << "/" << getMonth() << "/" << getYear() << std::endl;
}

void Date::operator =(Date& d) {
    day = d.getDay();
    month = d.getMonth();
    year = d.getYear();
}

void Date::userInput() {
    int d, m, y;
    std::cout << "Enter Day : ";
    std::cin >> d;
    std::cout << "Enter Month : ";
    std::cin >> m;
    std::cout << "Enter Year : ";
    std::cin >> y;
    setDate(d, m, y);
}


//Customer Class
class Customer {
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
    void userInput();
    void operator =(Customer _c);
};

//Customer Driver Data
Customer::Customer() {
    CustomerId = 0;
    CustomerName = "\0";
    CustomerEmail = "\0";
    phoneNumber = 0;
    CustomerEmail = "\0";
}
Customer::Customer(unsigned int id, std::string name, std::string address, int number, std::string email) {
    CustomerId = id;
    CustomerName = name;
    CustomerAddress = address;
    phoneNumber = number;
    CustomerEmail = email;
}

void Customer::setCustomerDate(unsigned int id, std::string name, std::string address, int number, std::string email) {
    CustomerId = id;
    CustomerName = name;
    CustomerAddress = address;
    phoneNumber = number;
    CustomerEmail = email;
}

unsigned int Customer::getCustomerId() {
    return CustomerId;
}
std::string Customer::getCustomerName() {
    return CustomerName;
}
std::string Customer::getCustomerAddress() {
    return CustomerAddress;
}
int Customer::getPhoneNumber() {
    return phoneNumber;
}
std::string Customer::getCustomerEmail() {
    return CustomerEmail;
}

void Customer::printCustomerData() {
    std::cout << getCustomerId() << "   " << getCustomerName() << "   " << getCustomerAddress() << "   " << getPhoneNumber() << "   " << getCustomerEmail() << std::endl;
}

void Customer::setCustomerId(int id) {
    CustomerId = id;
}
void Customer::operator =(Customer _c) {
    setCustomerDate(_c.getCustomerId(), _c.getCustomerName(), _c.getCustomerAddress(), _c.getPhoneNumber(), _c.getCustomerEmail());
}

void Customer::userInput() {
    unsigned int id;
    std::string Name;
    std::string Address;
    int phNumber;
    std::string CEmail;
    std::cout << "ID = ";
    std::cin >> id;
    std::cout << "Name = ";
    std::cin >> Name;
    std::cout << "Address = ";
    std::cin >> Address;
    std::cout << "PhoneNumber = ";
    std::cin >> phNumber;
    std::cout << "Email = ";
    std::cin >> CEmail;
    setCustomerDate(id, Name, Address, phNumber, CEmail);
}

//Trainer class
class Trainers {
protected:
    int trainerId;
    std::string trainName;

public:
    Trainers();
    Trainers(int id, std::string name);
    void setTrainerId(int id);
    void setTrainerName(std::string name);
    void printTrainer();
    int getTrainerId();
    std::string getTrainName();
    void operator =(Trainers &t);
};

//Trainer Class Driver data
Trainers::Trainers() {
    trainerId = 0;
    trainName = "\0";
}

Trainers::Trainers(int id, std::string name) {
    trainerId = id;
    trainName = name;
}

void Trainers::setTrainerId(int id) {
    trainerId = id;
}

void Trainers::setTrainerName(std::string name) {
    trainName = name;
}

int Trainers::getTrainerId() {
    return trainerId;
}

std::string Trainers::getTrainName() {
    return trainName;
}

void Trainers::printTrainer() {
    std::cout << getTrainerId() << "    " << getTrainName() << std::endl;
}

void Trainers::operator =(Trainers &t){
    trainerId = t.getTrainerId();
    trainName = t.getTrainName();
}

//Equipment Class
class Equipment {
protected:
    int equipmentId;
    std::string equipmentName;

public:
    Equipment();
    Equipment(int id, std::string name);
    void setEquipmentId(int id);
    void setEquipmentName(std::string name);
    void printEquipintment();
    int getEquipmentId();
    std::string getEquipmentName();
    void operator =(Equipment &_e);
};

//Equipment Driver Data
Equipment::Equipment() {
    equipmentId = 0;
    equipmentName = "\0";
}

Equipment::Equipment(int id, std::string name) {
    equipmentId = id;
    equipmentName = name;
}

void Equipment::setEquipmentId(int id) {
    equipmentId = id;
}

void Equipment::setEquipmentName(std::string name) {
    equipmentName = name;
}
int Equipment::getEquipmentId() {
    return equipmentId;
}

std::string Equipment::getEquipmentName() {
    return equipmentName;
}

void Equipment::printEquipintment() {
    std::cout << getEquipmentId() << "   " << getEquipmentName() << std::endl;
}

void Equipment::operator =(Equipment &_e){
    equipmentId = _e.getEquipmentId();
    equipmentName = _e.getEquipmentName();
}

//Exercise Plan Class
class ExercisePlan {
protected:
    int planId;
    Trainers trainerId;
    Equipment equipmentId;
    int duration;

public:
    ExercisePlan();
    ExercisePlan(int Id, Trainers trId, Equipment eqId, int d);
    void setExercisePlan(int Id, Trainers trId, Equipment eqId, int d);
    void setExercisePlanId(int id);
    void printPlan();
    int getPlanId();
    int _getTrainerId();
    int _getEquipmentId();
    int getDuration();
    void operator =(ExercisePlan &_plan);
};



//Exercise Plan Driver Data       
ExercisePlan::ExercisePlan() {
    planId = 0;
    duration = 0;
}

ExercisePlan::ExercisePlan(int Id, Trainers trId, Equipment eqId, int d) {
    planId = Id;
    trainerId.setTrainerId(trId.getTrainerId());
    equipmentId.setEquipmentId(eqId.getEquipmentId());
    duration = d;
}

void ExercisePlan::setExercisePlan(int Id, Trainers trId, Equipment eqId, int d) {
    planId = Id;
    trainerId.setTrainerId(trId.getTrainerId());
    equipmentId.setEquipmentId(eqId.getEquipmentId());
    duration = d;
}

int ExercisePlan::getPlanId() {
    return planId;
}
int ExercisePlan::_getTrainerId() {
    return trainerId.getTrainerId();
}
int ExercisePlan::_getEquipmentId() {
    return equipmentId.getEquipmentId();
}
int ExercisePlan::getDuration() {
    return duration;
}

void ExercisePlan::printPlan() {
    std::cout << getPlanId() << "  " << _getTrainerId() << "  " << _getEquipmentId() << "  " <<  getDuration() << std::endl;
}

void ExercisePlan::setExercisePlanId(int id) {
    planId = id;
}

void ExercisePlan::operator =(ExercisePlan &_plan){
    planId = _plan.getPlanId();
    trainerId.setTrainerId(_plan.getPlanId());
    equipmentId.setEquipmentId(_plan._getEquipmentId());
    duration = _plan.getDuration();
}

//Subscription Class
class Subscription {
protected:
    int subId;
    Date subDate;
    ExercisePlan exercisePlanId;
    Customer customerId;

public:
    Subscription();
    Subscription(int id, Date date, ExercisePlan plan, Customer cId);
    void setIdOfSubscription(int d);
    void setDate(Date d);
    void setExercisePlanId(ExercisePlan planId);
    void setCustomerId(Customer id);
    void printData();
    int getSubId();
    std::string getDate();
    int getPlanId();
    int getCustomerId();
    void operator =(Subscription &_s);
};

//Subscription Driver Data

Subscription::Subscription() {
    subId = 0;
}

Subscription::Subscription(int id, Date date, ExercisePlan plan, Customer cId) {
    subId = id;
    subDate.setDate(date.getDay(), date.getMonth(), date.getYear());
    exercisePlanId.setExercisePlanId(plan.getPlanId());
    customerId.setCustomerId(cId.getCustomerId());
}

void Subscription::setIdOfSubscription(int d) {
    subId = d;
}
void Subscription::setDate(Date d) {
    subDate.setDate(d.getDay(), d.getMonth(), d.getYear());
}
void Subscription::setExercisePlanId(ExercisePlan planId) {
    exercisePlanId.setExercisePlanId(planId.getPlanId());
}
void Subscription::setCustomerId(Customer id) {
    customerId.setCustomerId(id.getCustomerId());
}

int Subscription::getSubId() {
    return subId;
}
std::string Subscription::getDate() {
    std::string date = std::to_string(subDate.getDay()) + "/" + std::to_string(subDate.getMonth()) + "/" + std::to_string(subDate.getYear());
    return date;
}
int Subscription::getPlanId() {
    return exercisePlanId.getPlanId();
}
int Subscription::getCustomerId() {
    return customerId.getCustomerId();
}

void Subscription::printData() {
    std::cout << getSubId() << " " << getDate() << " " << getPlanId() << " " << getCustomerId() << std::endl;
}

void Subscription::operator=(Subscription &_s){
    subId = _s.getSubId();
    subDate.setDate(_s.subDate.getDay(), _s.subDate.getMonth(), _s.subDate.getYear());
    exercisePlanId.setExercisePlanId(_s.getPlanId());
    customerId.setCustomerId(_s.getCustomerId());
}




//Functions for Program
template <typename T>
void increaseSize(T*& oldArr, int& oldSize) {
    int newSize = oldSize;
    T* temp = nullptr;
    temp = new T[newSize];
    for (int i = 0; i < oldSize; i++)
    {
        temp[i] = oldArr[i];
    }
    oldSize = newSize;
    delete[] oldArr;
    oldArr = temp;
}


int removeDate(Date*& container, int containerSize, int FindDay, int FindMonth, int FindYear) {

    int index = 0; // storing the index of the key to be removed
    for (int i = 0; i < containerSize; i++)
    {
        if (container[i].getDay() == FindDay) {
            if (container[i].getMonth() == FindMonth) {
                if (container[i].getYear() == FindYear) {
                    index = i;
                    return 0;
                    break;
                }
            }
        }
        else if(i == containerSize - 1 && index == 0){
            std::cout << "No entry Found\n";
            return -1;
        }
    }

    int n = containerSize - 1;
    Date* newArr = new Date[n];
    for (int i = index; i < containerSize; i++)
    {
        Date temp = container[i];
        container[i] = container[i + 1];
        container[i + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        newArr[i] = container[i];
    }
    containerSize = n - 1;
    delete[] container;
    container = newArr;
    return 0;
}

void menu(){
    std::cout << "1. Add/Delete/Edit Trainer, Equipment, Customer & Plan\n";
    std::cout << "2. Check Trainer Availability\n";
    std::cout << "3. Enquire about customers Subscription, Gym Schedule, Trainer Schedule\n";
    std::cout << "4. Exit\n";
    std::cout << "----------------------------------------------------------------------\n";
    std::cout << "Choice = ";
}

int menu(int choice){
    bool isRunning = true;

    while(isRunning){
        if(choice == 1){
            return 1;
        }
        else if(choice == 2){
            return 2;
        }
        else if(choice == 3){
            return 3;
        }
        else if(choice == 4){
            return -1;
        }
    }
    return 0;
}

int subMenu(int choice){
    bool isRunning = true;

    while(isRunning){
        if(choice == 1){
            return 1;
        }
        else if(choice == 2){
            return 2;
        }
        else if(choice == 3){
            return 3;
        }
        else if(choice == 4){
            return 4;
        }
        else if(choice == 5){
            return 5;
        }
        else if(choice == 6){
            return 6;
        }
        else if(choice == 7){
            return 7;
        }
        else if(choice == 8){
            return 8;
        }
        else if(choice == 9){
            return 9;
        }
        else if(choice == 10){
            return 10;
        }
        else if(choice == 11){
            return 11;
        }
        else if(choice == 12){
            return 12;
        }
        else if(choice == 13){
            return 13;
        }
        else if(choice == 14){
            return 14;
        }
        else if(choice == 15){
            return 15;
        }
        else if(choice == 16){
            return -1;
        }
        else{
            return 0;
        }
    }
    return 0;
}

void SubMenu(){
    std::cout << "------ D A T E -------\n";
    std::cout << "1. Add Date\n";
    std::cout << "2. Edit Date\n";
    std::cout << "3. Delete Date\n";
    std::cout << "------ C U S T O M E R -------\n";
    std::cout << "4. Add Customer\n";
    std::cout << "5. Edit Customer\n";
    std::cout << "6. Delete Customer\n";
    std::cout << "------ T R A I N E R -------\n";
    std::cout << "7. Add Trainer\n";
    std::cout << "8. Edit Trainer\n";
    std::cout << "9. Delete Trainer\n";
    std::cout << "------ E X E R C I S E - P L A N S -------\n";
    std::cout << "10. Add Exerxise Plan\n";
    std::cout << "11. Edit Exerxise Plan\n";
    std::cout << "12. Delete Exerxise Plan\n";
    std::cout << "------ S U B S C R I P T I O N -------\n";
    std::cout << "13. Add Subscription\n";
    std::cout << "14. Edit Subscription\n";
    std::cout << "15. Delete Subscription\n";
    std::cout << "16. Go Back\n";
    std::cout << "----------------------------------------------------------------------\n";
    std::cout << "Choice = ";
}

int main() {


    int dateArraySize = 1;
    Date *dateArray = new Date[dateArraySize];
    int dateIndex = 0;




    // int dateArraySize = 1;
    // Date *d = new Date[dateArraySize];
    // bool isRunning = true;
    // int indexOfDate = 0;
    // int choice;
    // while(isRunning){
    //     d[indexOfDate].userInput();
    //     std::cout << "Want to Enter more ? Press 1 for yes & 0 for No";
    //     std::cout << "Choice = ";
    //     std::cin >> choice;
    //     if(choice != 1){
    //         isRunning = false;
    //     }
    //     else{
    //         indexOfDate++;
    //         dateArraySize++;
    //         increaseSize<Date>(d,dateArraySize);
    //     }
    // }

    // for (int i = 0; i < dateArraySize; i++)
    // {
    //     d[i].printDate();
    // }

    // unsigned int day, month, year;
    // std::ifstream DateRead;
    // DateRead.open("Data/date.txt");

    // if(DateRead.is_open()){
    //     while(!DateRead.eof()){
    //         DateRead >> day >> month >> year;
    //         d[indexOfDate].setDate(day,month,year);
    //         indexOfDate++;
    //         dateArraySize++;
    //         increaseSize<Date>(d, dateArraySize);
    //     }
    // }
    // for (int i = 0; i < dateArraySize - 1; i++)
    // {
    //     d[i].printDate();
    // }


    // isRunning = true;

    // bool _operationComplete = true;
    // while(_operationComplete){  
    //     int da,m,y;
    //     std::cout << "Enter day,month,year = ";
    //     std::cin >> da >> m >> y;
    //     removeDate(d, dateArraySize, da, m, y);
    //     dateArraySize--;
    //     _operationComplete = false;
    // }

    // for (int i = 0; i < dateArraySize; i++)
    // {
    //     d[i].printDate();
    // }
    // delete[] d;
    // d = nullptr;

    // int CustArraySize = 1;
    // Customer* c = new Customer[CustArraySize];
    // bool isRunning = true;
    // int indexOfCustomer = 0;
    // int choice;

    // std::ifstream dataRead;
    // dataRead.open("customers.txt");

    // if (dataRead.is_open()) {
    //     while (!dataRead.eof()) {
    //         dataRead >> CId;
    //         dataRead >> CName;
    //         dataRead >> CAddress;
    //         dataRead >> phNumber;
    //         dataRead >> CEmail;
    //         c[i].setCustomerDate(CId, CName, CAddress, phNumber, CEmail);
    //         i++;
    //         CustArraySize++;
    //         Customer* temp = new Customer[CustArraySize];
    //         for (int i = 0; i < CustArraySize - 1; i++)
    //         {
    //             temp[i] = c[i];
    //         }
    //         delete[] c;
    //         c = temp;
    //     }
    // }
    // else
    // {
    //     std::cout << "Error !" << std::endl;
    // }

    // for (int i = 0; i < CustArraySize - 1; i++)
    // {
    //     c[i].printCustomerData();
    // }

    // int sizeOfTrainers = 1;
    // Trainers *t = new Trainers[sizeOfTrainers];
    // std::ifstream dataRead;
    // dataRead.open("Trainers.txt");
    // int indexOfTrainer = 0;
    // int choice = 0;

    // int id = 0;
    // int i = 0;
    // std::string name;
    // if(dataRead.is_open()){
    //     while (!dataRead.eof()){
    //         dataRead >> id;
    //         while(getline(dataRead, name)){
    //             break;
    //         }
    //         t[indexOfTrainer].setTrainerName(name);
    //         t[indexOfTrainer].setTrainerId(id);
    //         indexOfTrainer++;
    //         sizeOfTrainers++;
    //         Trainers* temp = new Trainers[sizeOfTrainers];
    //         for (int i = 0; i < sizeOfTrainers - 1; i++)
    //         {
    //             temp[i] = t[i];
    //         }
    //         delete[] t;
    //         t = temp;
    //         std::cout << "Data being processed\n";
    //     }
    // }
    // else
    // {
    //     std::cout << "Error ! \n";
    // }

    // for (int i = 0; i < sizeOfTrainers - 1; i++)
    // {
    //     t[i].printTrainer();
    // }

    // int sizeOfEquipments = 1;
    // Equipment *e = new Equipment[sizeOfEquipments];
    // std::ifstream dataReadOfEquipments;
    // dataReadOfEquipments.open("Data/equipment.txt");
    // int indexOfEquipment = 0;

    // int id = 0;
    // int i = 0;
    // std::string equipmentName;
    // if(dataReadOfEquipments.is_open()){
    //     while (!dataReadOfEquipments.eof()){
    //         dataReadOfEquipments >> id;
    //         while(getline(dataReadOfEquipments, equipmentName)){
    //             break;
    //         }
    //         e[indexOfEquipment].setEquipmentName(equipmentName);
    //         e[indexOfEquipment].setEquipmentId(id);
    //         indexOfEquipment++;
    //         sizeOfEquipments++;
    //         Equipment* temp = new Equipment[sizeOfEquipments];
    //         for (int i = 0; i < sizeOfEquipments - 1; i++)
    //         {
    //             temp[i] = e[i];
    //         }
    //         delete[] e;
    //         e = temp;
    //         std::cout << "Data being processed\n";
    //     }
    // }
    // else
    // {
    //     std::cout << "Error ! \n";
    // }

    // int sizeOfExercisePlan = 1;
    // ExercisePlan *ex = new ExercisePlan[sizeOfExercisePlan];

    // std::ifstream PlanRead;
    // PlanRead.open("Data/exercisePlans.txt");

    // int indexOfPlan = 0;

    // int planId = 0;
    // int trainerId = 0; int equipmentId = 0; int duration = 0;
    // Trainers tr;
    // Equipment eq;
    // if(PlanRead.is_open()){
    //     while(!PlanRead.eof()){
    //         PlanRead >> planId;
    //         PlanRead >> equipmentId;
    //         PlanRead >> trainerId;
    //         PlanRead >> duration;
    //         tr.setTrainerId(trainerId);
    //         eq.setEquipmentId(equipmentId);
    //         ex[indexOfPlan].setExercisePlan(planId, tr, eq, duration);
    //         indexOfPlan++;
    //         sizeOfExercisePlan++;
    //         increaseSize<ExercisePlan>(ex, sizeOfExercisePlan);
    //     }
    // }

    // for (int i = 0; i < sizeOfExercisePlan - 1; i++)
    // {
    //     ex[i].printPlan();
    // }

    // int sizeOfSubData = 1;
    // Subscription *s = new Subscription[sizeOfSubData];
    // int indexOfSub = 0;

    // int id, d, m, y, cusId, planId;

    // std::ifstream loadSub;
    // loadSub.open("Data/subscriptions.txt");

    // if(loadSub.is_open()){
    //     while(!loadSub.eof()){
    //         loadSub >> id >> d >> m >> y >> cusId >> planId;
    //         Date date;
    //         Customer c;
    //         ExercisePlan ex;
    //         date.setDate(d, m, y);
    //         c.setCustomerId(cusId);
    //         ex.setExercisePlanId(planId);
    //         s[indexOfSub].setIdOfSubscription(id);
    //         s[indexOfSub].setCustomerId(c);
    //         s[indexOfSub].setDate(date);
    //         s[indexOfSub].setExercisePlanId(ex);
    //         indexOfSub++;
    //         sizeOfSubData++;
    //         increaseSize<Subscription>(s, sizeOfSubData);
    //     }
    // }
    // for (int i = 0; i < sizeOfSubData - 1; i++)
    // {
    //     s[i].printData();
    // }

    int usrChoice = 0;
    bool isRunning = true;
    while(isRunning){
        menu();
        std::cin >> usrChoice;
        if(menu(usrChoice) == 1){
            SubMenu();
            std::cin >> usrChoice;
            if(subMenu(usrChoice == 1)){
                dateArray[dateIndex].userInput();
                dateIndex++;
                dateArraySize++;
                increaseSize<Date>(dateArray, dateArraySize);
                std::cout << "1 new Date Added Successfully\n";
            }
            else if(subMenu(usrChoice) == 3){
                bool _operationComplete = true;
                while(_operationComplete){  
                    int da,m,y;
                    std::cout << "Enter day,month,year = ";
                    std::cin >> da >> m >> y;
                    removeDate(dateArray, dateArraySize, da, m, y);
                    dateArraySize--;
                    if(removeDate(dateArray, dateArraySize, da, m, y) != -1){
                        std::cout << "Date Deleted Successfully\n";
                        _operationComplete = false;
                    }
                }
            }
            else if(subMenu(usrChoice) == 2){
                int editIndex = 0;
                std::cout << "Enter the Date index you want to edit\nIndex = ";
                std::cin >> editIndex;
                Date temp;
                temp.userInput();
                if(editIndex < dateIndex || editIndex <= dateIndex){
                    dateArray[editIndex].editDate(temp);
                }
                else{
                    std::cout << "Invalid Entry\n";
                }
            }
        }
    }
}