// rastreio_recursao.cpp
//
// As três funções da prova (palindromo, soma_digitos, quociente), com
// impressões que mostram TUDO que acontece durante a recursão.
//
// A lógica de cada função é a mesma de antes. Tudo que é cout é só para
// você enxergar o processo; o código "de verdade" de cada função está
// marcado com  >>> CÓDIGO REAL <<<
//
// Compile e rode no Ubuntu:
//     g++ -o ../output/rastreio rastreio_recursao.cpp && ../output/rastreio

#include <iostream>
#include <cstring>
using namespace std;

// ---------------------------------------------------------------
// Ferramentas de impressão (não fazem parte da recursão)
// ---------------------------------------------------------------
int nivel = 0;   // quantos quadros estão abertos agora (profundidade)

void recuo() {
    // quanto mais fundo o quadro, mais para a direita ele escreve
    for (int i = 0; i < nivel; i++) cout << "|   ";
}

// ===============================================================
// 1) PALINDROMO
// ===============================================================
// Mostra a string e coloca ^ embaixo das posições ini e fim.
void mostra_texto(char* s, int ini, int fim) {
    recuo();
    cout << "    texto: ";
    for (int k = 0; s[k] != '\0'; k++) cout << s[k] << ' ';
    cout << "\n";
    recuo();
    cout << "           ";
    for (int k = 0; s[k] != '\0'; k++) {
        if (k == ini || k == fim) cout << "^ ";
        else cout << "  ";
    }
    cout << "  (^ = ini e fim)\n";
}

int palindromo(char* s, int ini, int fim) {
    recuo();
    cout << "ENTROU palindromo(ini=" << ini << ", fim=" << fim << ")  <- esta cópia tem o SEU ini e o SEU fim\n";
    mostra_texto(s, ini, fim);

    int resultado;

    // >>> CÓDIGO REAL <<<  if (ini >= fim) return 1;
    if (ini >= fim) {
        recuo();
        cout << "    ini >= fim ?  " << ini << " >= " << fim << "  SIM -> caso base: devolve 1\n";
        resultado = 1;
    } else {
        recuo();
        cout << "    ini >= fim ?  " << ini << " >= " << fim << "  NÃO -> continua\n";

        // >>> CÓDIGO REAL <<<  if (s[ini] != s[fim]) return 0;
        recuo();
        cout << "    s[" << ini << "]='" << s[ini] << "'  contra  s[" << fim << "]='" << s[fim] << "'\n";
        if (s[ini] != s[fim]) {
            recuo();
            cout << "    letras DIFERENTES -> devolve 0 (nem olha o miolo)\n";
            resultado = 0;
        } else {
            recuo();
            cout << "    letras IGUAIS -> falta ver o miolo. Chamo palindromo(ini=" << ini + 1
                 << ", fim=" << fim - 1 << ")\n";
            recuo();
            cout << "    (esta cópia FICA PARADA nesta linha, esperando a de baixo responder)\n";

            // >>> CÓDIGO REAL <<<  return palindromo(s, ini + 1, fim - 1);
            nivel++;
            resultado = palindromo(s, ini + 1, fim - 1);
            nivel--;

            recuo();
            cout << "VOLTOU para palindromo(ini=" << ini << ", fim=" << fim << "): a de baixo devolveu "
                 << resultado << ". Aqui não há conta: só repassa " << resultado << " para cima.\n";
        }
    }

    recuo();
    cout << "SAIU   palindromo(ini=" << ini << ", fim=" << fim << ") devolvendo " << resultado << "\n";
    return resultado;
}

// ===============================================================
// 2) SOMA_DIGITOS
// ===============================================================
int soma_digitos(int n) {
    recuo();
    cout << "ENTROU soma_digitos(n=" << n << ")  <- esta cópia tem o SEU n\n";

    int resultado;

    // >>> CÓDIGO REAL <<<  if (n == 0) return 0;
    if (n == 0) {
        recuo();
        cout << "    n == 0 ?  SIM -> caso base: não sobrou dígito, devolve 0\n";
        resultado = 0;
    } else {
        int digito = n % 10;   // último dígito
        int resto = n / 10;    // número sem o último dígito
        recuo();
        cout << "    n == 0 ?  NÃO -> continua\n";
        recuo();
        cout << "    último dígito  = n % 10 = " << n << " % 10 = " << digito << "\n";
        recuo();
        cout << "    resto do número = n / 10 = " << n << " / 10 = " << resto << "\n";
        recuo();
        cout << "    FICA ESPERANDO: " << digito << " + soma_digitos(" << resto << ")   <- o ??? ainda não é conhecido\n";

        // >>> CÓDIGO REAL <<<  return n % 10 + soma_digitos(n / 10);
        nivel++;
        int debaixo = soma_digitos(resto);
        nivel--;

        resultado = digito + debaixo;
        recuo();
        cout << "VOLTOU para soma_digitos(n=" << n << "): a de baixo devolveu " << debaixo
             << ". Agora faço a conta: " << digito << " + " << debaixo << " = " << resultado << "\n";
    }

    recuo();
    cout << "SAIU   soma_digitos(n=" << n << ") devolvendo " << resultado << "\n";
    return resultado;
}

