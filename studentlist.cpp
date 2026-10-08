#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string firstname;
    string lastname;
    int studentid;
    double gpa;
};

int main() {
    vector<Student*> list1;

    cout << "Enter firstname: ";
    //    cin >>

    list1.push_back(new Student{"Jeff", "Bezos", 12345, 3.1415});

    for (Student* person : list1) {
        cout << "person name " << person->firstname << endl;
    }

    return 0;
}
