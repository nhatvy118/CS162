#include<fstream>
#include"function.h"

using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    Node *pHead = nullptr;
    fin.open("input.txt");
    fout.open("output.txt");
    inputLL(fin,pHead);
    insert_even_number(pHead);
    displayLL(fout,pHead);
    deleteLL(pHead);
    fin.close();
    fout.close();
    return 0;
}