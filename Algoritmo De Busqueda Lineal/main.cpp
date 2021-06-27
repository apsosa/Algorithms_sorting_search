#include <iostream>
#include <vector>
using namespace std;


//Algoritmo de Busqueda Lineal
// Invariante: 0<=i<=s.size y  (V j:Z)(0<=j<i - s[j] !=x)
// Funcion Variante fv= s.size -i
// Complejidad: En el peor de los casos "s.size" iteraciones
bool contiene(vector<int> &s,int x){
    int i=0;
    while(i<s.size() && s[i] != x){
        i++;
    }
    return i<s.size();
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}