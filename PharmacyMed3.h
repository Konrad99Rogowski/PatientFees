#include <iostream>
#include <string>
using namespace std;

/**/

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

Pharmacy::Pharmacy(double mc = 0, string mn = " ")
{
	medCost = mc;
	medName = mn;
};

double Pharmacy::getMedCost()
{
	cout << "Enter the cost of the mdeciation: $";
	cin >> medCost;

	return medCost;
}

string Pharmacy::getMedName()
{
	cout << "Enter the medication name: ";
	getline(cin, medName);

	return medName;
}

int main(double totalCost2){
  
  
  Pharmacy patient2;
  
  patient2.getPharmacyDisplay(totalCost2);
  
  
  
  
  
  
  return 0;
}