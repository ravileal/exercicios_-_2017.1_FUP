#include <stdio.h>
float valorHora(float vh);
float auxilio(float porcentagem, float salario);
void funcionarios();

int main(){

    funcionarios();

    return 0;
}

void funcionarios(){

    int i, cod, horasT, erro=0;
    char turno[1], categoria[1];
    float salarioI, ax, valorH;

    printf("\nCategorias : G ou O \nTurnos : N M V\n\n");

    for(i = 1; i<=10; i++){
        do{

            if(erro==1){
                printf("\nCategoria ou turno incorretos, ou digitados em minusculo\n");
            }
            printf("\n Funcionario %d \n",i);
            printf("Digite o codigo ");
            scanf("%d",&cod);

            printf("Digite o numero de horas trabalhadas no mes ");
            scanf("%d",&horasT);

            printf("Digite o turno de trabalho ");
            scanf("\n%c",&turno[0]);

            printf("Digite a categoria ");
            scanf("\n%c",&categoria[0]);

            if(turno[0] == 'N' || turno[0] == 'M' || turno[0] == 'V'){

                if(categoria[0] == 'G' || categoria[0] == 'O'){

                    erro=0;

                    if(categoria[0] == 'G' && turno[0] == 'N'){
                        valorH = valorHora(18);
                        //valorH = (150.00*18.00)/100.00;
                    }else if(categoria[0] == 'G' && (turno[0] == 'M' || turno[0] == 'V') ){
                        valorH = valorHora(15);
                        //valorH = (150.00*15.00)/100.00;
                    }else if(categoria[0] == 'O' && turno[0] == 'N'){
                        valorH = valorHora(13);
                        //valorH = (150.00*13.00)/100.00;
                    }else if(categoria[0] == 'O' && (turno[0] == 'M' || turno[0] == 'V') ){
                        valorH = valorHora(10);
                        //valorH = (150.00*10.00)/100.00;
                    }

                    salarioI = horasT * valorH;

                    if(salarioI < 300){
                        ax = auxilio(20,salarioI);
                        //ax = 0.20*salarioI;
                    }else if(salarioI < 600){
                        ax = auxilio(15,salarioI);
                        //ax = 0.15*salarioI;
                    }else{
                        ax = auxilio(5,salarioI);
                        //ax = 0.05*salarioI;
                    }

                    printf("\n\nCodigo %d \nNumero de horas trabalhadas %d \nValor da hora trabalhada %.2f \nSalario Inicial %.2f \nAuxilio-alimentacao %.2f \nSalario Final %.2f\n\n",cod,horasT,valorH,salarioI,ax,salarioI+ax);

                }else{
                    erro=1;
                }

            }else{
                erro=1;
            }

        }while(erro==1);

    }
}

float valorHora (float vh){
    vh = 150*(vh/100);
    return vh;
}

float auxilio(float porcentagem, float salario){
    salario = (porcentagem/100)*salario;
    return salario;
}
