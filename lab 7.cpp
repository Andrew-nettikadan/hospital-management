#include <iostream>
using namespace std;

class HospitalManagement {
private:
    int id[10];
    string name[10];
    int age[10];
    int patientCount = 0;

public:
    void addPatient() {
        if (patientCount >= 10) {
            cout << "Cannot add more patients";
            return;
        }

        cout << "\nEnter Patient ID: ";
        cin >> id[patientCount];
        cout << "Enter Name: ";
        cin >> name[patientCount];
        cout << "Enter Age: ";
        cin >> age[patientCount];

        cout << "Patient added successfully";
        patientCount++;
    }

    void showPatients() {
        if (patientCount == 0) {
            cout << "No patient data available.\n";
            return;
        }
        cout << "\n--- All Patients ---\n";
        for (int i = 0; i < patientCount; i++) {
            cout << "ID: " << id[i]
                 << " | Name: " << name[i]
                 << " | Age: " << age[i] << endl;
        }
    }

  
    void operator++() {
        if (patientCount >= 10) {
            cout << "Cannot add more patients";
            return;
        }
        id[patientCount] = 100 + patientCount;
        name[patientCount] = "D";
        age[patientCount] = 30;
        patientCount++;
        cout << "patient added ";
    }

 
    void operator--() {
        if (patientCount == 0) {
            cout << "No patients to remove\n";
            return;
        }
        patientCount--;
        cout << "Last patient removed";
    }


};

int main() {
    HospitalManagement hm;

    int choice;
    do {
        cout << "\n--- Hospital Menu ---\n";
        cout << "1. Add Patient\n";
        cout << "2. Show Patients\n";
        cout << "3. Use ++ \n";
        cout << "5. Use -- \n";
 		cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: hm.addPatient(); break;
            case 2: hm.showPatients(); break;
            case 3: ++hm; break; 
            case 4: --hm; break; 
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}

