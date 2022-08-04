#include <stdio.h>


int algoritmoDemorado (int n) {
int soma = 0;

    for (int i = 0; i < n ; i ++) {
        for ( int j = 0; j < n; j ++) {
            for ( int k = 0; k < n; k ++) {
                for ( int l = 0; l < n; l ++) {
                    soma = i + j + k + l ;
                }
            }
        }
    }
return soma ;
}

int main(){

int n;
printf("Escreva um numero.\n");
scanf("%i", &n);

    algoritmoDemorado(n);
    return 0;
}