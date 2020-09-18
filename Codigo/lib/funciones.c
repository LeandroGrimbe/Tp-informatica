#include "..\lib\lib.h" 

void Cierre(int *x, int *y);
char Menu(void);
int acciones(char x);
void retiro(int *x);
void deposito(int *x);
void transferencia(int *x);
void saldo(char x,int z);
void estado(int *x);


void cierre(int *x,int *y)
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
		*x=100000;
		*y=3000;
	}
	system("cls");
}



char menu(void)
{
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
	return opcion;
}



int acciones(char x)
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
	int tarea;
	scanf("%i",&tarea);
	system("cls");
	return tarea;
}


void retiro(int *x)
{
	while(seguir==1)
	{
		h=&seguir;
		int ret;
		printf("Ingrese el monto que desea retirar:\n");
		printf("\n\nMonto:  ");
		scanf("%i",&ret);
		system("cls");
		printf("Procesando solicitud");
		int i;
		for(i=1;i<5;i++)
		{
			Sleep(700);
			printf(".");
		}
		if(ret<0|ret>*x)
		{
			printf("\n\nERROR: El monto que se quiere retirar es mayor al saldo disponible, o ha introducido \nun valor invalido. Intentelo nuevamente");
			Sleep(4000);		
		}
		else
		{
			*x=*x-ret;
			printf("\n\nSu retiro se ha realizado correctamente.");
			Sleep(3000);
		}
		system("cls");
		estado(h);
	}
}


void deposito(int *x)
{
	while(seguir==1)
	{
		h=&seguir;
		int depo;
		printf("Ingrese el monto que desea depositar:\n");
		printf("\n\nMonto:   ");
		scanf("%i",&depo);
		system("cls");
		printf("Procesando solicitud");
		int i;
		for(i=1;i<5;i++)
		{
			Sleep(700);
			printf(".");
		}
		if(depo>0)
		{
			*x=*x+depo;
			printf("\n\nSu deposito se ha realizado correctamente.");
			Sleep(3000);
		}
		else
		{
			printf("\n\nERROR: El monto que se quiere depositar es erroneo o es nulo. \nIntentelo nuevamente");
			Sleep(4000);
		}
		system("cls");
		estado(h);
	}
}


void transferencia(int *x)
{
	while(seguir==1)
	{
		h=&seguir;
		int cbu;
		int trans;	
		printf("Para realizar una transferencia, por favor introduzca el CBU del destinatario, y el monto correspondiente: \n");
		printf("\n\nCBU (5 digitos):   ");
		scanf("%i",&cbu);
		printf("\nMonto:   ");
		scanf("%i",&trans);
		system("cls");
		printf("Procesando");
		int i;
		for(i=1;i<5;i++)
		{
			Sleep(700);
			printf(".");
		}
		if(cbu==11111)
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
				if(trans<0|trans>*x)
				{
					printf("\n\nERROR: El monto que se quiere transferir es mayor al saldo disponible, o ha introducido \nun valor invalido. Intentelo nuevamente");
					Sleep(4000);		
				}
				else
				{
					*x=*x-trans;
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
		if(cbu==22222)
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
				if(trans<0|trans>*x)
				{
					printf("\n\nERROR: El monto que se quiere transferir es mayor al saldo disponible, o ha \nintroducido un valor invalido. Intentelo nuevamente");
					Sleep(4000);		
				}
				else
				{
					*x=*x-trans;
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
		if(cbu!=11111&cbu!=22222)
		{
			printf("\nCBU no encontrado. Intente nuevamente");
			Sleep(3000);	
		}
		system("cls");
		estado(h);
	}
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
		printf("U$S%i en cuenta.\n\n",z);
	}
	system("pause");
	system("cls");
}


void estado(int *x)
{
	char sigue[2];
	printf("Desea seguir con esta operacion?\n");
	printf("\nOpcion:  ");
	scanf("%s",sigue);
	sigue[0]=toupper(sigue[0]);
	sigue[1]=toupper(sigue[1]);
	system("cls");
	if(sigue[0]=='S'&sigue[1]=='I')
	{
		*x=1;
	}
	if(sigue[0]=='N'&sigue[1]=='O')
	{
		*x=0;
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
