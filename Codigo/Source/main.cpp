#include"..\lib\funciones.c"

main()
{
	while(A==1)
	{
		p=&pesos;
		d=&dolares;
		if (mensaje==1)
		{
			cierre(p,d);
			mensaje=0;
		}
		opcion=menu();
		switch(opcion)
		{
			case PESOS:
				B=1; 
				while(B==1)
				{	
					tareaP=acciones(opcion);
					seguir=1;
					switch(tareaP)
					{
						case RETIRO:
							retiro(p);
						break;
							
						case DEPOSITO:
							deposito(p);
						break;
							
						case TRANSFER:
							transferencia(p);
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
				C=1; 
				while(C==1)
				{	
					tareaD=acciones(opcion);
					seguir=1;
					switch(tareaD)
					{
						case RETIRO:
							retiro(d);
						break;
							
						case DEPOSITO:
							deposito(d);
						break;
							
						case TRANSFER:
							transferencia(d);
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









