//Huynh Phan Nhat Vy
//22125124

#include "function.h"
#include<fstream>

using namespace std;

int main(){
    Date D[300];
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");
    int i = 0;
    LoadDate(D,fin,i);
    Sort(D,i);
    OutPutDate(D,fout,i);
    fin.close();
    fout.close();
}