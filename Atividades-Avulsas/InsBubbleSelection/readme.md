# 📊 Algoritmos de Ordenação em C

Este projeto contém três algoritmos de ordenação implementados em C: **Bubble Sort**, **Insertion Sort** e **Selection Sort**. O usuário pode escolher qual algoritmo utilizar para ordenar um array de números inteiros.

## 🚀 Funcionalidades

- Ordenação de um array predefinido
- Três métodos disponíveis:
  - **Bubble Sort**
  - **Insertion Sort**
  - **Selection Sort**
- Exibe os resultados no console
- Permite escolha do método de ordenação via entrada do usuário

## 📜 Algoritmos Implementados

### 📌 Bubble Sort

- Compara pares adjacentes e os troca se estiverem na ordem errada.
- Repetido até que o array esteja ordenado.

### 📌 Insertion Sort

- Constrói a ordenação um elemento por vez.
- Move elementos maiores para a direita para inserir o novo elemento na posição correta.

### 📌 Selection Sort

- Encontra o menor elemento e o move para o início.
- Repete o processo para os próximos elementos até o final do array.

## 💻 Como Usar

1. Copie o código para um arquivo `ordenacao.c`.
2. Compile o código com um compilador C (exemplo usando GCC):
   ```sh
   gcc ordenacao.c -o ordenacao
   ```
3. Execute o programa:
   ```sh
   ./ordenacao
   ```
4. Escolha um dos algoritmos de ordenação inserindo um número correspondente:
   - `1` para Bubble Sort
   - `2` para Insertion Sort
   - `3` para Selection Sort
5. O array ordenado será exibido no console.

## 📌 Exemplo de Saída

```
Escolha um dos algoritmos de ordenacao:
1 - Bubble Sort
2 - Insertion Sort
3 - Selection Sort
Selecione uma opcao: 2
Array ordenado com Insertion Sort:
2 24 32 62 86
```

## 🛠 Tecnologias Utilizadas

- Linguagem C
- CLion
- Terminal (para entrada e saída)

## 📄 Licença

Este projeto está sob a licença MIT - sinta-se à vontade para modificá-lo e usá-lo da maneira que desejar.

---
Desenvolvido com ❤️ e C!

