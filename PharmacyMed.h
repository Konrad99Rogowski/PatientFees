#include <iostream>
#include <string>
using namespace std;

class Pharmacy
{
	private:
		double medCost;
		string medName;

	public:
		Pharmacy(double, string);
		double getMedCost();
		string getMedName();
		void getPharmacyDisplay(double& totalCost2);
};

void Pharmacy::getPharmacyDisplay(double& totalCost2)
{
	Pharmacy patient(getMedCost(), getMedName());

	totalCost2 = medCost;

	cout << "Medication Name:           " << medName << endl;
	cout << "Medication Cost:          $" << medCost << endl;
	cout << "Total Cost:               $" << totalCost2 << endl;
	cout << "\n";
}