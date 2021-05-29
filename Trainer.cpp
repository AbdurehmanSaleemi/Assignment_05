#include "Trainer.hpp"

Trainers::Trainers(){
    trainerId = 0;
    trainName = "\0";
}

Trainers::Trainers(int id, std::string name){
    trainerId = id;
    trainName = name;
}

void Trainers::setTrainerId(int id){
    trainerId = id;
}

void Trainers::setTrainerName(std::string name){
    trainName = name;
}

int Trainers::getTrainerId(){
    return trainerId; 
}

std::string Trainers::getTrainName(){
    return trainName;
}

void Trainers::printTrainer(){
    std::cout << getTrainerId() << "    " << getTrainName() << std::endl;
}