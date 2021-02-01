#include <stdio.h>

int main(){
	
	int  lado1, lado2, lado3;
	scanf("%d%d%d",&lado1, &lado2, &lado3);
	
	if( (lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado2 + lado1) ){

		printf("O triangulo pode ser formado\nTipo de triangulo : ");
	
		if( (lado1==lado2) && (lado1==lado3) ){
			printf("Equilatero\n");
		}else if( (lado1==lado2) || (lado2==lado3) || (lado3==lado1) ){
			printf("Isosceles\n");	
		}else{
			printf("Escaleno\n");	
		}
	}else{
		printf("O triangulo não pode ser formado\n");
	}


	return 0;
}
