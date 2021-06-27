#include <iostream>
#include <string>
using namespace std;
//Algoritmo sobre String ("Busqueda Lineal")
//Complejidad: El ciclo principal realidad |t|-|p| iteraciones. Sin embargo, la comparacion
//de los substrings de t puede ser costosa si p es grande.
// 1-La comparacion de matches(t,ip) requiere realizar |p| comparaciones entre chars
// 2-Por cada iteracion del ciclo "for" , se realizan |p| de estas comparaciones
// 3-En el peor caso realizamos (|t|-|p|)*|p| iteraciones


bool matches(string &s,int i,string &r){
    int k;
    for(k=0;k<r.size() && s[i+k]==r[k];k++){
        //skip
    }
    return k == r.size();
}

bool contiene(string &t,string &p){
    int i;
    for( i=0;i+p.size() <t.size() && matches(t,i,p);i++){
        //skip
    }
    return i +p.size() <t.size() && matches(t,i,p);
}
int main() {
    string s("Patricio");
    string p("atri");
    contiene(s,p);

    cout << contiene(s,p);
    return 0;
}