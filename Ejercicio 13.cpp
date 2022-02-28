#include<iostream>
using namespace std;

main(){
char mat[5][5];

cout<<"__Imprimir un cuadrado__"<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		if(i==0 or i==4)
		
			mat[i][j]='x';
		if(j==0 or j==4)
			mat[i][j]='x';	
	}
}
for (int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		cout<<mat[i][j]<<" ";	
		}
		cout<<endl;
}
}
