#include <iostream>
using namespace std;

class hospital {
protected:
    int id[10];
    string name[10];
    int age[10];
    int patientCount;
public:
    hospital() {
        patientCount = 0;
    }
};

class PatientAdd : public hospital {
public:
    void addPatient() {
        if (patientCount >= 10) {
            cout << "Cannot add more patients!! Limit reached.\n";
            return;
        }

        cout << "\nEnter Patient ID: ";
        cin >> id[patientCount];
        cout << "Enter Name: ";
        cin >> name[patientCount];
        cout << "Enter Age: ";
        cin >> age[patientCount];

        cout << "Patient added successfully!\n";
        patientCount++;
    }
};

class delshow : public PatientAdd {
public:
    void deletePatient() {d
        if (patientCount == 0) {
            cout << "No patients to delete.\n";
            return;
        }

        int delID;
        cout << "Enter Patient ID to delete: ";
        cin >> delID;
        

        for (int i = 0; i < patientCount; i++) {
            if (id[i] == delID) {
                for (int j = i; j < patientCount - 1; j++) {
                    id[j] = id[j + 1];
                    name[j] = name[j + 1];
                    age[j] = age[j + 1];
                }
                patientCount--;
                cout << "Patient deleted successfully.\n";
                return;
            } 
        }

        cout << "Patient ID not found.\n";
    }

    void showPatients() {
        if (patientCount == 0) {
            cout << "No patient data available.\n";
            return;
        }

        cout << "\nAll Patients\n";
        for (int i = 0; i < patientCount; i++) {
            cout << "ID: " << id[i]
                 << " | Name: " << name[i]
                 << " | Age: " << age[i] << endl;
        }
    }
};

int main() {
    delshow hm;
    int choice;

    do {
        cout << "\nHospital Menu\n";
        cout << "1. Add Patient\n";
        cout << "2. View Patient Details\n";
        cout << "3. Delete Patient\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: hm.addPatient(); break;
            case 2: hm.showPatients(); break;
            case 3: hm.deletePatient(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 4);
}
Ss
