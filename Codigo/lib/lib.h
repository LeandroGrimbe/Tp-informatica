#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>

void cierre(int *x, int *y);
int menu(void);
void acciones(int x, int *y);
void retiro(int *x,int *y);
void deposito(int *x, int *y);
void transferencia(int *x, int *y);
void saldo(int x,int y,int *z);
int estado(int x);

enum 
{
	MENU=0, PESOS=1, DOLARES=2, SALIR=3, 
	
	TAREAS=0, RETIRO=1, DEPOSITO=2, TRANSFER=3, SALDO=4, VOLVER=5
};
