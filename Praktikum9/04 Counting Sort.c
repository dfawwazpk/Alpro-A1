/* Nama File    : Counting Sort.c */
/* Deskripsi    : Mengurutkan elemen tabel menggunakan teknik counting sort.*/
/* Pembuat      : Dimas Fawwaz PK - 24060121140035*/
/* Tgl Pembuatan: Senin, 9 Mei 2022*/

#include <stdio.h>

void countingSort(int arr[],int n){
  int output[10];
  int max=arr[0];
  for(int i=1;i<n;i++){
    if (arr[i]>max)
      max=arr[i];
  }
  int count[10];
  for(int i=0;i<=max;++i){
    count[i]=0;
  }
  for(int i=0;i<n;i++){
    count[arr[i]]++;
  }
  for(int i=1;i<=max;i++){
    count[i]+=count[i-1];
  }
  for(int i=n-1;i>=0;i--){
    output[count[arr[i]]-1]=arr[i];
    count[arr[i]]--;
  }
  for(int i=0;i<n;i++){
    arr[i]=output[i];
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
	countingSort(arr,n);
	printf("\nElemen yang telah diurutkan: \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
