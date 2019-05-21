#include<stdio.h>

int fat(int n){
// retorna fatorial de n
	if(n==0){
		return 1;
	}else{
		return fat(n-1)*n;
	}
}

int main (void){
	int i=4;
	printf("Fatorial de n: %d", fat(i));
	return 0;
}
