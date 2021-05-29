#include <iostream>

class Trainers{
    protected:
    int trainerId;
    std::string trainName;

    public:
    Trainers();
    Trainers(int id, std::string name);
    void setTrainer(int id, std::string name);
    void printTrainer();
    int getTrainerId();
    std::string getTrainName();
};