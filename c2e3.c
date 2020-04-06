#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numberSeconds;
	int hours,minutes;
	float seconds;
	
	printf("Digite o número de segundos transcorridos no evento: ");
	scanf("%d", &numberSeconds);
	
	hours = numberSeconds/3600;
	minutes = (numberSeconds-(3600*hours))/60;
	seconds = (numberSeconds-(3600*hours)-(60*minutes));
	
	printf("O evento durou %02d:%02d:%05.2f",hours,minutes,seconds);
	
	
	return 0;
}
