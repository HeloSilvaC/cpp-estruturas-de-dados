#include <iostream>
#include <string>
using namespace std;

void ordenar(int* v, int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j = i+1; j < n; j++)
            if(v[j] < v[m]) m = j;
        int t = v[i]; v[i] = v[m]; v[m] = t;
    }
}

int kth_element(int* v, int n, int k, int* erro){
    // sua função
}

void teste(const string& nome, int obtido, int esperado, int erro, int erro_esperado){
    bool ok = (obtido == esperado && erro == erro_esperado);
    cout << nome << " = " << obtido << ", erro = " << erro
         << "  (esperado " << esperado << ", erro " << erro_esperado << ")  "
         << (ok ? "OK" : "ERRADO") << "\n";
}

int main(){
    int erro, r;

    int a[] = {7, 10, 4, 3, 20, 15};
    r = kth_element(a, 6, 3, &erro);   teste("k=3", r, 7, erro, 0);

    int b[] = {7, 10, 4, 3, 20, 15};
    r = kth_element(b, 6, 1, &erro);   teste("k=1", r, 3, erro, 0);

    int c[] = {7, 10, 4, 3, 20, 15};
    r = kth_element(c, 6, 6, &erro);   teste("k=6", r, 20, erro, 0);

    int d[] = {7, 10, 4, 3, 20, 15};
    r = kth_element(d, 6, 7, &erro);   teste("k=7 (nao existe)", r, 0, erro, 1);

    int e[] = {7, 10, 4, 3, 20, 15};
    r = kth_element(e, 6, 0, &erro);   teste("k=0 (invalido)", r, 0, erro, 1);

    int f[] = {2, 2, 1, 1};
    r = kth_element(f, 4, 1, &erro);   teste("repetidos k=1", r, 1, erro, 0);

    int g[] = {2, 2, 1, 1};
    r = kth_element(g, 4, 2, &erro);   teste("repetidos k=2", r, 2, erro, 0);

    int h[] = {2, 2, 1, 1};
    r = kth_element(h, 4, 3, &erro);   teste("repetidos k=3 (nao existe)", r, 0, erro, 1);

    int i[] = {5, 5, 5};
    r = kth_element(i, 3, 2, &erro);   teste("todos iguais k=2", r, 0, erro, 1);

    return 0;
}