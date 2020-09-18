#include"..\lib\funciones.c"

main()
{
	while(A==1)
	{
		p=&pesos;
		w=&dolares;
		h=&seguir;
		if (mensaje==1)
		{
			cierre(p,w);
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
							while(seguir==1)
							{
								pesos=retiro(pesos);
								estado(h);
							}
							break;
							
						case DEPOSITO:
							while(seguir==1)
							{
								pesos=deposito(pesos);
								estado(h);
							}
							break;
							
						case TRANSFER:
							while(seguir==1)
							{
								pesos=transferencia(pesos);
								estado(h);
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
				C=1; 
				while(C==1)
				{	
					tareaD=acciones(opcion);
					seguir=1;
					switch(tareaD)
					{
						case RETIRO:
							while(seguir==1)
							{
								dolares=retiro(dolares);
								estado(h);
							}
							break;
							
						case DEPOSITO:
							while(seguir==1)
							{
								dolares=deposito(dolares);
								estado(h);
							}
							break;
							
						case TRANSFER:
							while(seguir==1)
							{
								dolares=transferencia(dolares);
								estado(h);
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









