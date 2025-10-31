#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int *canteiroFlores, int tamanhoCanteiroFlores, int n) {
    int lugaresLivres = 0; // contador para quando eu encontrar um lugar

    for(int i = 0; i < tamanhoCanteiroFlores; i++){ 
        if((canteiroFlores[i] == 0) && (canteiroFlores[i-1] == 0) && (canteiroFlores[i+1] == 0)){
            canteiroFlores[i] = 1; 
            lugaresLivres++; // se foi possivel plantar
        }
    } 

    if(lugaresLivres >= n){ // se o numero de floeres que plantei foi maior ou igual ao numero de flores que eu deveria plantar
        return true;
    }else{
        return false;
    }
} // esse codigo compilou no leetcode em aula

int main(){
    int canteiro[] = {1, 0, 0, 0, 1}, num = 1;
   

    return 0;
}