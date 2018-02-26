#include <iostream>
#include <string>
using namespace std;

class Surgery {
private:
	//local variables
	double thecost;
	string theSrgy;

public:
	//constructor and default value for the variables
	Surgery(double cost1 = 0, string srgy = "NO surgery"){
		theSrgy = srgy;
		thecost = cost1;
	}
	//method that when its called, it will display the menu for the surgery
	void getMenu(){
		cout << "\nEnter the number that corresponds to the surgery you received\n" << endl;
		cout << "1. Lumbar spinal fusion surgery.\n";
		cout << "2. laser eye surgery.\n";
		cout << "3. Joint Replacement.\n";
		cout << "4. Broken Bone Repair.\n";
		cout << "5. Cataract Removal.\n";
	}
	//method that when its called uses a switch statement to assign a value to the variables theSrgy and thecost
	void surgeryType(int c){
		switch (c)
		{
		case 1:
			theSrgy = "Lumbar spinal fusion surgery";
			thecost += 34500;
			break;
		case 2:
			theSrgy = "laser eye surgery";
			thecost += 4000;
			break;
		case 3:
			theSrgy = "Joint Replacement";
			thecost += 16000;
			break;
		case 4:
			theSrgy = "Broken Bone Repair";
			thecost += 8000;
			break;
		case 5:
			theSrgy = "Cataract Removal";
			thecost += 3000;
			break;
		}
		//prints the surgery selected and its cost
		cout << "\nSurgery: " << theSrgy << "\n Cost of procedure: $" << thecost << endl;
	}
	// accessor method to display the cost of the surgery
	double getCost(){
		return thecost;
	}
};
