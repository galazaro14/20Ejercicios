#include<stdio.h>
#include<conio.h>

main()
{
	
	int var, h;
	printf("Ingresa un numero: ");
	scanf("%d", &var);
	h=var%2;
	
	if(h==0)
	{
		printf("par");
		
	}
	else
	{
		printf("impar");
	}
	getch();

}
