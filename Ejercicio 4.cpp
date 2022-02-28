#include<iostream>
#include<string.h>

using namespace std;

int main(){
	string palabra;
	string palindroma;
	int i = 0;
	cout<<"\nIngrese una palabra para verificar: ";
	cin>>palabra;
	
	for(i=palabra.size()-1;i>=0;i--){
		palindroma += palabra[i];
	}
	
	if(palabra == palindroma){
		cout<<endl;
		cout<<"La palabra "<<palabra<<" es palindroma";
	}else{
		cout<<"La palabra "<<palabra<<" NO es palindroma";
	}
	return 0;	
}
