#include <iostream>
#include <string>
using namespace std;

// Multiplica n por todos os números menores até 1.
// fatorial(4) = 4 * 3 * 2 * 1 = 24
// fatorial(5) = 120
int fatorial(int n)
{
    if (n == 0)
        return 1;
    return n * fatorial(n - 1);
}

// Eleva a base b ao expoente e.
// potencia(2, 3) = 2 * 2 * 2 = 8
// potencia(3, 4) = 81
int potencia(int b, int e)
{
    if (e == 0)
        return 1;
    return b * potencia(b, e - 1);
}

// Conta quantas letras tem a string.
// tamanho("casa") = 4
// tamanho("ola")  = 3
// tamanho("")     = 0
int tamanho(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + tamanho(s + 1);
}

// Soma os n primeiros elementos do vetor.
// v = {3, 9, 2, 7}
// soma_vetor(v, 4) = 3 + 9 + 2 + 7 = 21
// soma_vetor(v, 2) = 3 + 9 = 12
// soma_vetor(v, 0) = 0
int soma_vetor(int *v, int n)
{
    if (n <= 0)
        return 0;
    return v[n - 1] + soma_vetor(v, n - 1);
}

// Conta quantas vezes x aparece nos n primeiros elementos.
// w = {1, 2, 1, 1}
// conta(w, 4, 1) = 3   (o 1 aparece 3 vezes)
// conta(w, 4, 2) = 1
// conta(w, 4, 5) = 0
// conta(w, 2, 1) = 1   (só olhando {1, 2})
int conta(int *v, int n, int x)
{
    if (n == 0)
        return 0;
    if (v[n - 1] == x)
    {
        return 1 + conta(v, n - 1, x);
    }
    return 0 + conta(v, n - 1, x);
}

// Devolve o maior elemento entre os n primeiros.
// v = {3, 9, 2, 7}
// maximo(v, 4) = 9
// maximo(v, 2) = 9   (só olhando {3, 9})
// maximo(v, 1) = 3   (só olhando {3})
int maximo(int* v, int n){
    if (n == 1) return v[n - 1];
    int resto = maximo(v, n - 1);
    if (v[n-1] > resto) return v[n-1];
    return resto;
}

// Devolve o n-ésimo número da sequência 0, 1, 1, 2, 3, 5, 8, 13, 21...
// fib(0) = 0
// fib(1) = 1
// fib(6) = 8
// fib(10) = 55
int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

// Devolve o maior número que divide a e b ao mesmo tempo.
// mdc(12, 18) = 6    (6 divide 12 e 18)
// mdc(7, 13)  = 1
// mdc(10, 0)  = 10
int mdc(int a, int b){
    if (b == 0) return a;
    return mdc( b , a%b);
}

// Mostra na tela o que a função devolveu, o esperado e OK ou ERRADO.
void teste(const string &chamada, int obtido, int esperado)
{
    cout << chamada << " = " << obtido << "  (esperado " << esperado << ")  "
         << (obtido == esperado ? "OK" : "ERRADO") << "\n";
}

int main()
{
    int v[] = {3, 9, 2, 7};
    int w[] = {1, 2, 1, 1};
    char s1[] = "casa", s2[] = "";

    // teste("fatorial(0)",  fatorial(0), 1);
    // teste("fatorial(5)",  fatorial(5), 120);

    // teste("potencia(2,0)",  potencia(2, 0),  1);
    // teste("potencia(2,10)", potencia(2, 10), 1024);
    // teste("potencia(3,4)",  potencia(3, 4),  81);

    // teste("tamanho(casa)", tamanho(s1), 4);
    // teste("tamanho(vazia)", tamanho(s2), 0);

    // teste("soma_vetor(v,4)", soma_vetor(v, 4), 21);
    // teste("soma_vetor(v,0)", soma_vetor(v, 0), 0);

    //teste("conta(w,4,1)", conta(w, 4, 1), 3);
    //teste("conta(w,4,5)", conta(w, 4, 5), 0);
    //teste("conta(w,2,1)", conta(w, 2, 1), 1);

    //teste("maximo(v,4)", maximo(v, 4), 9);
    //teste("maximo(v,1)", maximo(v, 1), 3);

     //teste("fib(0)",  fib(0),  0);
     //teste("fib(1)",  fib(1),  1);
     //teste("fib(6)",  fib(6),  8);
     //teste("fib(10)", fib(10), 55);

    teste("mdc(12,18)", mdc(12, 18), 6);
    teste("mdc(7,13)",  mdc(7, 13),  1);
    teste("mdc(10,0)",  mdc(10, 0),  10);

    return 0;
}