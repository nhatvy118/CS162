#include<fstream>
#include"function.h"
#include<iostream>

using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    Node *pHead = nullptr;
    fin.open("input.txt");
    fout.open("output.txt");
    inputLL(fin,pHead);
    int x;
    cout <<"input x ";
    cin >> x;
    removeAllX(pHead,x);
    displayLL(fout,pHead);
    deleteLL(pHead);
    fin.close();
    fout.close();
    return 0;
}