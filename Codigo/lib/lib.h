#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>

int *p;
int *d;
int *s;
int *ta;
int opcion=0;
int pesos=100000;
int dolares=3000; 
int A=1;
char cambio='Y';
int mensaje=0;	
int i;
int sigue;
int tarea=0;

enum 
{
	MENU=0, PESOS=1, DOLARES=2, SALIR=3, FIN=334
};
enum
{
	TAREAS=0, RETIRO=1, DEPOSITO=2, TRANSFER=3, SALDO=4, VOLVER=5
};
