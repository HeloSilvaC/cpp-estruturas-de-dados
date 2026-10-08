# 📚 C++ e Estruturas de Dados II

> Repositório destinado ao estudo prático, exercícios e implementações de **Estruturas de Dados II** em C++.

![C++](https://img.shields.io/badge/C%2B%2B-17-blue?logo=c%2B%2B)
![Status](https://img.shields.io/badge/Status-Em_Desenvolvimento-green)
![Ambiente](https://img.shields.io/badge/Ambiente-VS_Code_%7C_WSL-blueviolet)

---

## 📌 Sobre o Repositório

Este repositório reúne os conceitos teóricos e exercícios práticos desenvolvidos durante a disciplina de Estruturas de Dados II. O objetivo é consolidar o domínio da linguagem C++, gestão de memória, análise de complexidade e algoritmos clássicos de ordenação e pesquisa.

---

## 📂 Estrutura dos Módulos

```text
cpp-estruturas-de-dados/
├── 01-templates-e-stl/              # Generic Programming, Templates de Funções/Classes e STL (std::vector)
├── 02-ponteiros-e-referencias/      # Gestão de memória, ponteiros e passagem por referência
├── 03-vetores-e-arrays/             # Manipulação de vetores, percursos e operações com arrays
├── 04-recursividade/                # Algoritmos recursivos, pilha de execução e casos base
├── 05-ordenacao/                    # Algoritmos de ordenação eficientes e elementares
└── output/                          # Ficheiros compilados (.exe / binários - ignorados no Git)
```

---

## 🛠️ Conteúdos Abordados

- **Templates & STL:** Uso de funções genéricas e containers da Standard Template Library.
- **Ponteiros e Referências:** Alocação de memória, operadores `*` e `&`, e alteração direta de variáveis.
- **Vetores e Arrays:** Operações com arrays dinâmicos e estáticos.
- **Recursividade:** Resolução de problemas por divisão, análise da pilha (*call stack*) e condições de paragem.
- **Ordenação:** Estudo e comparação de algoritmos (Bubble Sort, Insertion Sort, Quick Sort, Merge Sort).

---

## 🚀 Como Compilar e Executar

### Pré-requisitos
- Compilador **g++** (GCC) instalado via Linux/WSL ou MinGW no Windows.

### Passo a Passo no Terminal

1. **Navegue até à pasta raiz do projeto:**
   ```bash
   cd cpp-estruturas-de-dados
   ```

2. **Compile o ficheiro desejado direcionando a saída para a pasta `output`:**
   ```bash
   g++ 01-templates-e-stl/soma_array.cpp -o output/soma_array.exe
   ```

3. **Execute o programa:**
   - No **PowerShell / Windows**:
     ```powershell
     .\output\soma_array.exe
     ```
   - No **Linux / WSL (Bash)**:
     ```bash
     ./output/soma_array.exe
     ```

---

## 📝 Autor

Desenvolvido por **Heloísa Silva** durante as aulas de Estruturas de Dados II.