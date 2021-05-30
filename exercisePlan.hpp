#include <iostream>
#include "Trainer.cpp"
#include "Equipment.cpp"

class ExercisePlan{
    protected:
    int planId;
    Trainers trainerId;
    Equipment equipmentId;
    int duration;

    public:
    ExercisePlan();
    ExercisePlan(int Id, Trainers trId, Equipment eqId, int d);
    void setExercisePlan(int Id, Trainers trId, Equipment eqId, int d);
    void printPlan();
    int getPlanId();
    int _getTrainerId();
    int _getEquipmentId();
    int getDuration();
};