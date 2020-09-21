#include"..\lib\funciones.c"

main()
{
	while(A==1)
	{
		p=&pesos;
		d=&dolares;
		s=&submenu;
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
				submenu=1; 
				while(B==1)
				{
					if(submenu==1)
					{
						tareaP=acciones(opcion);
					}
					switch(tareaP)
					{
						case RETIRO:
							retiro(p,s);
						break;
							
						case DEPOSITO:
							deposito(p,s);
						break;
							
						case TRANSFER:
							transferencia(p,s);
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
				submenu=1; 
				while(C==1)
				{
					if(submenu==1)
					{
						tareaD=acciones(opcion);
					}
					switch(tareaD)
					{
						case RETIRO:
							retiro(d,s);
						break;
							
						case DEPOSITO:
							deposito(d,s);
						break;
							
						case TRANSFER:
							transferencia(d,s);
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









