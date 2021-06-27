#include<iostream>
#include <vector>
using namespace std;

//Algoritmo de Ordenamiento burbujeo (Bubble Sort)

bool estaOrdenado(vector<int> &s){
    if(s.size()==0 || s.size()==1){
        return true;
    }
    bool result;
    int i=0;
    while(i<s.size()-1 && s[i]<= s[i+1]){
        i++;
        result = true;
    }
    return s[i]<=s[i+1];
}

void swap(vector<int>& s, int i, int j){
    int a = s[i];
    s[i]=s[j];
    s[j] = a;
}

void bubbleSort(vector<int> &s){
    for(int i=0;i<s.size()-1;++i){
        for(int j=0;j<s.size()-i-1;++j){
            if(s[j]>s[j+1]){
                swap(s,j,j+1);
            }
        }
    }
}
// Opcion 2 para bulbasur, para cortan antes si la lista ya esta ordenada en menos pasos

void bubbleSort2(vector<int> &s){
    while(!(estaOrdenado(s))){
        for(int j=0;j<s.size()-1;++j){
            if(s[j]>s[j+1]){
                swap(s,j,j+1);
            }
        }
    }
}


void mostrarVector(vector<int> v){
    cout << "[";
    for(int i=0; i< v.size() -1;i++){
        cout << v[i] << ",";
    }
    if(v.size() > 0){
        cout << v[v.size()-1];
    }
    cout <<"]"<< endl;
}


int main() {
    vector<int> s={5,9,-89,-1500,60,60,-1505,30,35,29,-50,12};
    bubbleSort2(s);
    mostrarVector(s);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}