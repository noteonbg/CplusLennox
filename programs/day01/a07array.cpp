#include <iostream>
using namespace std;

void  poc() {
    // Declare and initialize an integer array
    int numbers[5] = {7, 5, 6, 12, 35};

    // Print array elements
    cout << "The numbers are: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }

    }



class Employee {
private:
    int id;
    string name;

public:
    void getdata() {
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }

    void putdata() {
        cout << id << " " << name << endl;
    }
};

int main() {

    poc();
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee emp[30]; // Array of objects (maximum 30 employees)

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for Employee " << i + 1 << endl;
        emp[i].getdata();
    }

    cout << "Employee Data:" << endl;
    for (int i = 0; i < n; ++i) {
        emp[i].putdata();
    }

    return 0;
}



#if 0

#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;

public:
    // Constructor to initialize id and name
    Employee(int empId, const string& empName) : id(empId), name(empName) {}

    void putdata() {
        cout << id << " " << name << endl;
    }
};

int main() {
    // Create an array of Employee objects with assigned values
    Employee emp[3] = {
        Employee(101, "Alice"),
        Employee(102, "Bob"),
        Employee(103, "Carol")
    };

    cout << "Employee Data:" << endl;
    for (int i = 0; i < 3; ++i) {
        emp[i].putdata();
    }

    return 0;
}



#endif