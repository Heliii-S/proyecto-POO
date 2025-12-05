#include <iostream>
#include "Pedido.h"
//se incluye la clase pedido, a partir de ahí se maneja la orden

int main(){
	Pedido p1;
	int d;
    std::cout<<"BIENVENIDO A LA TIENDA DE DONAS";
    while(true){
	    d = p1.pedir_tipodona();
        if (d == 4){
        	std::cout <<"\nAquí está el ticket de tu pedido hasta el momento:";
            p1.mostrar_ticket(); //esta función usa un ciclo for para mostrar la orden
            continue;
        }
        else if (d == 5){
            break;
        }
        //crear la dona según su masa y configurarla usando la clase pedido
        p1.crear_dona(d);
        p1.configurar_ultima_dona();
    } 
    std::cout <<"\nAquí está el ticket de tu pedido:";
    p1.mostrar_ticket(); //esta función usa un ciclo for para mostrar la orden
    return 0;
}