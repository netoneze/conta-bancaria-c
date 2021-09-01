typedef struct conta ContaBancaria;
ContaBancaria* Inicializa (int numero, char nome, int cpf, double saldo);
void Deposito (ContaBancaria *, double);
void Saque (ContaBancaria *, double);
void ImprimePonteiro(ContaBancaria*);
