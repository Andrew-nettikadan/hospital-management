#include <iostream>
using namespace std;

class HospitalManagement {
private:
    int id[100];
    string name[100];
    int age[100];
    int patientCount; 

public:

    HospitalManagement() {
        patientCount = 0;
    }

    void addPatient(int pid, string pname, int page) {
        id[patientCount] = pid;
        name[patientCount] = pname;
        age[patientCount] = page;
        patientCount++;
    }

    void showPatients() {
        if (patientCount == 0) {
            cout << "No patients.\n";
            return;
        }
        for (int i = 0; i < patientCount; i++) {
            cout << "ID: " << id[i]
                 << ", Name: " << name[i]
                 << ", Age: " << age[i] << endl;
        }
    }


    HospitalManagement operator+(HospitalManagement &other) {
        HospitalManagement t;
        for (int i = 0; i < patientCount; i++) {
            t.addPatient(id[i], name[i], age[i]);
        }
        
        return t;
    }
};

int main() {
    HospitalManagement hm1, hm2;

    hm1.addPatient(1, "Alice", 25);
    hm1.addPatient(2, "Bob", 30);

    hm2.addPatient(3, "Charlie", 28);
    hm2.addPatient(4, "Diana", 22);

    cout << "\nHospital 1:\n";
    hm1.showPatients();

    cout << "\nHospital 2:\n";
    hm2.showPatients();

    HospitalManagement merged = hm1 + hm2;
    cout << "\nMerged Hospital:\n";
    merged.showPatients();

    system("pause");
    return 0;
}

