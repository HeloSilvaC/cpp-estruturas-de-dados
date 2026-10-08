#include <iostream>
using namespace std;

void contagem(int n){ // contagem(3) imprime 3, 2, 1, fogo!
    if(n == 0){
        cout << "fogo!\n";
         return;
    }
    cout << n << "\n";
    contagem(n-1);
}
 
void crescente(int n){ // crescente(3) imprime 1, 2, 3
    if (n == 0)
    {
        return;
    }
    
    crescente(n - 1);
    cout << n << "\n";
   
}

int soma_digitos(int n){ // soma_digitos(123) devolve 6

}


int main(){
    //cout << "--- contagem(3) ---\n";
    //contagem(3);

    cout << "--- crescente(3) ---\n";
    crescente(3);

    //cout << "--- soma_digitos ---\n";
    //cout << soma_digitos(123)  << "\n";
    //cout << soma_digitos(9)    << "\n";
    //cout << soma_digitos(1005) << "\n";
    //cout << soma_digitos(999)  << "\n";

    return 0;
}