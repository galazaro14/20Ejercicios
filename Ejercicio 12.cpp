#include<iostream>

using namespace std;

int main(){
	int digitohex[20];
	int decimal, residuo, resultado, i = 0;
	
	cout<<"Ingrese el numero decimal a convertir: "<<endl;
	cin>>decimal;
	
	do{
		residuo = decimal%16;
		resultado =decimal/16;
		digitohex[i]= residuo;
		decimal = resultado;
		i++;
	}while(resultado > 15);
	
	digitohex[i] = resultado;
	
	cout<<"El resultado en hexadecimal es: ";
	
	for(int j=i;j>=0;j--){
		if(digitohex[j] == 10){
			cout<< "A";
		}
		else if(digitohex[j] == 11){
			cout<<"B";
		}
		else if(digitohex[j] == 12){
			cout<<"C";
		}
		else if(digitohex[j] == 13){
			cout<<"D";
		}
		else if(digitohex[j] == 14){
			cout<<"E";
		}
		else if(digitohex[j] == 15){
			cout<<"F";
		}
		else{
			cout<<digitohex[j];
		}
	}
	cout<<endl;
}
