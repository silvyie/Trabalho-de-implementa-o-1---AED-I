#include <stdio.h>
#include <stdbool.h>

/*
===========================================================================
Função adicionar_pessoa: Essa função serve para percorrer o vetor do canteiro de flores
e verificar se será possivel plantar uma nova flor ali ou não
Função Main: O switch-case lê a opção digitada pelo usuário e executa, quando o usuário
digita a opção 5(Sair), o free do buffer é ativado.
===========================================================================
*/

bool canPlaceFlowers(int *canteiroFlores, int tamanhoCanteiroFlores, int n) {
    int lugaresLivres = 0;

    for(int i = 0; i < tamanhoCanteiroFlores; i++){
        if((canteiroFlores[i] == 0) && (i == 0 || canteiroFlores[i-1] == 0) && (i == tamanhoCanteiroFlores - 1 || canteiroFlores[i+1] == 0)){
            canteiroFlores[i] = 1;
            lugaresLivres++;
        }
    }
        if(lugaresLivres >= n){
            return true;
        }else{
            return false;
        }
}

/*
===========================================================================
Função Main: Essa função apenas pega um vetor preenchido com 0's e 1's e de 
acordo com o valor definido em num, ela chama a função canPlaceFlowers para
verificar se foi possivel plantar o número de flores (num) desejado.
===========================================================================
*/

int main(){
    int canteiro[] = {1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1}, num = 2;
    int tamanho = sizeof(canteiro) / sizeof(canteiro[0]);

    bool resultado = canPlaceFlowers(canteiro, tamanho, num);

    if (resultado) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
// algoritmo é eficiente em tempo linear e usa memória constante
