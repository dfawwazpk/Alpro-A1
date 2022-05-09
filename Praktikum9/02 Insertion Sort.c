/* Nama File    : Insertion Sort.c */
/* Deskripsi    : Mengurutkan elemen tabel menggunakan teknik insertion sort.*/
/* Pembuat      : Dimas Fawwaz PK - 24060121140035*/
/* Tgl Pembuatan: Senin, 9 Mei 2022*/

#include <math.h>
#include <stdio.h>

void insertionSort(int arr[],int n)
{
	int i;
	int x;
	int j;
	for(i=1;i<n;i++){
		x=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>x){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=x;
	}
}

int main()
{
	int *arr;
	int n;
	int i;
    arr=(int*)malloc(n*sizeof(int));
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d",&n);
    printf("Masukkan elemen tabel SECARA BERURUTAN:\n");
    for(i=0;i<n;i++){
        printf("Masukkan elemen ke-%d: ",i+1);
        scanf("%d",&arr[i]);
    }
	insertionSort(arr,n);
	printf("\nElemen yang telah diurutkan: \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
