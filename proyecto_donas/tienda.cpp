#include <iostream>
#include <string>
#include "dona_papa.h"
#include "dona_levadura.h"
#include "dona_pastel.h"

int main(){
  int r;
  std::string temp;

  std::cout<<"Estas ordenando una dona de papa: ";
  dona_papa dona1;
  std::cout<<"\n¿Quieres tu dona con relleno? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué relleno quieres?: ";
    std::cin>> temp;
    dona1.set_relleno(temp);
    }
  std::cout<<"\n¿Quieres tu dona con cubierta? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué cubierta quieres?: ";
    std::cin>> temp;
    dona1.set_cubierta(temp);
    }
  std::cout<<"\n¿Quieres tu dona con decoración? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué decoración quieres?: ";
    std::cin>> temp;
    dona1.set_decoracion(temp);
    }
  std::cout<<"\nEstas ordenando una dona pastel: ";
  dona_pastel dona2;
  std::cout<<"\n¿Quieres tu dona con relleno? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué relleno quieres?: ";
    std::cin>> temp;
    dona2.set_relleno(temp);
    }
  std::cout<<"\n¿Quieres tu dona con cubierta? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué cubierta quieres?: ";
    std::cin>> temp;
    dona2.set_cubierta(temp);
    }
  std::cout<<"\n¿Quieres tu dona con decoración? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué decoración quieres?: ";
    std::cin>> temp;
    dona2.set_decoracion(temp);
    }
    
  dona_levadura dona3;
std::cout<<"\nEstas ordenando una dona de levadura: ";
  std::cout<<"\n¿Quieres tu dona con relleno? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué relleno quieres?: ";
    std::cin>> temp;
    dona3.set_relleno(temp);
    }
  std::cout<<"\n¿Quieres tu dona con cubierta? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué cubierta quieres?: ";
    std::cin>> temp;
    dona3.set_cubierta(temp);
    }
  std::cout<<"\n¿Quieres tu dona con decoración? (Sí 1, NO 0): ";
  std::cin>> r;
  if (r == 1){
    std::cout<<"\n¿Qué decoración quieres?: ";
    std::cin>> temp;
    dona3.set_decoracion(temp);
    }

  std::cout<<"\n-----------------------------";
  std::cout<<"\nDATOS DE TU PEDIDO DE DONAS: ";
std::cout<<"\n-----------------------------";
  std::cout<<"\nDONA DE PAPA: ";
  std::cout<<"\nRELLENO: "<<dona1.get_relleno();
  std::cout<<"\nCUBIERTA: "<<dona1.get_cubierta();
  std::cout<<"\nDECORACIÓN: "<<dona1.get_decoracion();
std::cout<<"\n-----------------------------";
  std::cout<<"\nDONA DE PASTEL: ";
  std::cout<<"\nRELLENO: "<<dona2.get_relleno();
  std::cout<<"\nCUBIERTA: "<<dona2.get_cubierta();
  std::cout<<"\nDECORACIÓN: "<<dona2.get_decoracion();
    std::cout<<"\n-----------------------------";
  std::cout<<"\nDONA DE LEVADURA: ";
  std::cout<<"\nRELLENO: "<<dona3.get_relleno();
  std::cout<<"\nCUBIERTA: "<<dona3.get_cubierta();
  std::cout<<"\nDECORACIÓN: "<<dona3.get_decoracion();
  return 0;
}