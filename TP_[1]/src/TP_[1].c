/*
 ============================================================================
 Name        : TP_[1].c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int utn_getInt(int * pNumeroIngresado,char * mensaje, char * mensajeError, int maximo, int minimo);

int main(void) {
	setbuf(stdout, NULL);

	// DECLARO VARIABLES
	int menu;
	int kilometros;
	int opcionesDeMenu;
	int kilometrosIngresados;
	int precioDeVuelos;
	int aerolineas;
	int latam;
	int costos;
	int descuento;
	int interes;
	int bitcoin;
	int precioPorKilometro;
	int diferenciaDePrecio;
	int resultados;
	int precioConTarjetaCredito;
	int precioConTarjetaDebito; // huwhoiwehfñhgfoaghoihfioabhib vnoigbnuirtu
	int salir;
	int validacionDeRetorno;

	// INICIALIZO VARIABLES
	kilometrosIngresados = 0;
	precioDeVuelos = 0;
	descuento = 0.10;
	interes= 0.25;
	bitcoin = 4606954.55;
    opcionesDeMenu = 0;

	//HAGO MENU INICIAL DENTRO DE MAIN
    do{

    printf("   MENU \n\n");
	printf("1-Ingrese kilometros \n");
	printf("2-Precio de vuelos \n");
	printf("3-Costos \n");
	printf("4-Informe De Resultados\n");
	printf("5-Carga forzada de datos\n");
	printf("6-Salir\n ");
