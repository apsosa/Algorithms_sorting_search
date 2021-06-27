#include <iostream>
#include <vector>
using namespace std;


//The Welfare crook
//Problema: Dadas tres secuencias ordenadas, sabemos que hay al menos un elemento en com ́un entre ellos
// Encontrar los ́ındices donde est ́a al menos uno de estos elementos repetidos
//Complejidad : como maximo tiene que realizar |a|+|b|+|c| iteraciones


void theWelfareCrook(vector<int> &a,vector<int> &b,vector<int> &c,int &i,int &j,int &k){
    i=0 , j=0, k=0;
    while(a[i] != b[j] || b[j] != c[k]){
        if(a[i] < b[j]){
            i++;
        }else if(b[j]<c[k]){
            j++;
        }else{
            k++;
        }
    }
}


int main() {
    vector<int> a={-1505,30,33,50};
    vector<int> b={33,56,80,99,1500};
    vector<int> c={2,6,9,18,33};
    int i;
    int j;
    int k;
    theWelfareCrook(a,b,c,i,j,k);
    std::cout <<a[i]<<b[j]<<c[k]<< std::endl;
    return 0;
}