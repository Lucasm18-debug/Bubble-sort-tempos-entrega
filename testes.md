# Registro de Testes

## Objetivo

Verificar o funcionamento do Classificador de Tempos
de Entrega e confirmar que o Bubble Sort organiza
corretamente os dez valores em ordem crescente.

## Teste 1 — Valores fora de ordem

Entrada:

12, 8, 35, 19.5, 6, 14, 22, 9.5, 17, 11

Resultado esperado:

6.00, 8.00, 9.50, 11.00, 12.00,
14.00, 17.00, 19.50, 22.00, 35.00

Status: Aprovado

Resultado observado: O programa apresentou bem a ideia proposta e entregou os valores em ordem.

## Teste 2 — Array já ordenado

Entrada:

1, 2, 3, 4, 5, 6, 7, 8, 9, 10

Resultado esperado:

1, 2, 3, 4, 5, 6, 7, 8, 9, 10

Status: Aprovado

Resultado observado: O programa foi capaz de manter o padrão de ordem.

## Teste 3 — Array em ordem inversa

Entrada:

10, 9, 8, 7, 6, 5, 4, 3, 2, 1

Resultado esperado:

1, 2, 3, 4, 5, 6, 7, 8, 9, 10

Status: Aprovado

Resultado observado: O programa compreendeu os valores ao contrário e os ordenou em forma crescente.

## Teste 4 — Entrada inválida

Entrada: -5 no primeiro tempo informado.

Resultado esperado:

O programa exibe uma mensagem de erro e termina sem
prosseguir para a ordenação.

Status: Aprovado

Resultado observado: O programa mostrou uma mensagem de erro solicitando apenas números não negativos.

## Conclusão

Os testes foram realizados para verificar a ordenação
crescente, o comportamento com valores já ordenados,
a inversão da ordem dos valores e a validação de entradas.

O programa foi capaz de entender a complexidade dos números positivos, e tambem negativos, logo conseguiu cumprir com todas as expectativas esperadas pelo grupo, sendo assim, o resultado do programa capaz de executar a ordem de números foi satisfatório.