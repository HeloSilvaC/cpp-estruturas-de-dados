#include <iostream>
using namespace std;

void troca_errada(int a, int b){
    int t = a; 
    a = b; 
    b = t;
}

void troca(int& a, int& b){
    int t = a; 
    a = b; 
    b = t;
}

void dobra(int& n){
    n = 2*n;
}

int soma(const int& a, const int& b){
    return a + b;
}

int main(){
    int x = 1, y = 2;

    troca_errada(x, y);
    cout << x << " " << y << "\n";   // preveja antes de rodar

    troca(x, y);
    cout << x << " " << y << "\n";   // preveja antes de rodar

    int n = 5;
    dobra(n);
    cout << n << "\n";               // deve imprimir 10

    cout << soma(3, 4) << "\n";      // deve imprimir 7
    cout << soma(x, y) << "\n";      // deve imprimir 3

    return 0;
}