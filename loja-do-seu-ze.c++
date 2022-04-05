
#include <stdio.h>

float macans;

int main() {
    
    printf("Bem vindo ao mercadinho do seu zé!\n\n");
    
    printf("Hoje temos promoção de maçãs!\n");
    printf("Maçãs custam R$1,33!\n");
    printf("Mas se você comprar o pacote da dúzia, você paga apenas R$0,99!!!");
    printf("Aproveite!\n\n");
    
    printf("Para comprar maçãs basta digitar quantas deseja: ");
    scanf("%f", &macans);
    
    if (macans >= 12) {
        macans = macans * 0.99;
        printf("\n\nCom o desconto, sua compra ficou %f!\n", macans);
        printf("Obrigado, Volte sempre!");
    }
    else {
        macans = macans * 1.33;
        printf("\n\nSua compra ficou %f\n", macans);
        printf("Próximo");
    }
    
    return 0;
}
