#include "..\lib\lib.h" 

main()
{
	int opcion=0; 
	int mensaje=0;
	int pesos=100000;
	int dolares=3000;
	int *p;
	p=&pesos;
	int *d;
	d=&dolares;
	int *ta;
	ta=&tarea;
	while(1)
	{
		if (mensaje==1)
		{	
			cierre(p,d);
			mensaje=0;
			opcion=0;
			*ta=0;
		}
		switch(opcion)
		{
			case MENU:
				opcion=menu();
				break;
				
			case PESOS:
				switch(tarea)
				{
					case TAREAS:
						acciones(opcion,ta);
						break;
						
					case RETIRO:
						retiro(p,ta);
						break;
						
					case DEPOSITO:
						deposito(p,ta);
						break;
						
					case TRANSFER:
						transferencia(p,ta);
						break;
						
					case SALDO:
						saldo(opcion,pesos,ta);
						break;
						
					case VOLVER:
						mensaje=1;
						break;
				}
				break;
			
			case DOLARES:
				switch(tarea)
				{
					case TAREAS:
						acciones(opcion,ta);
						break;
						
					case RETIRO:
						retiro(d,ta);
						break;
						
					case DEPOSITO:
						deposito(d,ta);
						break;
						
					case TRANSFER:
						transferencia(d,ta);
						break;
						
					case SALDO:
						saldo(opcion,dolares,ta);
						break;
						
					case VOLVER:
						mensaje=1;
						break;
				}
				break;
			
			case SALIR: 
				mensaje=1;
				break;
		}
	}	
}









