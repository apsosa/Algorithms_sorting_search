#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Algoritmo de Knuth,Morris y Pratt
//Invariante dificil
//Complejidad: el algoritmo kmp realiza en el peor caso |t|+|p| iteraciones

vector<int> precalcular_pi(string &p){
    vector<int> pi(p.size(),0);
    int i=0,j=1;
    while(j<p.size()){
        if(p[i]==p[j]){
            pi[j]=i+1;
            ++j;
            ++i;
        }else if(i>0){
            i=pi[i-1];
        }else{
            pi[j]=0;
        }
    }
}

bool contiene_kmp(string &t,string &p){
    int l=0,r=0;
    vector<int> pi = precalcular_pi(p);
    while(r<t.size() && r-l<p.size()){
        if(t[r] == p[r-l]){
            r++;
        }else if(l == r){
            r++;
            l++;
        }else {
            l = r - pi[r-l-1];
        }
    }
    return r-l == p.size();

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}