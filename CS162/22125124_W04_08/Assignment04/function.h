#pragma once
#include<fstream>

using namespace std;
struct Node{
    int data;
    Node *pNext;
};
void inputLL(ifstream& fin, Node*& pHead);
void displayLL(ofstream& fout, Node* pHead);
void insert_even_number(Node*& pHead);
void insertAtBeginning(Node* & pHead, int x);
void deleteLL(Node*& pHead);