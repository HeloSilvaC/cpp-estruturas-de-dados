#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int palindromo(char* s, int ini, int fim){
    if (ini >= fim) return 1;
    if (s[ini] != s[fim]) return 0;
    return palindromo (s, ini + 1, fim - 1);
}

void teste(const string& palavra, int obtido, int esperado){
    cout << "palindromo(\"" << palavra << "\") = " << obtido
         << "  (esperado " << esperado << ")  "
         << (obtido == esperado ? "OK" : "ERRADO") << "\n";
}

int main(){
    char a[] = "ana", b[] = "arara", c[] = "casa", d[] = "a", e[] = "ab", f[] = "abca", g[] = "abba";

    teste("ana",   palindromo(a, 0, strlen(a)-1), 1);
    teste("arara", palindromo(b, 0, strlen(b)-1), 1);
    teste("casa",  palindromo(c, 0, strlen(c)-1), 0);
    teste("a",     palindromo(d, 0, strlen(d)-1), 1);
    teste("ab",    palindromo(e, 0, strlen(e)-1), 0);
    teste("abca",  palindromo(f, 0, strlen(f)-1), 0);
    teste("abba",  palindromo(g, 0, strlen(g)-1), 1);

    return 0;
}