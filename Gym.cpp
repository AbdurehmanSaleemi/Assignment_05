#include "Gym.hpp"

int main(){
    int dateArraySize = 1;
    Date *d = new Date[dateArraySize];
    bool isRunning = true;
    int index = 0;
    int choice;
    while(isRunning){
        d[index].userInput();
        std::cout << "Want to Enter more ? Press 1 for yes & 0 for No";
        std::cout << "Choice = ";
        std::cin >> choice;
        if(choice != 1){
            isRunning = false;
        }
        else{
            index++;
            increaseSize<Date>(d,dateArraySize);
        }
    }
    
    for (int i = 0; i < index; i++)
    {
        d[i].printDate();
    }
    delete[] d;
    d = nullptr;

    // Customer custData[3];
    // std::string name[3] = {"Hamza", "Ali","Adnan"};
    // int id = 1;
    // for (int i = 0; i < 3; i++)
    // {
    //     custData[i].setCustomerDate(id, name[i], "Johar Town", 45434351, "hamza123@gmail.com");
    //     id++;
    // }
    // Equipment eq[3];
    // id = 1;
    // std::string eqName[3] = {"Treadmill", "Dumbell", "Cycle"};

    // for (int i = 0; i < 3; i++)
    // {
    //     eq[i].setEquipmentId(id);
    //     eq[i].setEquipmentName(eqName[i]);
    //     id++;
    // }
    
    // Trainers t[3];
    // id = 1;
    // for (int i = 0; i < 3; i++)
    // {
    //     t[i].setTrainerId(id);
    //     t[i].setTrainerName(name[i]);
    //     id++;
    // }


    // ExercisePlan plan[3];
    // id = 1;
    // plan[0].setExercisePlan(id, t[0], eq[0], 5);
    // id++;
    // plan[1].setExercisePlan(id, t[1], eq[1], 10);
    // id++;
    // plan[2].setExercisePlan(id, t[2], eq[2], 15);
    // id++;

    // Subscribtion s;
    // s.setIdOfSubscription(1);
    // s.setDate(d);
    // s.setExercisePlanId(plan[0]);
    // s.setCustomerId(custData[0]);
    // s.printData();

    // Subscribtion s2;
    // s2.setIdOfSubscription(2);
    // s2.setDate(d);
    // s2.setExercisePlanId(plan[1]);
    // s2.setCustomerId(custData[1]);
    // s2.printData();
}