#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoData{
int dia;
int mes;
int ano;
}Data;

int validarData();
//int validarStringData(char data[]);

int main(){

	validarData();
	
}

int validarData(){
/*  ■ meses com 30 dias: 04, 06, 09 e 11;

    ■ meses com 31 dias: 01, 03, 05, 07, 08, 10,12;

	■ cálculo de ano bissexto: cada ano divisível por 4 é um ano bissexto(E); cada ano divisível por 100 não é bissexto(OU); todo ano divisível por 400 sempre é um ano bissexto;*/
    
	Data data;
	printf("\nDigite a data no formato dia/mes/ano: ");
	scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);

    if(data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11)
        if(data.dia<1 || data.dia>30)
	
}