#include <iostream>


int main(int argc, char *argv[])
{
    //precisamos demostrar a quantidade de caractere q estamos trabalhando
    //por isso tem [30] que postra que ser� at� 30 caracteres
    char nome[30];
    char endereco[30];
    int idade;
    
    printf("nome \n");
    scanf("%s", &nome);
    
    printf("Endereço: \n");
    scanf("%s", &endereco);
    
    printf("Sua idade: \n");
    scanf("%d", &idade);
    
    printf("\n Nome: %s", nome);
    printf("\n Endereço: %s", endereco);
    printf("\n Idade: %d", idade);
    
    return 0;
}
