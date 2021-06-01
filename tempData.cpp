    // int dateArraySize = 1;
    // Date *d = new Date[dateArraySize];
    // bool isRunning = true;
    // int indexOfDate = 0;
    // int choice; 
    // unsigned int day, month, year;
    // std::ifstream DateRead;
    // DateRead.open("Data/date.txt");

    // if(DateRead.is_open()){
    //     while(!DateRead.eof()){
    //         DateRead >> day >> month >> year;
    //         d[indexOfDate].setDate(day,month,year);
    //         indexOfDate++;
    //         dateArraySize++;
    //         increaseSize<Date>(d, dateArraySize);
    //     }
    // }


    // for (int i = 0; i < dateArraySize; i++)
    // {
    //     d[i].printDate();
    // }
    // delete[] d;
    // d = nullptr;

    // int CustArraySize = 1;
    // Customer* c = new Customer[CustArraySize];
    // bool isRunning = true;
    // int indexOfCustomer = 0;
    // int choice;

    // std::ifstream dataRead;
    // dataRead.open("customers.txt");

    // if (dataRead.is_open()) {
    //     while (!dataRead.eof()) {
    //         dataRead >> CId;
    //         dataRead >> CName;
    //         dataRead >> CAddress;
    //         dataRead >> phNumber;
    //         dataRead >> CEmail;
    //         c[i].setCustomerData(CId, CName, CAddress, phNumber, CEmail);
    //         i++;
    //         CustArraySize++;
    //         Customer* temp = new Customer[CustArraySize];
    //         for (int i = 0; i < CustArraySize - 1; i++)
    //         {
    //             temp[i] = c[i];
    //         }
    //         delete[] c;
    //         c = temp;
    //     }
    // }
    // else
    // {
    //     std::cout << "Error !" << std::endl;
    // }

    // for (int i = 0; i < CustArraySize - 1; i++)
    // {
    //     c[i].printCustomerData();
    // }

    // int sizeOfTrainers = 1;
    // Trainers *t = new Trainers[sizeOfTrainers];
    // std::ifstream dataRead;
    // dataRead.open("Trainers.txt");
    // int indexOfTrainer = 0;
    // int choice = 0;

    // int id = 0;
    // int i = 0;
    // std::string name;
    // if(dataRead.is_open()){
    //     while (!dataRead.eof()){
    //         dataRead >> id;
    //         while(getline(dataRead, name)){
    //             break;
    //         }
    //         t[indexOfTrainer].setTrainerName(name);
    //         t[indexOfTrainer].setTrainerId(id);
    //         indexOfTrainer++;
    //         sizeOfTrainers++;
    //         Trainers* temp = new Trainers[sizeOfTrainers];
    //         for (int i = 0; i < sizeOfTrainers - 1; i++)
    //         {
    //             temp[i] = t[i];
    //         }
    //         delete[] t;
    //         t = temp;
    //         std::cout << "Data being processed\n";
    //     }
    // }
    // else
    // {
    //     std::cout << "Error ! \n";
    // }

    // for (int i = 0; i < sizeOfTrainers - 1; i++)
    // {
    //     t[i].printTrainer();
    // }

    // int sizeOfEquipments = 1;
    // Equipment *e = new Equipment[sizeOfEquipments];
    // std::ifstream dataReadOfEquipments;
    // dataReadOfEquipments.open("Data/equipment.txt");
    // int indexOfEquipment = 0;

    // int id = 0;
    // int i = 0;
    // std::string equipmentName;
    // if(dataReadOfEquipments.is_open()){
    //     while (!dataReadOfEquipments.eof()){
    //         dataReadOfEquipments >> id;
    //         while(getline(dataReadOfEquipments, equipmentName)){
    //             break;
    //         }
    //         e[indexOfEquipment].setEquipmentName(equipmentName);
    //         e[indexOfEquipment].setEquipmentId(id);
    //         indexOfEquipment++;
    //         sizeOfEquipments++;
    //         Equipment* temp = new Equipment[sizeOfEquipments];
    //         for (int i = 0; i < sizeOfEquipments - 1; i++)
    //         {
    //             temp[i] = e[i];
    //         }
    //         delete[] e;
    //         e = temp;
    //         std::cout << "Data being processed\n";
    //     }
    // }
    // else
    // {
    //     std::cout << "Error ! \n";
    // }

    // int sizeOfExercisePlan = 1;
    // ExercisePlan *ex = new ExercisePlan[sizeOfExercisePlan];

    // std::ifstream PlanRead;
    // PlanRead.open("Data/exercisePlans.txt");

    // int indexOfPlan = 0;

    // int planId = 0;
    // int trainerId = 0; int equipmentId = 0; int duration = 0;
    // Trainers tr;
    // Equipment eq;
    // if(PlanRead.is_open()){
    //     while(!PlanRead.eof()){
    //         PlanRead >> planId;
    //         PlanRead >> equipmentId;
    //         PlanRead >> trainerId;
    //         PlanRead >> duration;
    //         tr.setTrainerId(trainerId);
    //         eq.setEquipmentId(equipmentId);
    //         ex[indexOfPlan].setExercisePlan(planId, tr, eq, duration);
    //         indexOfPlan++;
    //         sizeOfExercisePlan++;
    //         increaseSize<ExercisePlan>(ex, sizeOfExercisePlan);
    //     }
    // }

    // for (int i = 0; i < sizeOfExercisePlan - 1; i++)
    // {
    //     ex[i].printPlan();
    // }

    // int sizeOfSubData = 1;
    // Subscription *s = new Subscription[sizeOfSubData];
    // int indexOfSub = 0;

    // int id, d, m, y, cusId, planId;

    // std::ifstream loadSub;
    // loadSub.open("Data/subscriptions.txt");

    // if(loadSub.is_open()){
    //     while(!loadSub.eof()){
    //         loadSub >> id >> d >> m >> y >> cusId >> planId;
    //         Date date;
    //         Customer c;
    //         ExercisePlan ex;
    //         date.setDate(d, m, y);
    //         c.setCustomerId(cusId);
    //         ex.setExercisePlanId(planId);
    //         s[indexOfSub].setIdOfSubscription(id);
    //         s[indexOfSub].setCustomerId(c);
    //         s[indexOfSub].setDate(date);
    //         s[indexOfSub].setExercisePlanId(ex);
    //         indexOfSub++;
    //         sizeOfSubData++;
    //         increaseSize<Subscription>(s, sizeOfSubData);
    //     }
    // }
    // for (int i = 0; i < sizeOfSubData - 1; i++)
    // {
    //     s[i].printData();
    // }