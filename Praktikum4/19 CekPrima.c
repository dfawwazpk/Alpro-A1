/* Nama File    : CekPrima.c */
/* Deskripsi    : Menentukan apakah masukan integer (N) merupakan bilangan prima*/
/* Pembuat      : Dimas Fawwaz PK - 24060121140035*/
/* Tgl Pembuatan: Selasa, 15 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int i=1;
    int j=0;
    scanf("%d",&N);
    if(N>0){
        while(i<=N){
            if(N%i==0){
                j+=i;
            }
            i++;
        }
        if(j==(1+N)){
            printf("\nN=%d adalah bilangan prima\n",N);
        }
        else{
            printf("\nN=%d adalah bukan bilangan prima\n",N);
        }
    }
    else{
        printf("\nNilai integer tidak boleh negatif\n");
    }
}

