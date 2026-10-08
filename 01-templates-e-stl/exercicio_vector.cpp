#include <iostream>
#include <vector>

// O protótipo exigido pelo seu material
std::vector<int> coletar_pares(const std::vector<int>& v) {
    // 1. Crie um novo vector<int> vazio para armazenar o resultado.
    vector<int> 
    
    // 2. Faça um laço de repetição (for) para percorrer todos os elementos de 'v'.
    // Dica: você pode usar a função v.size() para saber o tamanho da lista.
    
    // 3. Verifique se o elemento atual é par (elemento % 2 == 0).
    // Se for par, insira-o no final do novo vector (pesquise sobre o método push_back).
    
    // 4. Dê o return no novo vector.
}

int main() {
    // Criando um vector inicial com números variados
    std::vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Chamando a sua função e guardando o retorno
    std::vector<int> pares = coletar_pares(numeros);
    
    std::cout << "Numeros pares encontrados:\n";
    // Imprimindo o resultado
    for(int i = 0; i < pares.size(); i++) {
        std::cout << pares[i] << " ";
    }
    std::cout << "\n";

    return 0;
}