#include <iostream>
#include <vector>
using namespace std;
//Algoritmo sobre apareo de secuencias ya ordenadas (Merge)


vector<int> merge(vector<int> &a,vector<int> &b){
    vector<int> c(a.size()+b.size());
    int i=0; // Para recorrer a
    int j=0; //Para recorrer b
    int k=0; //Para recorrer c
    while(k<c.size()){
        if(j>b.size() || (i<a.size() && a[i]<b[j] )){
            c[k++]=a[i++];
        }else{
            c[k++] = b[j++];
        }
    }
    return c;
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
    vector<int> s={-1505,30,35,50};
    vector<int> q={33,56,80,99,1500};
    vector<int> c=merge(s,q);
    mostrarVector(c);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}