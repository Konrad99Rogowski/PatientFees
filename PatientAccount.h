
#include <iostream>
#include "Surgery.h"
#include "Medication.h"


class PatientAccount{
  private:
  double cost;
  int days;
  const double DAILY_RATE = 200.0;
  
  public:
  PatientAccount(){
    days = 1;
    cost = 200.0;
  }
  
  void UpdatePatient(int d){
    cost = 0;
    days = d;
    cost += days * DAILY_RATE;
  }
  
  double getCost(){
    return cost;
  }
  
  
  int getDays(){
    return days;
  }
  
  void addSurgery(int s){
      Surgery s1;
      cost += s1.surgeryCost(s);
  }
  
  void addMedication(int m){
      Medication m1;
      cost += m1.medicationCost(m);
  }
  
  
  
};



