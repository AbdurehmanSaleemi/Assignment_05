#include "Equipment.hpp"

Equipment::Equipment(){
    equipmentId = 0;
    equipmentName = "\0";
}

Equipment::Equipment(int id, std::string name){
    equipmentId = id;
    equipmentName = name;
}

void Equipment::setEquipmentId(int id){
    equipmentId = id;
}

void Equipment::setEquipmentName(std::string name){
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