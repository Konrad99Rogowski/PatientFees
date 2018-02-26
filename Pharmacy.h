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
	void medType(int);
	void getDisplay();
};

void Pharmacy::getDisplay()
{
	cout << "\nEnter the number that corresponds to the Medication you need to take: \n" << endl;
	cout << "1. Hydrocodone(pain).\n";
	cout << "2. Patanol(Eyes).\n";
	cout << "3. Morphine(Severe pain).\n";
	cout << "4. Alendronate(bones).\n";
	cout << "5. Ibuprofen(fever).\n";
}

Pharmacy::Pharmacy(double mc = 0, string mn = " ")
{
	medCost = mc;
	medName = mn;
}
void Pharmacy::medType(int m){
	medCost = 0;
	switch (m)
	{
	case 1:
		medName = "Hydrocodone";
		medCost += 12;
		break;
	case 2:
		medName = "Patanol";
		medCost += 15;
		break;
	case 3:
		medName = "Morphine";
		medCost += 16;
		break;
	case 4:
		medName = "Alendronate";
		medCost += 20;
		break;
	case 5:
		medName = "Ibuprofen";
		medCost += 6;
		break;
	}
	cout << "\nMedication: " << medName << "\n Cost of medication: $" << medCost << endl;
}
double Pharmacy::getMedCost()
{
	return medCost;
}
