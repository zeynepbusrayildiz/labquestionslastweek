#include <stdio.h>
#include <stdlib.h>

float ortalama(int A[5]){
	int i, toplam=0;
	for(i=0;i<5;i++){
		toplam+=A[i];
	}
	float ort;
	ort=(float)toplam/5;
	return ort;
}

int main() {
	int i, A[5];
	for(i=0;i<5;i++){
		printf("%d. sayiyi giriniz:\n",i+1);
		scanf("%d",&A[i]);
	}
	printf("Sayilarin ortalamasi = %f",ortalama(A));
	return 0;
}
