/* Nama File    : CekBulan.c */
/* Deskripsi    : Menampilkan nama bulan berdasarkan masukan yang berupa nomor bulannya*/
/* Pembuat      : Dimas Fawwaz PK - 24060121140035*/
/* Tgl Pembuatan: Rabu, 9 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int b;
    printf("Masukkan nomor bulan : ");
    scanf("%d",&b);
    if(b>=1 && b<=12){
        switch(b){
            case 1:
                printf("\nJanuari\n");
                break;
            case 2:
                printf("\nFebruari\n");
                break;
            case 3:
                printf("\nMaret\n");
                break;
            case 4:
                printf("\nApril\n");
                break;
            case 5:
                printf("\nMei\n");
                break;
            case 6:
                printf("\nJuni\n");
                break;
            case 7:
                printf("\nJuli\n");
                break;
            case 8:
                printf("\nAgustus\n");
                break;
            case 9:
                printf("\nSeptember\n");
                break;
            case 10:
                printf("\nOktober\n");
                break;
            case 11:
                printf("\nNovember\n");
                break;
            case 12:
                printf("\nDesember\n");
                break;
        }
    }
    else{
        printf("\nMasukan nomor bulan tidak tepat\n");
    }
}
