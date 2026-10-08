#include <iostream>

template <typename T>
T soma_array(T* arr, size_t n) {
    T soma = 0;
    for(size_t i = 0; i < n; i++){
        soma += arr[i];
    }
    return soma; 
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {3.14, 2.71, 1.618};

    int sum_int = soma_array(intArray, 5);
    double sum_double = soma_array(doubleArray, 3);

    std::cout << "Soma de intArray (esperado 15): " << sum_int << std::endl;
    std::cout << "Soma de doubleArray (esperado 7.478): " << sum_double << std::endl;

    return 0;
}