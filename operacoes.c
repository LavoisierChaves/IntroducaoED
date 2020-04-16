#include <stdio.h>
#include <locale.h>

int main(void){
    
    setlocale(LC_ALL,"Portuguese");
    int operacao;
    float a=0, b=0;
    float resultado = 0;
    do{
        printf("Digite o primeiro valor: ");
        scanf("%f", &a);
        printf("Digite o segundo valor: ");
        scanf("%f", &b);
        
        printf("\n1 - Adição");
        printf("\n2 - Subtração");
        printf("\n3 - Multiplicação");
        printf("\n4 - Divisão");
        printf("\n0 - Sair");
        printf("\n\nEscolha a operação desejada: ");
        scanf("%d",&operacao);
        
        switch (operacao){
        
        case 1:
            resultado = a + b;
            break;
        case 2:
            resultado = a - b;
            break;
        
        case 3:
            resultado = a * b;
            break;
        case 4:
            resultado = a / b;
            break;
        
        default:
            
            break;
        }
    printf("resultado = %.2f\n\n",resultado);

    }
    while (operacao != 0);
    
    return 0;
}
