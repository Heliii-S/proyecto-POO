#include <iostream>
#include <string>
#include "Dona.h"
#include "Dona_pastel.h"
#include "Dona_papa.h"
#include "Dona_levadura.h"
#include "Pedido.h"
//se incluyen las clases del proyecto

int main(){
    std::cout<<"BIENVENIDO A LA TIENDA DE DONAS";
    int r = 0, d;
    Dona pedido[100]; 
    //crear un array para ir guardando los objetos
    int i = 0;
    do{
        std::cout<<"\n1) Ordenar una dona de pastel.";
        std::cout<<"\n2) Ordenar una dona de papa.";
        std::cout<<"\n3) Ordenar una dona de levadura.";
        std::cout<<"\nELIGE LA OPCIÓN QUE DESEES REALIZAR: ";
        std::cin>>d;

        Pedido p1;
        std::string r1 = p1.pedir_cubierta();
        std::string r2 = p1.pedir_relleno();
        std::string r3 = p1.pedir_decoracion();

        if (d == 1){
            Dona_pastel dona1;
            dona1.set_cubierta(r1);
            dona1.set_relleno(r2);
            dona1.set_decoracion(r3);
            pedido[i] = dona1;
            i++;
        }
        else if (d == 2){
            Dona_papa dona2;
            dona2.set_cubierta(r1);
            dona2.set_relleno(r2);
            dona2.set_decoracion(r3);
            pedido[i] = dona2;
            i++;
        }
        else if (d == 3){
            Dona_levadura dona3;
            dona3.set_cubierta(r1);
            dona3.set_relleno(r2);
            dona3.set_decoracion(r3);
            pedido[i] = dona3;
            i++;
        }
        else{
            std::cout<<"\nERROR: Opción incorrecta.";
            break;
        }
        std::cout<<"\n¿Quieres ordenar otra dona? (0:Sí, 1:No) ";
        std::cin >> r;
    } while(r == 0);
    std::cout <<"\nAquí está el ticket de tu pedido:";
    for(int b = 0;b<i;b++){
        std::cout<<"\n------------------------\n";
        std::cout<< pedido[b].datos();
        std::cout<<"\n------------------------";
    } //con este for se muestran en la pantalla los atributos de la clase
    return 0;
}