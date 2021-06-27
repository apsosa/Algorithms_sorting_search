#include <iostream>
#include <vector>
using namespace std;

//Algoritmo de Ordenamiento por insercion (Insertion Sort)
//Invariante del ciclo externo: Iex: mismos(s,S0) "y" odernado(s[0,i)) "y" (0<=i<=|s|)
//Invariante del ciclo interno: Iint : 0<=j<=i y mismos(s[o,i+1),S0[0,i+1)) y s[i+1,|s|)=S0[j,i+1) y ordenado(s[0,j))
// y ordenado(s[j,i+1)) y (V k:Z)(j<k<=i -L s[j] <s[k])
//Funcion variante del ciclo externo: fv=|s|-i
//Funcion variante del ciclo intern: fv=j
//Complejidad: sumatoria desde i=0 hasta |s| de (i+1)=(|s|*(|s|+1))/2 +|s|<=|s|]^2
//Es un algoritmo cuadratico(itera una cantidad cuadratica de veces)


void swap(int& a , int& b ) {
    int a0=a;
    int b0=b;
    b = a0;
    a = b0;
}

void insertionSort(vector<int> &s){
    for(int i=0;i<s.size();i++){
        for(int j=i;j>0 && s[j]<s[j-1];j--){
            swap(s[j],s[j-1]);
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
    //CASOS A PROBAR
    vector<int> vacio = {};
    vector<int> unitario = {0};
    vector<int> dosElem= {3,44};
    vector<int> variosPosYnegativos = {5,9,-89,-1500,60,60,56,30,35,29,-50,12};
    vector<int> positvos = {4,567,7778,4356,666,8,9,2,5};


    std::cout << "Vector sin Ordenar" << std::endl;
    mostrarVector(s);
    insertionSort(s);
    std::cout << "Vector ordenado utilizando Insertion Sort" << std::endl;
    mostrarVector(s);

    
    return 0;
}