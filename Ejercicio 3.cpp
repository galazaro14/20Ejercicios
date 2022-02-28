/* Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa
1 kilometro = 0.621371 millas
1 milla = 1.60934 kilometros

1 metro = 39.3701 pulgadas
1 pulgada = 0.0254 metros

1 libra = 0.454 kilos 
1 kilo = 2.205 libras
*/

#include<iostream>
using namespace std;
int main(void){
	
	int opcion;
	double millas,kilometros,metros,pulgadas,kilos,libras;
	
	cout<<"Ingrese una opcion: "<<endl;
	cout<<"1. kilometros a millas"<<endl;
	cout<<"2. millas a kilometros"<<endl;
	cout<<"3. pulgadas a metros"<<endl;
	cout<<"4. metros a pulgadas"<<endl;
	cout<<"5. libras a kilos"<<endl;
	cout<<"6. kilos a libras"<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1: 
		cout<<"KILOMETROS A MILLAS"<<endl;
		cin>>kilometros;
		millas = kilometros * 0.621371;
		cout.precision(4);
		cout<< kilometros << " KILOMETROS EQUIVALEN A : "<< millas<<" MILLAS"<<endl;
		break;
		
		case 2: cout<<"MILLAS A KILOMETROS"<<endl; 
		cin>>millas;
		kilometros = millas * 1.60934;
		cout.precision(4);
		cout<< millas << " MILLAS EQUIVALEN A : "<< kilometros<<" KILOMETROS"<<endl;
		break;
		
		case 3: cout<<"PULGADAS A METROS"<<endl; 
		cin>>pulgadas;
		metros = pulgadas * 0.0254;
		cout.precision(4);
		cout<< pulgadas << " PULGADAS EQUIVALEN A : "<< metros<<" METROS"<<endl;
		break;
		
		case 4: cout<<"METROS A PULGADAS"<<endl; 
		cin>>metros;
		pulgadas = metros * 39.3701;
		cout.precision(4);
		cout<< metros << " METROS EQUIVALEN A : "<< pulgadas<<" PULGADAS"<<endl;
		break;
		
		case 5: cout<<"LIBRAS A KILOS"<<endl; 
		cin>>libras;
		kilos = libras * 0.454;
		cout.precision(4);
		cout<< libras << " LIBRAS EQUIVALEN A : "<< kilos<<" KILOS"<<endl;
		break;
		
		case 6: cout<<"KILOS A LIBRAS"<<endl; 
		cin>>kilos;
		libras = kilos * 2.205;
		cout.precision(4);
		cout<< kilos << " KILOS EQUIVALEN A : "<< libras<<" LIBRAS"<<endl;
		break;
		
	default:
		cout<<"La opción ingresada es incorrecta"<<endl;
		break;
	}
return 0;	
}
