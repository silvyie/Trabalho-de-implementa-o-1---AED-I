#include <stdio.h>
#include <stdbool.h>

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
