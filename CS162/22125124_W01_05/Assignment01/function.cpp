#include "function.h"
#include<fstream>
using namespace std;

void LoadDate(Date* D, ifstream& fin,int& i){
    bool flag = true;
    while (flag){
        fin >> D[i].y >> D[i].m >> D[i].d;
        if (D[i].y == -1){
            i--;
            break;
        }
        ++i;
    }
}
void Swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
    return;
}
void cmp(Date& d1, Date& d2){
    if (d1.y > d2.y){
        Swap(d1.y, d2.y);
        Swap(d1.m, d2.m);
        Swap(d1.d, d2.d);
        return;
    }
    if (d1.y < d2.y)
        return;
    if (d1.m > d2.m){
        Swap(d1.y, d2.y);
        Swap(d1.m, d2.m);
        Swap(d1.d, d2.d);
        return;
    }
    if (d1.m < d2.m) 
        return;
    if (d1.d > d2.d){
        Swap(d1.y, d2.y);
        Swap(d1.m, d2.m);
        Swap(d1.d, d2.d);
        return;
    }
    if (d1.d < d2.d) 
        return;

}
void Sort (Date* D, int& n){
    int i, j;
    for (i = 0; i < n ; i++)
        for (j = 0; j < n - i; j++)
            cmp(D[j],D[j+1]);
    return;
}
void OutPutDate(Date* D, ofstream& fout, int& i){
    for (int j = 0; j <= i; j++){
        fout << D[j].y <<" "<< D[j].m <<" "<< D[j].d << endl;
    }
}