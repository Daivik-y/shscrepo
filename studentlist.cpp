#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>
using namespace std;

struct Student {
    char firstname[50];
    char lastname[50];
    int studentid;
    double gpa;
};

void addStudent(vector<Student*>& list){
  Student* s = new Student; //creates space for one student struct, s is the address

    cout << "Enter first name: ";
    cin >> setw(50) >> s->firstname;   // setw prevents the array from exceeding 50 char
    cout << "Enter last name: ";
    cin >> setw(50) >> s->lastname;
    cout << "Enter student id: ";
    cin >> s->studentid;
    cout << "Enter GPA: ";
    cin >> s->gpa;

    list.push_back(s); //appends to the vector
}
   void printStudent(vector<Student*>& list){
    for(Student* person : list) {
    cout << person->firstname << ", " << person->studentid << ", " << person->gpa << "\n";
     }
    }


int main() {
    vector<Student*> list1;
    char command[20];
    char command1[20];
    
    while (true) {
        cout << "Enter command : ";
        cin >> command;

        if (strcmp(command, "ADD") == 0) {
            addStudent(list1);
	    // addStudent(list1);
	}

	cout << "Enter command: ";
	cin >> command1;
	
	if(strcmp(command1, "PRINT") == 0) {
	  printStudent(list1);
	}

	

	

	//	for(Student* person :  list1) {
	//	  cout << person->firstname << ", " << person->studentid << ", " << person->gpa << "\n";
             
	break;
    }
    
	   
    return 0;
}
