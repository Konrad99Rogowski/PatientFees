#include <iostream>
#include "PatientAccount.h"
using namespace std;

int main(){
    int d;
    int s;
    int m;
    
    PatientAccount p1;
    //get number of days
    cin >> d;
    p1.UpdatePatient(d);
    
    //show surgery list and get number
    cin >> s
    p1.addSurgery(s);
    
    //show medication list and get number
    cin >> m
    p1.addMedication(m);
    cout<<"Total $"<<p1.getCost()<<endl;
    
}
