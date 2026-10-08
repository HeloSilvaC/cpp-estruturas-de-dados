#include <iostream>

template <typename T>
T soma_array(T* array, int tamanho) {
    T soma = 0;
    
    for(int i = 0; i < tamanho; i++){
        soma+= array[i];
    }

    return soma;    
}

int main() {
    int numeros_inteiros[] = {10, 20, 30, 40, 50};
    int tamanho_inteiros = 5;
    
    std::cout << "Soma dos inteiros (esperado 150): " 
              << soma_array(numeros_inteiros, tamanho_inteiros) << "\n";

    std::cout << "------------------------------------\n";

    double numeros_decimais[] = {1.5, 2.5, 3.5};
    int tamanho_decimais = 3;
    
    std::cout << "Soma dos decimais (esperado 7.5): " 
              << soma_array(numeros_decimais, tamanho_decimais) << "\n";

    return 0;
}