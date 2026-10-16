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
     for(Student* person : list ) {
    cout << person->firstname << ", " << person->studentid << ", " << person->gpa << "\n";
     }
    }


void deleteStudent(vector<Student*>& list) {
    double id;
    cout << "Enter student id to delete: ";
    cin >> id;

    for (int i = 0; i < list.size(); i++) {
        if (list[i]->studentid == id) {
            delete list[i];    

      }
    }
}

int main() {
    vector<Student*> list1;
    char command[20];
    bool running = true;
    
    
    while (running) {
  
        cout << "Enter command: ";
        cin >> command;
      

        if (strcmp(command, "ADD") == 0) {
            addStudent(list1);
	    
	}
	else if(strcmp(command, "PRINT") == 0) {
	  printStudent(list1);
	}

	else if (strcmp(command, "QUIT") == 0) {
            running = false;
        }
	else {
            cout << "Unknown command." << endl;
        }
             

    }
    
	   
    return 0;
}
