#include <stdio.h>
#include "ContaBancaria.h"
int main (){
    int op = 0,control=0;

    ContaBancaria *conta1;

    while(op!=6){
    printf("\n\nOla jovem!\n1-Criar Conta\n2-Deposito\n3-Saque\n4-Excluir conta\n5-Extrato de conta\n6-Sair\nDIGITE AQUI: ");

    scanf("%d",&op);

    if(op<1 || op>6){
        printf("Opcao errada BURRO!");
    }

    if(op==1){
        double saldo,deposito2;
        int cpf,numero;
        char nome;

        printf("\n\n<<<OPCAO 1>>>\n");

        printf("Digite o Numero da conta: ");
        scanf("%d",&numero);
        fflush(stdin);

        printf("Digite o Nome do correntista: ");
        scanf("%c",&nome);
        fflush(stdin);

        printf("Digite o CPF do correntista: ");
        scanf("%d",&cpf);
        fflush(stdin);

        printf("Digite o Saldo do correntista: ");
        scanf("%lf",&saldo);
        fflush(stdin);

        conta1 = Inicializa(numero,nome,cpf,saldo);

        printf("Faca um Deposito inicial:");
        scanf("%lf",&deposito2);

        Deposito(conta1,deposito2);

        control++;
    }

    if(op==2&&control>0){

        double deposito3;

        printf("\n\n<<<OPCAO 2>>>\n");
        printf("Faca um Deposito:");
        scanf("%lf",&deposito3);

        Deposito(conta1,deposito3);
    }

    if(op==3&&control>0){
        double saque1;

        printf("\n\n<<<OPCAO 3>>>\n");
        printf("Faca um Saque:");
        scanf("%lf",&saque1);

        Saque(conta1,saque1);
    }

     if(op==5&&control>0){
        printf("\n\n<<<OPCAO 5>>>\n");

        ImprimePonteiro(conta1);
    }

    //exemplo de como deve ser
    //ContaBancaria *conta1;
   // conta1 = Inicializa(918556, 300.00);
   //printf("\nAntes da movimentacao:\n ");
    //ImprimePonteiro(conta1);
    //Deposito(conta1, 50.00);
    //Saque(conta1, 70.00);
    //printf("\nDepois da movimentacao:\n ");
    //ImprimePonteiro(conta1);
    //system("PAUSE");
   // return(0);
    }
}
