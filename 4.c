#include <stdio.h>
#include <stdlib.h>

int asal(int a){                  //asal sayi mi degil mi kontrol eden fonksiyon
	int test=0, i=2;
	if(a==1) return 0;
	else if(a==2) return 1;
	else if(a>0){
		while(i<a){
			if(a%i==0) test++;
			i++;
		}
		if(test==0) return 1;
		else return 0;
	}
	else{
		printf("Gecersiz!");
		return 0;	
	    } 
}

int armstrong(int a){             //armstrong sayisi mi degil mi kontrol eden fonksiyon
	int temp=a, bas=0;
	while(temp!=0){
		temp/=10;
		bas++;
	}
	int x=bas, result=0;
	temp=a;
	while(temp!=0){
		int x=bas, t=temp%10, us=1;
		while(x!=0){
			us*=t;
			x--;
		}
		result+=us;
		temp/=10;
	}
	if(result==a) return 1;
	else return 0;
}

int main() {
	int a;
	
	printf("Sayi giriniz:\n");
	scanf("%d",&a);
	
	
	if(asal(a)&&armstrong(a)) printf("Sayi hem asal hem de armstrong sayisidir.");
	
	else if(asal(a)) printf("Sayi asaldir, armstrong sayisi degildir.");
	
	else if(armstrong(a)) printf("Sayi asal degildir ama armstrong sayisidir.");
	
	else printf("Sayi asal sayi ve armstrong sayisi degildir.");
	
	
	return 0;
}