// ===============================================================
// 3) QUOCIENTE
// ===============================================================
int quociente(int m, int n) {
    recuo();
    cout << "ENTROU quociente(m=" << m << ", n=" << n << ")  <- esta cópia tem o SEU m (o n é igual em todas)\n";

    int resultado;

    // >>> CÓDIGO REAL <<<  if (m < n) return 0;
    if (m < n) {
        recuo();
        cout << "    m < n ?  " << m << " < " << n << "  SIM -> caso base: não dá mais para tirar " << n
             << " de " << m << ", devolve 0\n";
        resultado = 0;
    } else {
        recuo();
        cout << "    m < n ?  " << m << " < " << n << "  NÃO -> ainda dá para tirar " << n << " de " << m << "\n";
        recuo();
        cout << "    tiro " << n << ": " << m << " - " << n << " = " << m - n << "\n";
        recuo();
        cout << "    FICA ESPERANDO: 1 + quociente(" << m - n << ", " << n << ")   <- o ??? ainda não é conhecido\n";

        // >>> CÓDIGO REAL <<<  return 1 + quociente(m - n, n);
        nivel++;
        int debaixo = quociente(m - n, n);
        nivel--;

        resultado = 1 + debaixo;
        recuo();
        cout << "VOLTOU para quociente(m=" << m << ", n=" << n << "): a de baixo devolveu " << debaixo
             << ". Agora faço a conta: 1 + " << debaixo << " = " << resultado << "\n";
    }

    recuo();
    cout << "SAIU   quociente(m=" << m << ", n=" << n << ") devolvendo " << resultado << "\n";
    return resultado;
}

// ---------------------------------------------------------------
// main: escolha qual exemplo olhar (comente/descomente)
// ---------------------------------------------------------------
void titulo(const char* t) {
    cout << "\n==========================================================\n";
    cout << t << "\n";
    cout << "==========================================================\n";
}

int main() {
    cout << "COMO LER A SAÍDA\n";
    cout << "  ENTROU  = uma cópia nova da função nasceu (com os valores dela)\n";
    cout << "  FICA ESPERANDO = a cópia parou na linha da chamada; a conta dela só\n";
    cout << "                   será feita quando a de baixo responder\n";
    cout << "  VOLTOU  = a de baixo terminou e entregou o resultado\n";
    cout << "  SAIU    = esta cópia terminou e devolveu para a de cima\n";
    cout << "  Cada '|   ' à esquerda é um nível mais fundo.\n";

    // ---- Palíndromo ----
    char arara[] = "arara";
    titulo("palindromo(\"arara\")   esperado: 1");
    int r1 = palindromo(arara, 0, strlen(arara) - 1);
    cout << "\nRESULTADO FINAL: " << r1 << "\n";

    char abca[] = "abca";
    titulo("palindromo(\"abca\")   esperado: 0  (pontas iguais, miolo diferente)");
    int r2 = palindromo(abca, 0, strlen(abca) - 1);
    cout << "\nRESULTADO FINAL: " << r2 << "\n";

    char abba[] = "abba";
    titulo("palindromo(\"abba\")   esperado: 1  (tamanho par: ini passa de fim)");
    int r3 = palindromo(abba, 0, strlen(abba) - 1);
    cout << "\nRESULTADO FINAL: " << r3 << "\n";

    // ---- Soma dos dígitos ----
    titulo("soma_digitos(123)   esperado: 6");
    int r4 = soma_digitos(123);
    cout << "\nRESULTADO FINAL: " << r4 << "\n";

    titulo("soma_digitos(1005)   esperado: 6  (zeros do meio somam 0)");
    int r5 = soma_digitos(1005);
    cout << "\nRESULTADO FINAL: " << r5 << "\n";

    // ---- Quociente ----
    titulo("quociente(10, 3)   esperado: 3");
    int r6 = quociente(10, 3);
    cout << "\nRESULTADO FINAL: " << r6 << "\n";

    titulo("quociente(5, 5)   esperado: 1  (m == n ainda dá para tirar um n)");
    int r7 = quociente(5, 5);
    cout << "\nRESULTADO FINAL: " << r7 << "\n";

    return 0;
}