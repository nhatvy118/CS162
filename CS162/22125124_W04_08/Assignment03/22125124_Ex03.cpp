#include<fstream>
#include"function.h"


using namespace std;

const int N = 1e7 + 5;
int main(){
    ifstream fin;
    ofstream fout;
    Node *pHead = nullptr;
    fin.open("input.txt");
    fout.open("output.txt");
    inputLL(fin,pHead);
    reverse(pHead);
    displayLL(fout,pHead);
    deleteLL(pHead);
    fin.close();
    fout.close();
    return 0;
}