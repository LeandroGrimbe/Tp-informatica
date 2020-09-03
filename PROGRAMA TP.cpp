#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>

void acciones(char x);

main()
{
	int A=1;
	int mensaje=0;
	while(A==1)
	{
		if (mensaje==1)
		{
			char x;
			printf("Gracias por operar en el Banco Provincia, tenga un buen dia!");
			Sleep(3500);
			system("cls");
			mensaje=0;		
		}
		printf("Bienvenido al cajero automatico del Banco Provincia\n\n");
		printf("Seleccione la cuenta con la que desea operar:\n");
		printf("A)Caja de Ahorro en pesos\n");
		printf("B)Caja de Ahorro en dolares\n");
		printf("C)Salir\n");
		printf("\nOpcion:");
		char opcion;
		scanf("%c",&opcion);
		opcion=toupper(opcion);
		system("cls");
		switch(opcion)
		{
			case 'A':
				
			int B;
			B=1; 
			while(B==1)
			{	
				acciones(opcion);
				int tareaP;
				scanf("%i",&tareaP);
				system("cls");
				switch(tareaP)
				{
				
						
					
				}
			}

		
			break;
			
			case 'B':
				
			int B;
			B=1; 
			while(B==1)
			{	
				acciones(opcion);
				int tareaD;
				scanf("%i",&tareaD);
				system("cls");
				switch(tareaD)
				{
				
						
					
				}
			}
			
			
			break;
			
			case 'C': 	
			
			mensaje=1;
			break;
			
			default: 
			printf("Opcion incorrecta, volviendo al Menu Principal.....");
			Sleep(2500);
			system("cls");
			break;
		}
	}	
}

void acciones(char x)
{
	if(x=='A')
	{
		printf("-Usted ha seleccionado: Caja de Ahorro en Pesos-");
	}
	if(x=='B')
	{
		printf("-Usted ha seleccionado: Caja de Ahorro en Dolares-");
	}
	printf("\n\nAcciones disponibles:");
	printf("\n1)Retirar dinero");
	printf("\n2)Transferir dinero");
	printf("\n3)Ver saldo disponible");
	printf("\n4)Volver al menu principal\n");

}


