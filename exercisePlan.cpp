#include "exercisePlan.hpp"

ExercisePlan::ExercisePlan(){
    planId = 0;
    duration = 0;
}

ExercisePlan::ExercisePlan(int Id, Trainers trId, Equipment eqId, int d){
    planId = Id;
    trainerId.setTrainerId(trId.getTrainerId());
    equipmentId.setEquipmentId(eqId.getEquipmentId());
    duration = d;
}

void ExercisePlan::setExercisePlan(int Id, Trainers trId, Equipment eqId, int d){
    planId = Id;
    trainerId.setTrainerId(trId.getTrainerId());
    equipmentId.setEquipmentId(eqId.getEquipmentId());
    duration = d;
}

int ExercisePlan::getPlanId(){
    return planId;
}
int ExercisePlan::_getTrainerId(){
    return trainerId.getTrainerId();
}
int ExercisePlan::_getEquipmentId(){
    return equipmentId.getEquipmentId();
}
int ExercisePlan::getDuration(){
    return duration;
}

void ExercisePlan::printPlan(){
    std::cout << getPlanId() << "  " << _getTrainerId() << "  " << _getEquipmentId() << getDuration() << std::endl;
}