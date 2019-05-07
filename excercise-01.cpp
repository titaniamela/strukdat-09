/*
Nama        : Shania Salsabila
NPM         : 140810180014
Deskripsi   : excercise-01
Tahun       : 2019
*/
#include <iostream>
using namespace std;

const int maxElemen = 255;
struct Stack{
    char data[maxElemen];
    int TOP;
};
Stack S;

void createStack(Stack& S){
    S.TOP = -1;
}

void push(Stack& S, char elemenBaru){
    if (S.TOP == maxElemen - 1){
        cout << "Tumpukan sudah penuh!" << endl;
    }
    else {
        S.TOP++;
        S.data[S.TOP] = elemenBaru;
    }
}

void pop(Stack& S, char& elemenHls){
    if (S.TOP < 0){
        cout << "Tumpukan kosong!" << endl;
    }
    else {
        elemenHls = S.data[S.TOP];
        S.TOP--;
    }
}

void print(Stack S){
    char temp;
    while(S.TOP != -1){
        pop(S,temp);
        cout << temp;
    }
}

int main(){
    Stack S;
    int n;
    char data;

    createStack(S);

    cout << "Masukan banyak huruf : "; cin >> n;
    for (int i = 0; i<n; i++){
        cout << "Masukan huruf: "; cin >> data;
        push(S, data);
    }

    cout << "Kata yang di reverse: ";
    print(S);
}
