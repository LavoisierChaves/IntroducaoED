#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	float gasPrice;
	float gasGallon;
	float dollarToReal;
	float litrePriceInReal;
	float mlPrice;
	
	printf("Pre�o do gal�o de gasolina em D�lar Americano: $");
	scanf("%f", &gasPrice);
	
	printf("valor do d�lar em reais: R$");
	scanf("%2f", &dollarToReal);
	
	gasGallon = 3785.4; //equival�ncia de 1 gal�o em ml
	
	mlPrice = (gasPrice/gasGallon);
	litrePriceInReal = dollarToReal*mlPrice*1000;
	
	printf("O pre�o do litro da gasolina em Real �: R$%.2f", litrePriceInReal);
	
	
	return 0;
}
