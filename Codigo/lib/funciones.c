#include "..\lib\lib.h" 

void acciones(char x);
void saldo(char x,int z);
int retiro(int x,int z);
int deposito(int x,int z);
int transferencia(int x,int z,int num);


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

