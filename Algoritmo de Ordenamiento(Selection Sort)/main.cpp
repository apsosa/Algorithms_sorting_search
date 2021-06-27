#include <iostream>
#include <vector>
using namespace std;

// Algoritmo de ordenamiento por seleccion (Selection Sort)
// Invariante Del Ciclo: I: mismos(s,S0) y odenado(s[0,i)) y (0<=i<=|s| yL (V j,k;Z)(0<=j<i y i<=k<|s|)-L s[j]<=s[k])
// Funcion Variante : fv= |s|-i
// Complejidad: sumatoria desde i=0 hasta |s|-1 de (|s| -i)=|s|*|s|-[((|s|-1)*|s|)/2]<=|s|^2
// Decimos que el algoritmo de ordenamiento por seleccion es un algoritmo cuadratico
int minimo(vector<int> &s, int d, int h){
    int result = d;
    for(int i=d+1;i<h;i++){
        if(s[i]<s[result]){
            result = i;
        }
    }
    return result;
}

void swap(int& a , int& b ) {
    int a0=a;
    int b0=b;
    b = a0;
    a = b0;
}

void selectionSort(vector<int> &s){
    for(int i=0; i < s.size()-1; i++){
        int pos=minimo(s,i,s.size());
        swap(s[i],s[pos]);
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
    vector<int> s={5,9,-89,-1500,60,60,56,30,35,29,-50,12};
    selectionSort(s);
    mostrarVector(s);


    std::cout << "Hello, World!" << std::endl;
    return 0;
}