#include <iostream>
#include "PatientAccount.h"
using namespace std;

int main(){
    PatientAccount p1;
    p1.UpdatePatient(5);
    p1.addSurgery(4);
    p1.addMedication(5);
    cout<<p1.getCost()<<endl;
    
}