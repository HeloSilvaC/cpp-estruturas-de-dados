#include <iostream>
#include <vector>

std::vector<int> coletar_pares(const std::vector<int>& v) {
    std::vector<int> saida;
    // Escreva sua lógica aqui (percorra 'v' e adicione os pares em 'saida' com push_back)
    return saida;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> pares = coletar_pares(v);

    std::cout << "Numeros pares encontrados: ";
    for(auto i : pares) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}