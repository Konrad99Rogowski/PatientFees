#include <iostream>
#include <string>
using namespace std;

class PatientAccount {
private:
	double cost = 0;
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
	void stayCost(int dy){
		days = dy;
		cout << "\n Hospital stay cost: $" << days * DAILY_RATE << endl;
	}
	void updateCost(double c) {
		cost += c;
	}
	double getCost(){
		return cost;
	}
	int getDays(){
		return days;
	}

};
