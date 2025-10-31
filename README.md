# Trabalho de implementacao 1 - AED I
Nome: SILVANA DIAS FURTADO
Turma: M2

Casos testados com vetores de tamanho 5, 6 e 11 no exercício 605

canteiro[] = {1, 0, 0, 0, 1}, num = 1    true
canteiro[] = {1, 0, 1, 0, 1}, num = 1    false
canteiro[] = {1, 0, 0, 0, 1}, num = 2    false
canteiro[] = {1, 0, 1, 0, 1}, num = 2    false
canteiro[] = {1, 0, 0, 0, 0}, num = 2    true
canteiro[] = {1, 0, 1, 0, 0, 1}, num = 2 false
canteiro[] = {1, 0, 0, 1, 0, 1}, num = 2 false
canteiro[] = {1, 0, 1, 0, 0, 1}, num = 1 false
canteiro[] = {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1}, num = 3 false
canteiro[] = {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1}, num = 1 true
canteiro[] = {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1}, num = 2 false

Complexidade de tempo do código é O(tamanhoCanteiroFlores) porque ele percorre o array do canteiro apenas uma vez, 
avaliando cada posição para decidir se pode plantar uma flor ali. Complexidade de espaço é O(1) pois o algoritmo usa uma 
quantidade constante de memória extra.
