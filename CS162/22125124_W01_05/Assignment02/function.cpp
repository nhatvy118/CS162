#include "function.h"
#include<cstring>
#include<fstream>
using namespace std;

void Input_file(Student* ST, ifstream& fin,int &i){
    while(!fin.eof()){
    fin >> ST[i].id;
    fin.ignore();
    fin.get(ST[i].fullname,51,'\n');
    fin.ignore();
    fin >> ST[i].gpa;
    fin.ignore();
    ++i;
    }
}
void Output_top_student(Student* ST, ofstream& fout,int &i){
    double Max = 0.0;
    for (int j = 0; j < i; j++){
        if (ST[j].gpa > Max){
            Max = ST[j].gpa;
        }
    }
    for (int j = 0; j < i; j++){
        if (ST[j].gpa == Max){
            fout << ST[j].id << endl;
            fout << ST[j].fullname << endl;
            fout << ST[j].gpa << endl;
            fout << endl;
        }
    }
    
}
