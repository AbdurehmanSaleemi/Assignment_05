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
    void setCustomerData(unsigned int id, std::string name, std::string address, int number, std::string email);
    void printCustomerData();
    void setCustomerId(int id);
    unsigned int getCustomerId();
    std::string getCustomerName();
    std::string getCustomerAddress();
    int getPhoneNumber();
    std::string getCustomerEmail();
    void userInput();
    void operator =(Customer _c);
    void editCustomer(Customer _c){
        setCustomerData(_c.getCustomerId(), _c.getCustomerName(), _c.getCustomerAddress(), _c.getPhoneNumber(), _c.getCustomerEmail());
    }
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

void Customer::setCustomerData(unsigned int id, std::string name, std::string address, int number, std::string email) {
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
    setCustomerData(_c.getCustomerId(), _c.getCustomerName(), _c.getCustomerAddress(), _c.getPhoneNumber(), _c.getCustomerEmail());
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
    setCustomerData(id, Name, Address, phNumber, CEmail);
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
    std::string getTrainerName();
    void operator =(Trainers &t);
    void inputData();
    void editTrainer(Trainers &_t){
        setTrainerName(_t.getTrainerName());
        setTrainerId(_t.getTrainerId());
    }
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

std::string Trainers::getTrainerName() {
    return trainName;
}

void Trainers::printTrainer() {
    std::cout << getTrainerId() << "    " << getTrainerName() << std::endl;
}

void Trainers::inputData(){
    int id;
    std::string name;
    std::cout << "Enter Trainer ID = ";
    std::cin >> id;
    std::cout << "Enter name = ";
    std::cin >> name;
    setTrainerId(id);
    setTrainerName(name);
}


void Trainers::operator =(Trainers &t){
    trainerId = t.getTrainerId();
    trainName = t.getTrainerName();
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
    void inputData();
    void editEquipment(Equipment &_e){
        setEquipmentName(_e.getEquipmentName());
        setEquipmentId(_e.getEquipmentId());
    }
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

void Equipment::inputData(){
    int id;
    std::string name;
    std::cout << "Enter Equipment ID = ";
    std::cin >> id;
    std::cout << "Enter Equipment name = ";
    std::cin >> name;
    setEquipmentId(id);
    setEquipmentName(name);
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
    void inputData();
    void editExercisePlan(ExercisePlan &_plan){
        setExercisePlan(_plan.getPlanId(), _plan.trainerId, _plan.equipmentId, _plan.getDuration());
    }
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

void ExercisePlan::inputData(){
    int id;
    int t_id;
    int e_id;
    Trainers _t;
    Equipment _e;
    int d; 
    std::cout << "Enter the Plan Id = ";
    std::cin >> id;
    std::cout << "Enter trainer Id = ";
    std::cin >> t_id;
    std::cout << "Enter Equipment id = ";
    std::cin >> e_id;
    std::cout << "Enter Exercise Duration = ";
    std::cin >> d;
    _t.setTrainerId(t_id);
    _e.setEquipmentId(e_id);
    setExercisePlan(id, _t, _e, d);
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
    void inputData();
    void editSubscription(Subscription &_s){
        setIdOfSubscription(_s.getPlanId());
        setExercisePlanId(_s.exercisePlanId);
        setDate(_s.subDate);
        setCustomerId(_s.customerId);
    }
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

void Subscription::inputData(){
    int id = 0;
    Date d;
    ExercisePlan _e;
    Customer _c;
    int e_id = 0;
    int c_id = 0;
    std::cout << "Enter SubScription id = ";
    std::cin >> id;
    std::cout << "Enter Date Now \n";
    d.userInput();
    std::cout << "Enter Exercise Plan Id = ";
    std::cin >> e_id;
    std::cout << "Enter Customer Id = ";
    std::cin >> c_id;
    _e.setExercisePlanId(e_id);
    _c.setCustomerId(c_id);
    setIdOfSubscription(id);
    setDate(d);
    setExercisePlanId(_e);
    setCustomerId(_c);
}

class Gym{
    protected:
    int dateArraySize;
    Date *dateArray;
    int dateIndex = 0;

    int customerArraySize;
    Customer *customerArray;
    int customerIndex;

    int trainerArraySize;
    Trainers *trainerArray;
    int trainerIndex;

    int equipmentArraySize;
    Equipment *equipmentArray; 
    int equipmentIndex = 0;

    int exercisePlanArraySize;
    ExercisePlan *exercisePlanArray;
    int exercisePlanIndex;

    int subscriptionArraySize;
    Subscription *subscriptionArray;
    int subscriptionIndex;

    public:
    void init(){
        dateArraySize = 1;
        dateArray = new Date[dateArraySize];
        dateIndex = 0;

        customerArraySize = 1;
        customerArray = new Customer[customerArraySize];
        int customerIndex = 0;

        trainerArraySize = 1;
        trainerArray = new Trainers[trainerArraySize];
        trainerIndex = 0;

        equipmentArraySize = 1;
        equipmentArray = new Equipment[equipmentArraySize];
        equipmentIndex = 0;

        exercisePlanArraySize = 1;
        exercisePlanArray = new ExercisePlan[exercisePlanArraySize];
        exercisePlanIndex = 0;

        subscriptionArraySize = 1;
        subscriptionArray = new Subscription[subscriptionArraySize];
        subscriptionIndex = 0;
    }

    Gym(){
        init();
    }
    void loadCustomerFromFile(Customer *& c, int CustArraySize, int &i){
        bool isRunning = true;
        int indexOfCustomer = 0;
        int choice;
        int CId;
        std::string CName;
        std::string CAddress;
        int phNumber;
        std::string CEmail;

        std::ifstream dataRead;
        dataRead.open("customers.txt");

        if (dataRead.is_open()) {
            while (!dataRead.eof()) {
                dataRead >> CId;
                dataRead >> CName;
                dataRead >> CAddress;
                dataRead >> phNumber;
                dataRead >> CEmail;
                c[i].setCustomerData(CId, CName, CAddress, phNumber, CEmail);
                i++;
                CustArraySize++;
                Customer* temp = new Customer[CustArraySize];
                for (int i = 0; i < CustArraySize - 1; i++)
                {
                    temp[i] = c[i];
                }
                delete[] c;
                c = temp;
            }
            std::cout << "Data from Customers.txt loaded Successfully" << std::endl;
        }
        else
        {
            std::cout << "Error !" << std::endl;
        }
    }
    void loadTrainersFromFile(Trainers *& t, int &sizeOfTrainers, int &indexOfTrainer){
        std::ifstream dataRead;
        dataRead.open("Trainers.txt");

        int id = 0;
        int i = 0;
        std::string name;
        if(dataRead.is_open()){
            while (!dataRead.eof()){
                dataRead >> id;
                while(getline(dataRead, name)){
                    break;
                }
                t[indexOfTrainer].setTrainerName(name);
                t[indexOfTrainer].setTrainerId(id);
                indexOfTrainer++;
                sizeOfTrainers++;
                Trainers* temp = new Trainers[sizeOfTrainers];
                for (int i = 0; i < sizeOfTrainers - 1; i++)
                {
                    temp[i] = t[i];
                }
                delete[] t;
                t = temp;
            }
            std::cout << "Data from Trainers.txt loaded Successfully" << std::endl;
        }
        else
        {
            std::cout << "Error ! \n";
        }
    }

    void loadEquipmentsFromFile(Equipment *&e, int &sizeOfEquipments, int &indexOfEquipment){
        std::ifstream dataReadOfEquipments;
        dataReadOfEquipments.open("Data/equipment.txt");
        int id = 0;
        std::string equipmentName;
        if(dataReadOfEquipments.is_open()){
            while (!dataReadOfEquipments.eof()){
                dataReadOfEquipments >> id;
                while(getline(dataReadOfEquipments, equipmentName)){
                    break;
                }
                e[indexOfEquipment].setEquipmentName(equipmentName);
                e[indexOfEquipment].setEquipmentId(id);
                indexOfEquipment++;
                sizeOfEquipments++;
                Equipment* temp = new Equipment[sizeOfEquipments];
                for (int i = 0; i < sizeOfEquipments - 1; i++)
                {
                    temp[i] = e[i];
                }
                delete[] e;
                e = temp;
            }
            std::cout << "Data from Equipment.txt loaded Successfully" << std::endl;
        }
        else
        {
            std::cout << "Error ! \n";
        }
    }

    void loadExercisePlansFromFile(ExercisePlan*& ex ,int &sizeOfExercisePlan, int &indexOfPlan){

        std::ifstream PlanRead;
        PlanRead.open("Data/exercisePlans.txt");
        int planId = 0;
        int trainerId = 0; int equipmentId = 0; int duration = 0;
        Trainers tr;
        Equipment eq;
        if(PlanRead.is_open()){
            while(!PlanRead.eof()){
                PlanRead >> planId;
                PlanRead >> equipmentId;
                PlanRead >> trainerId;
                PlanRead >> duration;
                tr.setTrainerId(trainerId);
                eq.setEquipmentId(equipmentId);
                ex[indexOfPlan].setExercisePlan(planId, tr, eq, duration);
                indexOfPlan++;
                sizeOfExercisePlan++;
                increaseSize<ExercisePlan>(ex, sizeOfExercisePlan);
            }
            std::cout << "Data from ExercisePlans.txt loaded Successfully" << std::endl;
        }
        else
        {
            std::cout << "Error ! \n";
        }
    }

    void loadSubscriptionsFromFile(Subscription *&s, int sizeOfSubData, int &indexOfSub){
        int id, d, m, y, cusId, planId;
        std::ifstream loadSub;
        loadSub.open("Data/subscriptions.txt");

        if(loadSub.is_open()){
            while(!loadSub.eof()){
                loadSub >> id >> d >> m >> y >> cusId >> planId;
                Date date;
                Customer c;
                ExercisePlan ex;
                date.setDate(d, m, y);
                c.setCustomerId(cusId);
                ex.setExercisePlanId(planId);
                s[indexOfSub].setIdOfSubscription(id);
                s[indexOfSub].setCustomerId(c);
                s[indexOfSub].setDate(date);
                s[indexOfSub].setExercisePlanId(ex);
                indexOfSub++;
                sizeOfSubData++;
                increaseSize<Subscription>(s, sizeOfSubData);
            }
            std::cout << "Data from Subscriptions.txt loaded Successfully" << std::endl;
        }
        else
        {
            std::cout << "Error ! \n";
        }
    }

    int removeDate(Date*& container, int containerSize, int FindDay, int FindMonth, int FindYear) {
        int index = 0; // storing the index of the id to be removed
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

    int removeCustomer(Customer*& container, int containerSize, int id) {
        int index = 0; // storing the index of the id to be removed
        for (int i = 0; i < containerSize; i++)
        {
            if(container[i].getCustomerId() == id){
                index = i;
                return 0;
                break;
            }
            else if(i == containerSize - 1 && index == 0){
                std::cout << "No entry Found\n";
                return -1;
            }
        }

        int n = containerSize - 1;
        Customer* newArr = new Customer[n];
        for (int i = index; i < containerSize; i++)
        {
            Customer temp = container[i];
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

    int removeTrainer(Trainers*& container, int containerSize, int id) {

        int index = 0; // storing the index of the id to be removed
        for (int i = 0; i < containerSize; i++)
        {
            if (container[i].getTrainerId() == id) {
                index = i;
                return 0;
                break;
            }
            else if(i == containerSize - 1 && index == 0){
                std::cout << "No entry Found\n";
                return -1;
            }
        }

        int n = containerSize - 1;
        Trainers* newArr = new Trainers[n];
        for (int i = index; i < containerSize; i++)
        {
            Trainers temp = container[i];
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

    int removeEquipment(Equipment*& container, int containerSize, int id) {

        int index = 0; // storing the index of the id to be removed
        for (int i = 0; i < containerSize; i++)
        {
            if (container[i].getEquipmentId() == id) {
                index = i;
                return 0;
                break;
            }
            else if(i == containerSize - 1 && index == 0){
                std::cout << "No entry Found\n";
                return -1;
            }
        }
        
        int n = containerSize - 1;
        Equipment* newArr = new Equipment[n];
        for (int i = index; i < containerSize; i++)
        {
            Equipment temp = container[i];
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

    int removeExercisePlan(ExercisePlan*& container, int containerSize, int id) {

        int index = 0; // storing the index of the id to be removed
        for (int i = 0; i < containerSize; i++)
        {
            if (container[i].getPlanId() == id) {
                index = i;
                return 0;
                break;
            }
            else if(i == containerSize - 1 && index == 0){
                std::cout << "No entry Found\n";
                return -1;
            }
        }
        
        int n = containerSize - 1;
        ExercisePlan* newArr = new ExercisePlan[n];
        for (int i = index; i < containerSize; i++)
        {
            ExercisePlan temp = container[i];
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

    int removeSubscription(Subscription*& container, int containerSize, int id) {

        int index = 0; // storing the index of the id to be removed
        for (int i = 0; i < containerSize; i++)
        {
            if (container[i].getSubId() == id) {
                index = i;
                return 0;
                break;
            }
            else if(i == containerSize - 1 && index == 0){
                std::cout << "No entry Found\n";
                return -1;
            }
        }
        
        int n = containerSize - 1;
        Subscription* newArr = new Subscription[n];
        for (int i = index; i < containerSize; i++)
        {
            Subscription temp = container[i];
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
                return 16;
            }
            else if(choice == 17){
                return 17;
            }
            else if(choice == 18){
                return 18;
            }
            else if(choice == 19){
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
        std::cout << "------ E Q U I P M E N T -------\n";
        std::cout << "10. Add Equipment \n";
        std::cout << "11. Edit Equipment\n";
        std::cout << "12. Delete Equipment\n";
        std::cout << "------ E X E R C I S E - P L A N S -------\n";
        std::cout << "13. Add Exerxise Plan\n";
        std::cout << "14. Edit Exerxise Plan\n";
        std::cout << "15. Delete Exerxise Plan\n";
        std::cout << "------ S U B S C R I P T I O N -------\n";
        std::cout << "16. Add Subscription\n";
        std::cout << "17. Edit Subscription\n";
        std::cout << "18. Delete Subscription\n";
        std::cout << "19. Go Back\n";
        std::cout << "----------------------------------------------------------------------\n";
        std::cout << "Choice = ";
    }

    void runGym(){
        init();
        int usrChoice = 0;
        bool isRunning = true;
        bool subMenuRunning = true;
        while(isRunning){
            menu();
            std::cin >> usrChoice;
            if(menu(usrChoice) == 1){
                subMenuRunning = true;
                while(subMenuRunning)
                {
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
                    else if(subMenu(usrChoice) == 4){
                        customerArray[customerIndex].userInput();
                        customerArraySize++;
                        customerIndex++;
                        Customer* temp = new Customer[customerArraySize];
                        for (int i = 0; i < customerArraySize - 1; i++)
                        {
                            temp[i] = customerArray[i];
                        }
                        delete [] customerArray;
                        customerArray = temp;                                
                        std::cout << "1 Customer added successfully\n";
                    }
                    else if(subMenu(usrChoice) == 5){
                        int id = 0;
                        bool isFound = false;
                        int index = 0;
                        std::cout << "Enter the Customer ID you want to edit\nId = ";
                        std::cin >> id;
                        for (int i = 0; i < customerArraySize; i++){
                            if(customerArray[i].getCustomerId() == id){
                                isFound = true;
                                std::cout << "Data Found\n";
                                index = i;
                                break;
                            }
                            else if(i == customerArraySize - 1 && index == 0){
                                std::cout << "No id found\n";
                            }
                        }
                        if(isFound){
                            Customer temp;
                            temp.userInput();
                            customerArray[index].editCustomer(temp);
                            std::cout << "Customer Edited Successfully\n";
                        }
                    }
                    else if(subMenu(usrChoice) == 6){
                        bool _operationComplete = true;
                        while(_operationComplete){  
                            int id;
                            std::cout << "Enter id of Customer you want to Delete = ";
                            std::cin >> id;
                            removeCustomer(customerArray, customerArraySize,id);
                            customerArraySize--;
                            if(removeCustomer(customerArray, customerArraySize,id) != -1){
                                std::cout << "Customer Deleted Successfully\n";
                                _operationComplete = false;
                            }
                            else{
                                std::cout << "Enter Valid Id\n";
                            }
                        }
                    }
                    else if(subMenu(usrChoice) == 7){
                        trainerArray[trainerIndex].inputData();
                        trainerArraySize++;
                        trainerIndex++;
                        Trainers* temp = new Trainers[trainerArraySize];
                        for (int i = 0; i < trainerArraySize - 1; i++)
                        {
                            temp[i] = trainerArray[i];
                        }
                        delete [] trainerArray;
                        trainerArray = temp;
                        std::cout << "1 Trainers added successfully\n";
                    }
                    else if(subMenu(usrChoice) == 8){
                        int id = 0;
                        bool isFound = false;
                        int index = 0;
                        std::cout << "Enter the Trainer ID you want to edit\nId = ";
                        std::cin >> id;
                        for (int i = 0; i < trainerArraySize; i++){
                            if(trainerArray[i].getTrainerId() == id){
                                isFound = true;
                                std::cout << "Data Found\n";
                                index = i;
                                break;
                            }
                            else if(i == trainerArraySize - 1 && index == 0){
                                std::cout << "No id found\n";
                            }
                        }
                        if(isFound){
                            Trainers temp;
                            temp.inputData();
                            trainerArray[index].editTrainer(temp);
                            std::cout << "Trainer Edited Successfully\n";
                        }
                    }
                    else if(subMenu(usrChoice) == 9){
                        bool _operationComplete = true;
                        while(_operationComplete){  
                            int id;
                            std::cout << "Enter id of Trainer you want to Delete = ";
                            std::cin >> id;
                            removeTrainer(trainerArray, trainerArraySize,id);
                            trainerArraySize--;
                            if(removeTrainer(trainerArray, trainerArraySize,id) != -1){
                                std::cout << "Trainer Deleted Successfully\n";
                                _operationComplete = false;
                            }
                            else{
                                std::cout << "Enter Valid Id\n";
                            }
                        }
                    }
                    else if(subMenu(usrChoice) == 10){
                        equipmentArray[trainerIndex].inputData();
                        equipmentArraySize++;
                        equipmentIndex++;
                        Equipment* temp = new Equipment[equipmentArraySize];
                        for (int i = 0; i < equipmentArraySize - 1; i++)
                        {
                            temp[i] = equipmentArray[i];
                        }
                        delete [] equipmentArray;
                        equipmentArray = temp;
                        std::cout << "1 Equipment added successfully\n";
                    }
                    else if(subMenu(usrChoice) == 11){
                        int id = 0;
                        bool isFound = false;
                        int index = 0;
                        std::cout << "Enter the Equipment ID you want to edit\nId = ";
                        std::cin >> id;
                        for (int i = 0; i < equipmentArraySize; i++){
                            if(equipmentArray[i].getEquipmentId() == id){
                                isFound = true;
                                std::cout << "Data Found\n";
                                index = i;
                                break;
                            }
                            else if(i == equipmentArraySize - 1 && index == 0){
                                std::cout << "No id found\n";
                            }
                        }
                        if(isFound){
                            Equipment temp;
                            temp.inputData();
                            equipmentArray[index].editEquipment(temp);
                            std::cout << "Equipment Edited Successfully\n";
                        }
                    }
                    else if(subMenu(usrChoice) == 12){
                        bool _operationComplete = true;
                        while(_operationComplete){  
                            int id;
                            std::cout << "Enter id of Equipment you want to Delete = ";
                            std::cin >> id;
                            removeEquipment(equipmentArray, equipmentArraySize,id);
                            equipmentArraySize--;
                            if(removeEquipment(equipmentArray, equipmentArraySize,id) != -1){
                                std::cout << "Equipment Deleted Successfully\n";
                                _operationComplete = false;
                            }
                            else{
                                std::cout << "Enter Valid Id\n";
                            }
                        }
                    }
                    else if(subMenu(usrChoice) == 13){
                        exercisePlanArray[exercisePlanIndex].inputData();
                        exercisePlanArraySize++;
                        exercisePlanIndex++;
                        ExercisePlan* temp = new ExercisePlan[exercisePlanArraySize];
                        for (int i = 0; i < exercisePlanArraySize - 1; i++)
                        {
                            temp[i] = exercisePlanArray[i];
                        }
                        delete [] exercisePlanArray;
                        exercisePlanArray = temp;
                        std::cout << "1 ExercisePlan added successfully\n";
                    }
                    else if(subMenu(usrChoice) == 14){
                        int id = 0;
                        bool isFound = false;
                        int index = 0;
                        std::cout << "Enter the Exercise Plan ID you want to edit\nId = ";
                        std::cin >> id;
                        for (int i = 0; i < exercisePlanArraySize; i++){
                            if(exercisePlanArray[i].getPlanId() == id){
                                isFound = true;
                                std::cout << "Data Found\n";
                                index = i;
                                break;
                            }
                            else if(i == exercisePlanArraySize - 1 && index == 0){
                                std::cout << "No id found\n";
                            }
                        }
                        if(isFound){
                            ExercisePlan temp;
                            temp.inputData();
                            exercisePlanArray[index].editExercisePlan(temp);
                            std::cout << "Exercise Plan Edited Successfully\n";
                        }
                    }
                    else if(subMenu(usrChoice) == 15){
                        bool _operationComplete = true;
                        while(_operationComplete){  
                            int id;
                            std::cout << "Enter id of Plan you want to Delete = ";
                            std::cin >> id;
                            removeExercisePlan(exercisePlanArray, exercisePlanArraySize,id);
                            exercisePlanArraySize--;
                            if(removeExercisePlan(exercisePlanArray, exercisePlanArraySize,id) != -1){
                                std::cout << "Exercise Plan Deleted Successfully\n";
                                _operationComplete = false;
                            }
                            else{
                                std::cout << "Enter Valid Id\n";
                            }
                        }
                    }
                    else if(subMenu(usrChoice) == 16){
                        subscriptionArray[subscriptionIndex].inputData();
                        subscriptionArraySize++;
                        exercisePlanIndex++;
                        Subscription* temp = new Subscription[subscriptionArraySize];
                        for (int i = 0; i < subscriptionArraySize - 1; i++)
                        {
                            temp[i] = subscriptionArray[i];
                        }
                        delete [] subscriptionArray;
                        subscriptionArray = temp;
                        std::cout << "1 Subscription added successfully\n";
                    }
                    else if(subMenu(usrChoice) == 17){
                        int id = 0;
                        bool isFound = false;
                        int index = 0;
                        std::cout << "Enter the Exercise Plan ID you want to edit\nId = ";
                        std::cin >> id;
                        for (int i = 0; i < subscriptionArraySize; i++){
                            if(subscriptionArray[i].getPlanId() == id){
                                isFound = true;
                                std::cout << "Data Found\n";
                                index = i;
                                break;
                            }
                            else if(i == subscriptionArraySize - 1 && index == 0){
                                std::cout << "No id found\n";
                            }
                        }
                        if(isFound){
                            Subscription temp;
                            temp.inputData();
                            subscriptionArray[index].editSubscription(temp);
                            std::cout << "Subscription Edited Successfully\n";
                        }
                    }
                    else if(subMenu(usrChoice) == 18){
                        bool _operationComplete = true;
                        while(_operationComplete){  
                            int id;
                            std::cout << "Enter id of Plan you want to Delete = ";
                            std::cin >> id;
                            removeSubscription(subscriptionArray, subscriptionArraySize,id);
                            subscriptionArraySize--;
                            if(removeSubscription(subscriptionArray, subscriptionArraySize,id) != -1){
                                std::cout << "Subscription Deleted Successfully\n";
                                _operationComplete = false;
                            }
                            else{
                                std::cout << "Enter Valid Id\n";
                            }
                        }
                    }
                    else if(subMenu(usrChoice) == -1){
                        subMenuRunning = false;
                    }
                }
            }
            else if(menu(usrChoice) == -1){
                isRunning = false;
            }
        }
    }
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

};

int main(){
    Gym gymSoftware;
    gymSoftware.runGym();
    return 0;
}