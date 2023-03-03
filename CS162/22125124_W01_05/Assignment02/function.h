#pragma once
#include<fstream>
using namespace std;

struct Student{
 int id;
 char fullname[51];
 double gpa;
};
void Input_file(Student* ST, ifstream& fin, int &i);
void Output_top_student(Student* ST, ofstream& fout, int &i);

