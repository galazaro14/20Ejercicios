//Tabla de multiplicar 

#include <iostream>
using namespace std;
int main(void){
	 
	 int N;
	 
	 cout<<"Ingrese un numero: "<<endl;
	 cin>>N;
	 cout<<endl;
	 
	 for(int i=1;i<=10;i++){
	 	cout<<N<<" x "<<i<<" = "<<N*i<<endl;
	 }

	/*
	N=5
	
	5 x 1 = 5
	5 x 2 = 10
	.
	.
	.
	.
	5 x 10 = 50	 
	 */
system("pause");
}
