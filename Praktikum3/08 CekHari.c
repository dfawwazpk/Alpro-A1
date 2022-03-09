/* Nama File    : CekHari.c */
/* Deskripsi    : Menampilkan nama hari berdasarkan masukan yang berupa nomor harinya*/
/* Pembuat      : Dimas Fawwaz PK - 24060121140035*/
/* Tgl Pembuatan: Rabu, 9 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int h;
    printf("Masukkan nomor hari : ");
    scanf("%d",&h);
    if(h>=1 && h<=7){
        switch(h){
            case 1:
                printf("\nSenin\n");
                break;
            case 2:
                printf("\nSelasa\n");
                break;
            case 3:
                printf("\nRabu\n");
                break;
            case 4:
                printf("\nKamis\n");
                break;
            case 5:
                printf("\nJum'at\n");
                break;
            case 6:
                printf("\nSabtu\n");
                break;
            case 7:
                printf("\nMinggu\n");
                break;
        }
    }
    else{
        printf("\nMasukan nomor hari tidak tepat\n");
    }
}
