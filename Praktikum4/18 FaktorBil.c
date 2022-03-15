/* Nama File    : FaktorBil.c */
/* Deskripsi    : Menampilkan faktor dari masukan bilangan integer (N)*/
/* Pembuat      : Dimas Fawwaz PK - 24060121140035*/
/* Tgl Pembuatan: Selasa, 15 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int i=1;
    scanf("%d",&N);
    printf("\nN=%d, faktor bilangannya adalah ",N);
    if(N>0){
        while(i<=N){
            if(N%i==0 && i!=N){
                printf("%d, ",i);
            }
            else if(i==N){
                printf("dan %d\n",i);
            }
            i++;
        }
    }
    else{
        printf("\nNilai integer tidak boleh negatif\n");
    }
}

