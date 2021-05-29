#include <iostream>

class Equipment{
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
};
