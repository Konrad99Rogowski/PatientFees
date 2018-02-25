#include <iostream>
#include <string>
#include "PatientAccount.h"
#include "Med.h"
#include "Surgery.h"

using namespace std;

int main(float totalCost, float totalCost1, float totalCost2)
{
	float totalCost3;

	PatientAccount patient;
	Surgery patient1;
	Med patient2;

	patient.getPatientDisplay(totalCost);
	patient1.getSurgeryDisplay(totalCost1);
	patient2.getPharmacyDisplay(totalCost2);

	totalCost3 = ((totalCost + totalCost2) + totalCost2);
	cout << "**********************************";
	
	"Total Cost Hospital:     $" << totalCost3 << endl;
  	cout << "**********************************";
  	cout << "\n";
	cout << endl << "Press ENTER exit the menu";
	cin.clear();
	cin.get();  

	return 0;
}
