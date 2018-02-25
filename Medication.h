#include <iostream>


class Medication {
  private:
   int choice;
  public:
    double medicationCost(int c){
        choice = c;
     
        switch (choice)
        {
        case 1:
            return 20;
            break;
        case 2:
            return 50;
            break;
        case 3:
            return 100;
            break;
        case 4:
            return 150;
            break;
        case 5:
            return 200;
            break;
        }
        
    }
};