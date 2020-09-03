#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>

void acciones(char x);
void saldo(char x,int z);
int retiro(int x,int z);

main()
{
	int pesos=100000;
	int dolares=3000; 
	int A=1;
	int mensaje=0;
	while(A==1)
	{
		if (mensaje==1)
		{
			char fin[2];
			printf("Desea seguir operando?\n");
			printf("\nOpcion:  ");
			scanf("%s",fin);
			fin[0]=toupper(fin[0]);
			fin[1]=toupper(fin[1]);
			system("cls");
			if(fin[0]=='S'&fin[1]=='I')
			{
				printf("Volviendo al Menu Principal");
				int i;
				for(i=1;i<5;i++)
				{
					Sleep(700);
					printf(".");
				}
			}
			if(fin[0]=='N'&fin[1]=='O')
			{
				printf("Gracias por operar en el Banco Provincia, tenga un buen dia!");
				Sleep(3500);
				pesos=100000;
				dolares=3000;
			}
			
			
			
			system("cls");
			mensaje=0;
		}
		printf("Bienvenido al cajero automatico del Banco Provincia\n\n");
		printf("Seleccione la cuenta con la que desea operar:\n");
		printf("A)Caja de Ahorro en pesos\n");
		printf("B)Caja de Ahorro en dolares\n");
		printf("C)Salir\n");
		printf("\nOpcion:  ");
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
						case 1:
							int montoP;
							printf("Ingrese el monto que desea retirar:\n");
							printf("\n\nMonto:  ");
							scanf("%i",&montoP);
							retiro(pesos,montoP);
							pesos=retiro(pesos,montoP);
							break;
							
						case 2:
							
							break;
							
						case 3:
							saldo(opcion,pesos);
							break;
							
						case 4:
							B=0;
							mensaje=1;
							break;
					
							
						
					}
				}
				break;
			
			case 'B':	
				int C;
				C=1; 
				while(C==1)
				{	
					acciones(opcion);
					int tareaD;
					scanf("%i",&tareaD);
					system("cls");
					switch(tareaD)
					{
						case 1:
							int montoD;
							printf("Ingrese el monto que desea retirar:\n");
							printf("\n\nMonto:  ");
							scanf("%i",&montoD);
							retiro(dolares,montoD);
							dolares=retiro(dolares,montoD);
							break;
							
						case 2:
							
							break;
							
						case 3:
							saldo(opcion,dolares);
							break;
							
						case 4:
							C=0;
							mensaje=1;
							break;
					}
				}
				break;
			
			case 'C': 	
				mensaje=1;
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
	printf("\nOpcion:  ");
}


int retiro(int x,int z)
{
	system("cls");
	printf("Procesando solicitud.....\n");
	if(z<x|z==x)
	{
		x=x-z;
		Sleep(1500);
		printf("\nSu transaccion se ha realizado correctamente.Regresando al menu.....\n");
		Sleep(4000);
	}
	else
	{
		Sleep(1500);
		printf("\nERROR: El monto que se quiere retirar es mayor al saldo disponible. Intentelo nuevamente");
		Sleep(4000);
	}
	system("cls");
	return x;
}


void saldo(char x,int z)
{
	printf("Actualmente, usted dispone de ");
	if(x=='A')
	{
		printf("$%i en cuenta.\n",z);
	}
	if(x=='B')
	{
		printf("U$S%i en cuenta.\n",z);
	}
	system("pause");
	system("cls");
}


