#include <iostream>


class Surgery {
  private:
   int choice;
  public:
    double surgeryCost(int c){
        choice = c;
     
        switch (choice)
        {
        case 1:
            return 34500;
            break;
        case 2:
            return 4000;
            break;
        case 3:
            return 16000;
            break;
        case 4:
            return 8000;
            break;
        case 5:
            return 3000;
            break;
        }
        
    }
};