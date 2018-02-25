#include <iostream>
#include <string>
using namespace std;

class Pharmacy : public Pharmacy{
  
  private:
   int Select
  
  public:
  
    cout << "Plese Spectify what medications were percribed\n";
    cout << "1. Acetaminophen.\n";
    cout << "2. Benzodiazepines.\n";
    cout << "3. Zaleplon.\n";
    cout << "4. Diovan.\n";
    cout << "5. ibuprofen.\n";
    cin >> Select;
    
    void surgeryType( int med){

     
        switch (med)
        {
        case 1:
            cost += 50;
            break;
        case 2:
            cost += 40;
            break;
        case 3:
            cost += 30;
            break;
        case 4:
            cost += 20;
            break;
        case 5:
            cost += 10;
            break;
        }
};