#include <iostream>
using namespace std;

class PatientAccount{
  private:
  double cost;
  int days;
  const double DAILY_RATE = 200;
  
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
  
  
  
};
