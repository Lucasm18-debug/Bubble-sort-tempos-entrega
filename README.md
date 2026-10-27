# Classificador de Tempos de Entrega

## 1. Identificação

- **Instituição:** UDF
- **Curso:** Engenharia de Software
- **Disciplina:** Algoritmos e Pensamento Computacional
- **Professora:** Karla Roberto Sartin
- **Integrantes:** Lucas, Gustavo e Daniel.

## 2. Contextualização

Uma empresa de entregas precisa organizar os tempos
gastos para concluir seus pedidos. A organização dos
dados facilita a identificação das entregas mais rápidas
e das mais demoradas.

Este projeto desenvolve uma aplicação em linguagem C
que organiza dez tempos de entrega, medidos em minutos,
utilizando o algoritmo Bubble Sort.

## 3. Objetivo

Aplicar conceitos de arrays, estruturas de repetição,
condicionais e comparações entre elementos, organizando
os tempos de entrega em ordem crescente.

## 4. Funcionamento do Bubble Sort

O Bubble Sort percorre o array comparando elementos
adjacentes. Quando o elemento atual é maior que o
próximo, os dois valores são trocados.

A cada passada pelo array, o maior valor restante "sobe"
para o final, como uma bolha, e por isso a região ainda
não ordenada diminui a cada repetição.

O processo se repete até que os dados estejam ordenados.
Neste projeto, a ordenação é crescente, do menor para
o maior tempo.

O algoritmo tem complexidade de tempo O(n²), o que é
adequado para um conjunto pequeno de dados, como os dez
tempos de entrega deste projeto.

## 5. Tecnologias e ferramentas

- Linguagem C
- Compilador GCC
- Visual Studio Code
- Git
- GitHub

## 6. Como compilar e executar

Com o GCC instalado, abra o terminal na pasta do projeto.

### Windows (PowerShell)

Para compilar:

```bash
gcc -std=c11 -Wall -Wextra ordenacao_entregas.c -o ordenacao_entregas.exe
```

Para executar:

```powershell
.\ordenacao_entregas.exe
```

### Linux

Para compilar:

```bash
gcc -std=c11 -Wall -Wextra ordenacao_entregas.c -o ordenacao_entregas
```

Para executar:

```bash
./ordenacao_entregas
```

## 7. Exemplo de entrada e saída

Os dez tempos de entrega, em minutos, são os valores
de entrada do programa.

Entrada, em minutos:

```text
12, 8, 35, 19.5, 6, 14, 22, 9.5, 17, 11
```

Antes da ordenação:

```text
12.00, 8.00, 35.00, 19.50, 6.00,
14.00, 22.00, 9.50, 17.00, 11.00
```

Depois da ordenação crescente:

```text
6.00, 8.00, 9.50, 11.00, 12.00,
14.00, 17.00, 19.50, 22.00, 35.00
```

- **Entrega mais rápida:** 6.00 minutos.
- **Entrega mais demorada:** 35.00 minutos.

## 8. Considerações finais

O projeto permitiu aplicar conceitos fundamentais
de programação em C, como arrays, estruturas de controle,
comparações e trocas entre elementos.

A implementação do Bubble Sort demonstrou como um
algoritmo pode organizar dados de uma situação cotidiana.
O Git e o GitHub foram utilizados para registrar e
compartilhar a evolução do projeto.