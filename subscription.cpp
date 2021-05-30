#include "subscription.hpp"
#include <string>


Subscribtion::Subscribtion(){
    subId = 0;
}

Subscribtion::Subscribtion(int id, Date date, ExercisePlan plan, Customer cId){
    subId = id;
    subDate.setDate(date.getDay(), date.getMonth(), date.getYear());
    exercisePlanId.setExercisePlanId(plan.getPlanId());
    customerId.setCustomerId(cId.getCustomerId());
}

void Subscribtion::setIdOfSubscription(int d){
    subId = d;
}
void Subscribtion::setDate(Date d){
    subDate.setDate(d.getDay(), d.getMonth(), d.getYear());
}
void Subscribtion::setExercisePlanId(ExercisePlan planId){
    exercisePlanId.setExercisePlanId(planId.getPlanId());
}
void Subscribtion::setCustomerId(Customer id){
    customerId.setCustomerId(id.getCustomerId());
}

int Subscribtion::getSubId(){
    return subId;
}
std::string Subscribtion::getDate(){
    std::string date = std::to_string(subDate.getDay()) + "/" + std::to_string(subDate.getMonth()) + "/" + std::to_string(subDate.getYear());
    return date;
}
int Subscribtion::getPlanId(){
    return exercisePlanId.getPlanId();
}
int Subscribtion::getCustomerId(){
    return customerId.getCustomerId();
}

void Subscribtion::printData(){
    std::cout << getSubId() << " " << getDate() << " " << getPlanId() << " " << getCustomerId() << std::endl;
}