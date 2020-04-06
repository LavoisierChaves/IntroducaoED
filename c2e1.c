#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");

    float radius;
    float volEsphera;
    float pi;
    float radius3;

	printf("Digite o raio da esfera: ");
    scanf("%f", &radius);

    radius3 = pow(radius,3);
    pi = 3.14159265358979;
    volEsphera = (4*pi*radius3)/3;

    printf("\nO volume da esfera é: %.4f", volEsphera);

    return 0;
}
