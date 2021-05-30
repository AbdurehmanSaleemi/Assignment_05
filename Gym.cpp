#include "Date.cpp"
#include "Customer.cpp"
//#include "Equipment.cpp"
//#include "Trainer.cpp"
#include "exercisePlan.cpp"

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
    Equipment eq[3];

    int id = 1;
    std::string eqName[3] = {"Treadmill", "Dumbell", "Cycle"};

    for (int i = 0; i < 3; i++)
    {
        eq[i].setEquipmentId(id);
        eq[i].setEquipmentName(eqName[i]);
        id++;
    }
    
    Trainers t[3];
    std::string name[3] = {"Hamza", "Ali","Adnan"};
    id = 1;
    for (int i = 0; i < 3; i++)
    {
        t[i].setTrainerId(id);
        t[i].setTrainerName(name[i]);
        id++;
    }

    ExercisePlan plan[3];
    id = 1;
    plan[0].setExercisePlan(id, t[0], eq[0], 5);
    id++;
    plan[1].setExercisePlan(id, t[1], eq[1], 10);
    id++;
    plan[2].setExercisePlan(id, t[2], eq[2], 15);
    id++;

    for (int i = 0; i < 3; i++)
    {
        plan[i].printPlan();
    }
}