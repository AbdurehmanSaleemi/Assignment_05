#include "Equipment.hpp"

Equipment::Equipment(){
    equipmentId = 0;
    equipmentName = "\0";
}

Equipment::Equipment(int id, std::string name){
    equipmentId = id;
    equipmentName = name;
}

void Equipment::setEquipment(int id, std::string name){
    equipmentId = id;
    equipmentName = name;
}

int Equipment::getEquipmentId(){
    return equipmentId;
}

std::string Equipment::getEquipmentName(){
    return equipmentName;
}

void Equipment::printEquipintment(){
    std::cout << getEquipmentId() << "   " << getEquipmentName() << std::endl;
}