#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>

void acciones(char x);
void saldo(char x,int z);
int retiro(int x,int z);
int deposito(int x,int z);
int transferencia(int x,int z,int num);

main()
{
	int pesos=100000;
	int dolares=3000; 
	int A=1;
	int mensaje=0;
	int i;
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
				printf("Gracias, vuelva prontos");
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
		enum 
		{
			PESOS='A', DOLARES='B', SALIR='C'
		};
		enum
		{
			RETIRO=1, DEPOSITO=2, TRANSFER=3, SALDO=4, VOLVER=5
		};
		switch(opcion)
		{
			case PESOS:
				int B;
				B=1; 
				while(B==1)
				{	
					acciones(opcion);
					int tareaP;
					scanf("%i",&tareaP);
					system("cls");
					int seguir=1;
					int sigue;
					switch(tareaP)
					{
						case RETIRO:
							while(seguir==1)
							{
								int retP;
								printf("Ingrese el monto que desea retirar:\n");
								printf("\n\nMonto:  ");
								scanf("%i",&retP);
								pesos=retiro(pesos,retP);
								printf("Desea seguir con esta operacion?\n");
								printf("\n1)Si\n2)No\n");
								printf("\nOpcion:  ");
								scanf("%i",&sigue);
								if(sigue==1)
								{
									seguir=1;
								}
								if(sigue==2)
								{
									seguir=0;
									system("cls");
									printf("Regresando al Menu");
									for(i=1;i<5;i++)
									{
										Sleep(700);
										printf(".");
									}
									
								}
								system("cls");
							}
							break;
							
						case DEPOSITO:
							while(seguir==1)
							{
								int depoP;
								printf("Ingrese el monto que desea depositar:\n");
								printf("\n\nMonto:   ");
								scanf("%i",&depoP);
								pesos=deposito(pesos,depoP);
								printf("Desea seguir con esta operacion?\n");
								printf("\n1)Si\n2)No\n");
								printf("\nOpcion:  ");
								scanf("%i",&sigue);
								if(sigue==1)
								{
									seguir=1;
								}
								if(sigue==2)
								{
									seguir=0;
									system("cls");
									printf("Regresando al Menu");
									for(i=1;i<5;i++)
									{
										Sleep(700);
										printf(".");
									}
									
								}
								system("cls");
							}
							break;
							
						case TRANSFER:
							while(seguir==1)
							{
								int cbuP;
								int transP;
								printf("Para realizar una transferencia, por favor introduzca el CBU del destinatario, y el monto correspondiente: \n");
								printf("\n\nCBU (5 digitos):   ");
								scanf("%i",&cbuP);
								printf("\nMonto:   ");
								scanf("%i",&transP);
								pesos=transferencia(pesos,transP,cbuP);
								printf("Desea seguir con esta operacion?\n");
								printf("\n1)Si\n2)No\n");
								printf("\nOpcion:  ");
								scanf("%i",&sigue);
								if(sigue==1)
								{
									seguir=1;
								}
								if(sigue==2)
								{
									seguir=0;
									system("cls");
									printf("Regresando al Menu");
									for(i=1;i<5;i++)
									{
										Sleep(700);
										printf(".");
									}
									
								}
								system("cls");
							}
							break;
							
						case SALDO:
							saldo(opcion,pesos);
							break;
							
						case VOLVER:
							B=0;
							mensaje=1;
							break;
					
							
						
					}
				}
				break;
			
			case DOLARES:	
				int C;
				C=1; 
				while(C==1)
				{	
					acciones(opcion);
					int tareaD;
					scanf("%i",&tareaD);
					system("cls");
					int seguir=1;
					int sigue;
					switch(tareaD)
					{
						case RETIRO:
							while(seguir==1)
							{
								int retD;
								printf("Ingrese el monto que desea retirar:\n");
								printf("\n\nMonto:  ");
								scanf("%i",&retD);
								dolares=retiro(dolares,retD);
								printf("Desea seguir con esta operacion?\n");
								printf("\n1)Si\n2)No\n");
								printf("\nOpcion:  ");
								scanf("%i",&sigue);
								if(sigue==1)
								{
									seguir=1;
								}
								if(sigue==2)
								{
									seguir=0;
									system("cls");
									printf("Regresando al Menu");
									for(i=1;i<5;i++)
									{
										Sleep(700);
										printf(".");
									}
									
								}
								system("cls");
							}
							break;
							
						case DEPOSITO:
							while(seguir==1)
							{
								int depoD;
								printf("Ingrese el monto que desea depositar:\n");
								printf("\n\nMonto:   ");
								scanf("%i",&depoD);
								dolares=deposito(dolares,depoD);
								printf("Desea seguir con esta operacion?\n");
								printf("\n1)Si\n2)No\n");
								printf("\nOpcion:  ");
								scanf("%i",&sigue);
								if(sigue==1)
								{
									seguir=1;
								}
								if(sigue==2)
								{
									seguir=0;
									system("cls");
									printf("Regresando al Menu");
									for(i=1;i<5;i++)
									{
										Sleep(700);
										printf(".");
									}
									
								}
								system("cls");
							}
							break;
							
						case TRANSFER:
							while(seguir==1)
							{
								int cbuD;
								int transD;
								printf("Para realizar una transferencia, por favor introduzca el CBU del destinatario, y el monto correspondiente: \n");
								printf("\n\nCBU (5 digitos):   ");
								scanf("%i",&cbuD);
								printf("\nMonto:   ");
								scanf("%i",&transD);
								dolares=transferencia(dolares,transD,cbuD);
								printf("Desea seguir con esta operacion?\n");
								printf("\n1)Si\n2)No\n");
								printf("\nOpcion:  ");
								scanf("%i",&sigue);
								if(sigue==1)
								{
									seguir=1;
								}
								if(sigue==2)
								{
									seguir=0;
									system("cls");
									printf("Regresando al Menu");
									for(i=1;i<5;i++)
									{
										Sleep(700);
										printf(".");
									}
									
								}
								system("cls");
							}
							break;
							
						case SALDO:
							saldo(opcion,dolares);
							break;
							
						case VOLVER:
							C=0;
							mensaje=1;
							break;
					}
				}
				break;
			
			case SALIR: 	
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
	printf("\n2)Depositar dinero");
	printf("\n3)Transferir dinero");
	printf("\n4)Ver saldo disponible");
	printf("\n5)Volver al menu principal\n");
	printf("\nOpcion:  ");
}


int retiro(int x,int z)
{
	system("cls");
	printf("Procesando solicitud");
	int i;
	for(i=1;i<5;i++)
	{
		Sleep(700);
		printf(".");
	}
	if(z<0|z>x)
	{
		printf("\n\nERROR: El monto que se quiere retirar es mayor al saldo disponible, o ha introducido un valor invalido. Intentelo nuevamente");
		Sleep(4000);		
	}
	else
	{
		x=x-z;
		printf("\n\nSu retiro se ha realizado correctamente.");
		Sleep(3000);
	}
	system("cls");
	return x;
}


int deposito(int x,int z)
{
	system("cls");
	printf("Procesando solicitud");
	int i;
	for(i=1;i<5;i++)
	{
		Sleep(700);
		printf(".");
	}
	if(z>0)
	{
		x=x+z;
		printf("\n\nSu deposito se ha realizado correctamente.");
		Sleep(3000);
	}
	else
	{
		printf("\n\nERROR: El monto que se quiere depositar es erroneo o es nulo. Intentelo nuevamente");
		Sleep(4000);
	}
	system("cls");
	return x;
}


int transferencia(int x,int z,int num)
{
	system("cls");
	printf("Procesando");
	int i;
	for(i=1;i<5;i++)
	{
		Sleep(700);
		printf(".");
	}
	if(num==11111)
	{
		printf("\n\nEl Nro de CBU: -11111- corresponde a:\n\n");
		printf("-RIQUELME, JUAN ROMAN\n\n");
		printf("Desea proseguir con la operacion?\n");
		char rta[2];
		printf("\nOpcion:  ");
		scanf("%s",rta);
		rta[0]=toupper(rta[0]);
		rta[1]=toupper(rta[1]);
		system("cls");
		if(rta[0]=='S'&rta[1]=='I')
		{
			printf("Confirmando Transferencia");
			int i;
			for(i=1;i<5;i++)
			{
			Sleep(500);
			printf(".");
			}
			if(z<0|z>x)
			{
				printf("\n\nERROR: El monto que se quiere transferir es mayor al saldo disponible, o ha introducido un valor invalido. Intentelo nuevamente");
				Sleep(4000);		
			}
			else
			{
				x=x-z;
				printf("\n\nSu transferencia se ha realizado correctamente.");
				Sleep(3000);
			}
		}
		if(rta[0]=='N'&rta[1]=='O')
		{
			printf("Regresando al Menu");
			int i;
			for(i=1;i<5;i++)
			{
			Sleep(500);
			printf(".");
			}
		}
	}
	if(num==22222)
	{
		printf("\n\nEl Nro de CBU: -22222- corresponde a:\n\n");
		printf("-GONZALES, TOMAS ADRIAN\n\n");
		printf("Desea proseguir con la operacion?\n");
		char rta[2];
		printf("\nOpcion:  ");
		scanf("%s",rta);
		rta[0]=toupper(rta[0]);
		rta[1]=toupper(rta[1]);
		system("cls");
		if(rta[0]=='S'&rta[1]=='I')
		{
			printf("Confirmando Transferencia");
			int i;
			for(i=1;i<5;i++)
			{
			Sleep(500);
			printf(".");
			}
			if(z<0|z>x)
			{
				printf("\n\nERROR: El monto que se quiere transferir es mayor al saldo disponible, o ha introducido un valor invalido. Intentelo nuevamente");
				Sleep(4000);		
			}
			else
			{
				x=x-z;
				printf("\n\nSu transferencia se ha realizado correctamente.");
				Sleep(3000);
			}
		}
		if(rta[0]=='N'&rta[1]=='O')
		{
			printf("Regresando al Menu");
			int i;
			for(i=1;i<5;i++)
			{
			Sleep(500);
			printf(".");
			}
		}
		
	}
	if(num!=11111&num!=22222)
	{
		printf("\nCBU no encontrado. Intente nuevamente");
		Sleep(3000);	
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


