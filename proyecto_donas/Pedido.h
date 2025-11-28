/*CLASE PARA PEDIDOS, para hacer las preguntas de relleno,
decoración y cubierta.
*/
#ifndef _PEDIDO_
#define _PEDIDO_
#include <iostream>
#include <string>

class Pedido{
  public:
    std::string pedir_relleno(){
      std::string r;
      std::cout << "¿Qué relleno quieres? ";
      std::cin >> r;
      return r;
    }

    std::string pedir_decoracion(){
      std::string r;
      std::cout << "¿Qué decoración quieres? ";
      std::cin >> r;
      return r;
    }

    std::string pedir_cubierta(){
      std::string r;
      std::cout << "¿Qué cubierta quieres? ";
      std::cin >> r;
      return r;
    }
};

#endif