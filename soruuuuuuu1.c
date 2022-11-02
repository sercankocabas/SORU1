#include <stdio.h>
#include <stdlib.h>

int toplam,sayi,s;
int katlar(int s){
	for(sayi=1;sayi<1000;sayi++){
		if(sayi%3==0||sayi%5==0){
			toplam=toplam+sayi;
		}
	}
	
	return toplam;
}

int main() {
	printf("girin: ");
	scanf("%d",&s);
	katlar(s);
	printf("sonuc: %d",toplam);
	
	
	
	return 0;
}