#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void imprime(const vector<int>& v){
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";
}

void zera_errado(vector<int>& v){        // recebe CÓPIA
    for(int i = 0; i < v.size(); i++)
        v[i] = 0;
}

int maior(const vector<int>& v){
    int maior = 0;
    for (int i = 0; i < v.size(); i++)
    {
        v[i] > 0 ? maior = v[i] : maior = maior;
    }
    return maior;
}

int main(){

    vector<int> v;                      // vazio
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);

    cout << v.size() << "\n";
    imprime(v);

    // 1) for com índice (o que você já conhece)
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    // 2) for-each (percorre todos, sem índice)
    for(int x : v)
        cout << x << " ";
    cout << "\n";

    // 3) com iteradores (a forma "de verdade" da STL)
    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << "\n";

    // cópia e ordenação
    vector<int> c = v;                  // c é uma CÓPIA independente
    sort(c.begin(), c.end());
    imprime(v);                         // preveja
    imprime(c);                         // preveja

    zera_errado(v);
    imprime(v);                         // preveja

    return 0;
}

int main(){
    vector<int> v = {30, 10, 20};       // outra forma de criar o vetor já com valores

    cout << maior(v) << "\n";           // tarefa 2

    vector<int> d = dobrados(v);        // tarefa 3
    imprime(v);                         // o original não pode mudar
    imprime(d);

    zera_errado(v);                     // tarefa 1 (depois de consertar a assinatura)
    imprime(v);

    return 0;
}