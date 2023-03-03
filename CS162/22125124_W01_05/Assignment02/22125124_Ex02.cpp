//Huynh Phan Nhat Vy
//22125124

#include "function.h"
#include<fstream>

using namespace std;

int main(){
    Student ST[100];
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("honors.txt");
    int i = 0;
    Input_file(ST,fin,i);  
    Output_top_student(ST,fout,i);  
    fin.close();
    fout.close();
}