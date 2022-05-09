/* Nama File    : Bubble Sort.c */
/* Deskripsi    : Mengurutkan elemen tabel menggunakan teknik bubble sort.*/
/* Pembuat      : Dimas Fawwaz PK - 24060121140035*/
/* Tgl Pembuatan: Senin, 9 Mei 2022*/

#include <stdio.h>

void bubbleSort(int arr[],int n)
{
	int i;
	int j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
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
	bubbleSort(arr,n);
	printf("\nElemen yang telah diurutkan: \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
