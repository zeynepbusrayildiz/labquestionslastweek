#include <stdio.h>
#include <stdlib.h>

int kareAl(int a){
	int b=a*a;
	return b;
}

int main() {
	int a;
	printf("Lutfen sayi girin:\n");
	scanf("%d",&a);
	printf("%d sayisinin karesi : %d",a,kareAl(a));
	return 0;
}
