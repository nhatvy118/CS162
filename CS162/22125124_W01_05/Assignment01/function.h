#pragma once
#include<fstream>
using namespace std;

struct Date{
    int y,m,d;
};
void LoadDate(Date* D, ifstream& fout,int& i);
void OutPutDate(Date* D, ofstream& fout, int& i);
void Sort(Date* D,int& i);
void Swap(int& a, int& b);
void cmp(Date& d1, Date& d2);
