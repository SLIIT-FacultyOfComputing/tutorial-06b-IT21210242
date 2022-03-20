#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char sname[]) {
  studentID = id;
  strcpy(name, sname);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID: " << studentID << endl << "Student Name: " << name << endl;
}
