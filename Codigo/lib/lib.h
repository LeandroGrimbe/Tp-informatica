#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>

char opcion;
int *p;
int *d;
int *h;
int pesos=100000;
int dolares=3000; 
int A=1;
int mensaje=0;	
int i;
int sigue;
int seguir;
int tareaP;
int tareaD;
int B;
int C;

enum 
{
	PESOS='A', DOLARES='B', SALIR='C'
};
enum
{
	RETIRO=1, DEPOSITO=2, TRANSFER=3, SALDO=4, VOLVER=5
};
