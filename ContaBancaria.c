#include <stdlib.h>
#include <stdio.h>
#include "ContaBancaria.h"

 struct conta{
    int numero;
    int cpf;
    double saldo;
    int aniversario;
    double limite;
    char nome;
};

ContaBancaria* Inicializa(int numero, char nome, int cpf, double saldo) {
    ContaBancaria* conta = (ContaBancaria*)malloc(sizeof(ContaBancaria));
    if(conta != NULL){
        conta->numero = numero;
        conta->nome = nome;
        conta->cpf = cpf;
        conta->saldo = saldo;
    }
    return conta;

}


void Deposito (ContaBancaria *conta, double valor) {
  conta->saldo += valor;
}
void Saque (ContaBancaria *conta, double valor) {
  conta->saldo -= valor;
}

void ImprimePonteiro (ContaBancaria *conta) {
  printf("Numero: %d\n", conta->numero);
  printf("Nome: %c\n", conta->nome);
  printf("CPF: %d\n", conta->cpf);
  printf("Saldo: %.2f\n", conta->saldo);

}
