#include <iostream>
#include "Customer.cpp"
#include "exercisePlan.cpp"
#include "Date.cpp"

class Subscribtion{
    protected:
    int subId;
    Date subDate;
    ExercisePlan exercisePlanId;
    Customer customerId;

    public:
    Subscribtion();
    Subscribtion(int id, Date date, ExercisePlan plan, Customer cId);
    void setIdOfSubscription(int d);
    void setDate(Date d);
    void setExercisePlanId(ExercisePlan planId);
    void setCustomerId(Customer id);
    void printData();
    int getSubId();
    std::string getDate();
    int getPlanId();
    int getCustomerId();
};