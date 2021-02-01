#include <stdio.h>
#include <stdlib.h>

int main(){


	//char nome1[10] = "Carlos";
 	char nome1 = 'Yugi';
 	char nome2 = 'Bruno';	
	char transicao;
	int result;

	result = strcoll(nome1,nome2);
	printf("%d",result);
//	if(result != 0){
		//transicao[10] = nome1[10];
		//nome1[10] = nome2[10];
		//nome2[10] = transicao[10];
//	}
	/*
	result = strcoll(nome2,nome3);
	if(result == 1){
		transicao[10] = nome2[10];
		nome2[10] = nome3[10];
		nome3[10] = transicao[10];
	}
	*/
	printf("%c\n%c\n\n",nome1,nome2);
	
	return 0;
}
