#include <iostream>
#include <string>
#include <iomanip>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"
using namespace std;

int main() {
	//create local vaariables that will then be used as arguments to call on methods
	int choice, days, meds, medchoice, temp = 1;

	//takes user input for days and then the input is used to calculate the cost for the stay time
	cout << "How many days were you in the hospital?: ";
	cin >> days;
	PatientAccount pt;
	pt.UpdatePatient(days);
	pt.stayCost(days);

	//displays surgery menu for user to select and then prints the selected Surgery and its cost
	Surgery pt1;
	pt1.getMenu();
	cin >> choice;
	pt1.surgeryType(choice);
	pt.updateCost(pt1.getCost());

	//asks for number of medications and stores the value in local variable meds
	cout << "\n Enter the number of medications that you need to take\n";
	cin >> meds;
	Pharmacy ph;

	//while loop to display medications menu as many times as the user needs in order to input the medications. Also, displays the medication and its cost on every iteration of the loop
	while (temp <= meds){
		ph.getDisplay();
		cin >> medchoice;
		ph.medType(medchoice);
		pt.updateCost(ph.getMedCost());
		temp++;
	}
	//outputs the total hospital fees for the patient
	cout << "\n\n Bill total: $" << fixed << showpoint << setprecision(2) << pt.getCost() << endl;
}
