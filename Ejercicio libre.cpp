#include<iostream>
using namespace std;
int main(void){
	
	int opcion;
	
	cout<<"\n---MENU---"<<endl;
	cout<<"Ingrese una opcion: "<<endl;
	cout<<"Ejercicio 1"<<endl;
	cout<<"Ejercicio 2"<<endl;
	cout<<"Ejercicio 3"<<endl;
	cout<<"Ejercicio 4"<<endl;
	cout<<"Ejercicio 5"<<endl;
	cout<<"Ejercicio 8"<<endl;
	cout<<"Ejercicio 9"<<endl;
	cout<<"Ejercicio 11"<<endl;
	cout<<"Ejercicio 12"<<endl;
	cout<<"Ejercicio 13"<<endl;
	cout<<"Ejercicio 14"<<endl;
	cout<<"Ejercicio 16"<<endl;
	
	cin>>opcion;
	
	switch(opcion){
		case 1: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Suma, Resta, Multiplicaci�n y Divisi�n de dos n�meros"<<endl;
		break;
		
		case 2: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Determinar si un n�mero es par o impar"<<endl;
		break;
		
		case 3: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Convertir de kil�metros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
		break;
		
		case 4: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Determinar si una palabra o un n�mero es pal�ndromo."<<endl;
		break;
		
		case 5: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Conversi�n de n�meros ar�bigos a romanos (m�nimo 1,000)"<<endl;
		break;
		
		case 8: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Una tabla de multiplicar"<<endl;
		break;
		
		case 9: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Todas las tablas de multiplicar del 1 al 10"<<endl;
		break;
		
		case 11: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Conversi�n de n�meros decimales a binario"<<endl;
		break;
		
		case 12: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Conversi�n de n�meros decimales a hexadecimales"<<endl;
		break;
		
		case 13: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Crear Figuras Geom�tricas B�sicas."<<endl;
		break;
		
		case 14: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Mover un punto en toda la pantalla"<<endl;
		break;
		
		case 16: 
		cout<<"USTED SELECCIONO EL PROGRAMA: Calcular la hipotenusa"<<endl;
		break;
		
		
		default:
		cout<<"La opcion ingresada es incorrecta"<<endl;
		break;
	}
return 0;	
}
