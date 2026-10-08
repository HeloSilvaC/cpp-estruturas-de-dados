#include <iostream>
#include <string>

template <typename T>
void troca(T& a, T& b) {
    T t = a;
    a = b;
    b = t;
}

int main() {
    int x = 10, y = 20;
    std::cout << "Antes da troca (int): x = " << x << ", y = " << y << "\n";
    troca(x, y);
    std::cout << "Depois da troca (int): x = " << x << ", y = " << y << "\n";

    std::cout << "------------------------------------\n";

    std::string palavra1 = "C++";
    std::string palavra2 = "Templates";
    std::cout << "Antes da troca (string): p1 = " << palavra1 << ", p2 = " << palavra2 << "\n";
    troca(palavra1, palavra2);
    std::cout << "Depois da troca (string): p1 = " << palavra1 << ", p2 = " << palavra2 << "\n";

    return 0;
}