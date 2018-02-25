#include <iostream>

using namespace std;

class Surgery : public PatientAccount{
  private:
   int choice
  
   
  public:
  
    cout << "Enter the number that corresponds to the surgery you received\n";
    cout << "1. Lumbar spinal fusion surgery.\n";
    cout << "2. laser eye surgery.\n";
    cout << "3. Joint Replacement.\n";
    cout << "4. Broken Bone Repair.\n";
    cout << "5. Cataract Removal.\n";
    cin >> choice;
    
    void surgeryType( int srgy){

     
        switch (srgy)
        {
        case 1:
            charges += 34500;
            break;
        case 2:
            charges += 4000;
            break;
        case 3:
            charges += 16000;
            break;
        case 4:
            charges += 8000;
            break;
        case 5:
            charges += 3000;
            break;
        }
        
        
  
  
};