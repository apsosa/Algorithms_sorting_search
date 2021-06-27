#include <iostream>
#include <vector>
using namespace std;

// Buequeda Binaria
// Invariante del Ciclo: I: 0<=low<high<s.size() yL s[low]<=x<s[high]
// Funcion Variante: fv=high-low-1

bool busquedaBinaria(vector<int> &s,int x){
    //casos triviales
    if(s.size() == 0){
        return false;
    }else if(s.size()== 1){
        return s[0]==x;
    }else if(x<s[0]){
        return false;
    }else if(x>=s[s.size()-1]){
        return s[s.size()-1]==x;
    }else{
        //casos no triviales
        int low = 0;
        int high = s.size()-1;
        while(low +1 < high && s[low] != x){
            int mid = (low + high)/2;
            if(s[mid] <= x){
                low =mid;
            }else{
                high =mid;
            }
        }
        return s[low] == x;
    }
}
int main() {
    vector<int> s ={1,5,6,9,95};
    std::cout << busquedaBinaria(s,5) << std::endl;
    return 0;
}