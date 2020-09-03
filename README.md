# Tp-informatica

Maquina de estados: Cajero automatico

## Memoria descriptiva

En este caso, el sistema que voy a representar como una maquina de estados sera el funcionamiento de un cajero automatico.
El usuario dispondra inicialmente de un menu principal, donde tendra como opciones el tipo de cuenta sobre la cual quiere operar (dolares o pesos).

Ni bien la elija, este dispondra de otro menu donde podra elegir la accion que desea realizar sobre dicha cuenta (retirar, depositar y transferir dinero, o ver saldo), y a su vez, una ultima opcion que le permita volver al menu principal, la cual en caso de ser rechazada, el sistema volvera a mostrar las acciones mencionadas anteriormente.

El saldo de la cuenta tendra un valor "x" por defecto (ficticio), y al usuario se le mostrara un mensaje de error en caso de que la suma que se quiere retirar o transferir sea mayor al saldo actual.

Al utilizar la funcion de retiro de dinero, el usuario dispondra de un limite de extraccion diario, en el cual, en caso de superarlo, le mostrara un mensaje de advertencia.

Al utilizar la funcion de transferencia de dinero, el sistema le requerira que introduzca el CBU del destinatario, y mostrará su nombre si se ingresó correctamente (se dispondran de datos precargados para su funcionamiento).

Cuando el sistema termine de realizar alguna de las operaciones, se le notificara al usuario, y se le consultara si requiere realizar otra operacion, o volver al menu principal.

En el cierre del sistema, se le hara saber al usuario que ya puede "retirar su tarjeta del cajero".



## Diagrama

![Máquina de estados](https://user-images.githubusercontent.com/64466571/91104359-01c3df80-e644-11ea-9f08-f6518ccbd013.png)





