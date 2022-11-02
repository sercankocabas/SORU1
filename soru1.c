#include <stdio.h>
#include <stdlib.h>

int t,i,a;
int katlar(int a){
	for (i=1;i<a;i++){
		if (i%3==0){
			t=t+i;
		}
	      else if (i%5==0){
			t=t+i;
		}
	}
	return t;
}

int main(){
	    printf("klavyeden bir deger giriniz: ");
	    scanf("%d",&a);
	    katlar(a);
	    printf("3 veya 5'in tum katlarinin toplami: %d",t);	    
	
}