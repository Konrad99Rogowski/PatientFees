#include <iostream>
#include <string>
#include "med.h"
using namespace std;

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










