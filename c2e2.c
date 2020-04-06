#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	float gasPrice;
	float gasGallon;
	float dollarToReal;
	float litrePriceInReal;
	float mlPrice;
	
	printf("Preço do galão de gasolina em Dólar Americano: $");
	scanf("%f", &gasPrice);
	
	printf("valor do dólar em reais: R$");
	scanf("%2f", &dollarToReal);
	
	gasGallon = 3785.4; //equivalência de 1 galão em ml
	
	mlPrice = (gasPrice/gasGallon);
	litrePriceInReal = dollarToReal*mlPrice*1000;
	
	printf("O preço do litro da gasolina em Real é: R$%.2f", litrePriceInReal);
	
	
	return 0;
}
