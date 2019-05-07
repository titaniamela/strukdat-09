/*
Nama        : Shania Salsabila
NPM         : 140810180014
Deskripsi   : excercise-02
Tahun       : 2019
*/
#include<iostream>
using namespace std;

const int maxElemen = 255;

struct StackLinked{
    char data[maxElemen];
    StackLinked* next;
};
typedef StackLinked* pointer;
typedef pointer Stack;

void createStack(Stack& TOP){
    TOP = NULL;
}

void createElemen(pointer& pBaru){
    pBaru = new StackLinked;
    cout << "Masukan huruf: ";
    cin >> pBaru->data;
    pBaru->next = NULL;
}

void push(Stack& TOP, pointer& pBaru){
    if (TOP == NULL){
        TOP = pBaru;
    }
    else{
        pBaru->next = Top;
        Top = pBaru;
    }
}

void pop(Stack& TOP, pointer& pHapus){
    if (TOP == NULL){
        cout << "Tumpukan Kosong!" << endl;
    }
    else if (TOP->next = NULL){
        pHapus = TOP;
        TOP = NULL;
    }
    else{
        pHapus = TOP;
        TOP = TOP->next;
        pHapus->next = NULL;
    }
}

void print(Stack TOP){
    pointer temp;
    while (TOP != NULL){
        temp = TOP;
        cout << temp->data;
        TOP = TOP->next;
    }
}

int main(){
    Stack S;
    int n;
    pointer a;

    createStack(S);

    cout << "Masukan banyak huruf : ";
    cin >> n;
    for (int i = 0; i<n; i++){
        createElemen(a);
        push(S,a);
    }
    cout << "Kata yang di reverse: ";
    print(S);
}
