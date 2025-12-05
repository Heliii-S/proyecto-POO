/*CLASE PARA PEDIDOS, para hacer las preguntas de relleno,
decoración y cubierta.
*/
#ifndef _PEDIDO_
#define _PEDIDO_
#include <iostream>
#include <string>
#include "Dona.h"
#include "Dona_pastel.h"
#include "Dona_levadura.h"
#include "Dona_papa.h"

class Pedido{
	private: 
		Dona donas[100];
    //crear un array y su contador para ir guardando las donas de la orden
    	int i = 0;
	public:
  		int pedir_tipodona();
  		std::string pedir_relleno();
    	std::string pedir_decoracion();
    	std::string pedir_cubierta();
    	void crear_dona(int);
  		void configurar_ultima_dona();
  		void mostrar_ticket();
	};

int Pedido::pedir_tipodona() { //este método muestra el menú
	int t;
	std::cout<<"\n1) Ordenar una dona de pastel.";
    std::cout<<"\n2) Ordenar una dona de papa.";
    std::cout<<"\n3) Ordenar una dona de levadura.";
    std::cout<<"\n4) ver el ticket hasta el momento.";
    std::cout<<"\n5) Terminar la orden.";
    std::cout<<"\nELIGE LA OPCIÓN QUE DESEES REALIZAR: ";
    std::cin>>t;
    return t;
	}

void Pedido::crear_dona(int t){ //este método crea el objeto según el tipo de dona que se quiere
	if(t==1){
		Dona_pastel d;
		donas[i] = d;
	}
	else if(t==2){
		Dona_papa d;
		donas[i]=d;
	}
	else if(t==3){
		Dona_levadura d;
		donas[i]=d;
	}
	i++;
}

void Pedido::configurar_ultima_dona(){ //aquí se asignan los valores de cubierta, relleno y decoración a las donas
	//en la posición de la última dona
	int contador = i - 1;
	donas[contador].set_cubierta(pedir_cubierta());
	donas[contador].set_relleno(pedir_relleno());
	donas[contador].set_decoracion(pedir_decoracion());
}

void Pedido::mostrar_ticket(){ //este método usa un ciclo for para mostrar el ticket
	for(int b = 0;b<i;b++){
		std::cout<<"\n------------------------\n";
		std::cout<< donas[b].datos();
		std::cout<<"\n------------------------";
	}
}
	
//Para rellenar los distintos datos
std::string Pedido::pedir_relleno(){
    std::string r;
    std::cout << "¿Qué relleno quieres? ";
    std::cin >> r;
    return r;
    }

std::string Pedido::pedir_decoracion(){
    std::string r;
    std::cout << "¿Qué decoración quieres? ";
    std::cin >> r;
    return r;
    }

std::string Pedido::pedir_cubierta(){
    std::string r;
    std::cout << "¿Qué cubierta quieres? ";
    std::cin >> r;
    return r;
    }
#endif