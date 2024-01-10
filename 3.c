#include <stdio.h>
#include <stdlib.h>

int cifttek(int a){
	if(a%2==0) return 1;
	else return 0;
}

int main(int argc, char *argv[]) {
	int a;
	printf("Sayi giriniz:\n");
	scanf("%d",&a);
	if(cifttek(a)==1) printf("Sayi cifttir.");
	else printf("Sayi tektir.");
	return 0;
}
