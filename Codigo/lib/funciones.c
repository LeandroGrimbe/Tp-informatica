#include "..\lib\lib.h" 

void Cierre(int *x, int *y);
int Menu(void);
void acciones(int x, int *y);
void retiro(int *x,int *y);
void deposito(int *x, int *y);
void transferencia(int *x, int *y);
void saldo(int x,int y,int *z);
int estado(void);
void apagar(void);


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



int menu(void)
{
	printf("Bienvenido al cajero automatico del Banco Provincia\n\n");
	printf("Seleccione la cuenta con la que desea operar:\n");
	printf("1)Caja de Ahorro en pesos\n");
	printf("2)Caja de Ahorro en dolares\n");
	printf("3)Salir\n");
	printf("\nOpcion:  ");
	int cuentas;
	scanf("%i",&cuentas);
	system("cls");
	return cuentas;
}




void acciones(int x, int *y)
{
	if(x==1)
	{
		printf("-Usted ha seleccionado: Caja de Ahorro en Pesos-");
	}
	if(x==2)
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
	int tareas;
	scanf("%i",&tareas);
	system("cls");
	*y=tareas;
}


void retiro(int *x, int *y)
{
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
	*y=estado();
}


void deposito(int *x, int *y)
{
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
	*y=estado();
}


void transferencia(int *x, int *y)
{
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
	*y=estado();	
}


void saldo(int x,int y, int *z)
{
	printf("Actualmente, usted dispone de ");
	if(x==1)
	{
		printf("$%i en cuenta.\n",y);
	}
	if(x==2)
	{
		printf("U$S%i en cuenta.\n\n",y);
	}
	system("pause");
	system("cls");
	*z=0;
}


int estado(void)
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
		system("cls");
		return tarea;
	}
	if(sigue[0]=='N'&sigue[1]=='O')
	{
		system("cls");
		printf("Regresando al Menu");
		for(i=1;i<5;i++)
		{
			Sleep(700);
			printf(".");
		}
		system("cls");
		return 0;
		
	}
	system("cls");
}

void apagar(void)
{
	printf("Apagando");
	for(i=1;i<5;i++)
		{
			Sleep(700);
			printf(".");
		}
}
