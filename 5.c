#include <stdio.h>
#include <stdlib.h>

int kelimeSay(char str[100]){
	int i=0, cnt=1;
	while(str[i]!='\0'){
		if(str[i]==32) cnt++;
		i++;
	}
	return cnt;
}

int main() {
	char str[100];
	printf("Bir cumle yaziniz:\n");
	gets(str);
	printf("Bu cumlede %d tane kelime vardir.",kelimeSay(str));
	return 0;
}
