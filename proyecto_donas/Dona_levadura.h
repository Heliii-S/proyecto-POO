//CLASE HIJO TRES: DONA_LEVADURA
#ifndef _DONA_LEVADURA_
#define _DONA_LEVADURA_
#include <iostream>
#include <string>
#include "Dona.h"

class Dona_levadura: public Dona{
    public:
        Dona_levadura(): Dona("levadura"){}
//USA UNO DE LOS CONSTRUCTORES DE DONA PARA ASIGNAR EL VALOR DE MASA
};


#endif