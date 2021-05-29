#include <iostream>

class Equipment{
    protected:
    int equipmentId;
    std::string equipmentName;

    public:
    Equipment();
    Equipment(int id, std::string name);
    void setEquipment(int id, std::string name);
    void printEquipintment();
    int getEquipmentId();
    std::string getEquipmentName();
};
