#include <iostream>
#include <string>

template <typename T>
void troca(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    std::cout << "Inteiros antes: x=" << x << " y=" << y << "\n";
    troca(x, y);
    std::cout << "Inteiros trocados: x=" << x << " y=" << y << "\n";

    std::cout << "\n";
    std::cout << "------------------------------------\n";
    std::cout << "\n";

    std::string palavra1 = "C++";
    std::string palavra2 = "Templates";
    std::cout << "Textos antes: p1=" << palavra1 << " p2=" << palavra2 << "\n";
    troca(palavra1, palavra2);
    std::cout << "Textos trocados: p1=" << palavra1 << " p2=" << palavra2 << "\n";

    return 0;
}