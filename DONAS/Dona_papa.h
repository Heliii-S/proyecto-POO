//CLASE HIJO DOS: DONA_PAPA
#ifndef _DONA_PAPA_
#define _DONA_PAPA_
#include <iostream>
#include <string>
#include "Dona.h"

class Dona_papa: public Dona{
    public:
        Dona_papa(): Dona("papa"){}
//USA UNO DE LOS CONSTRUCTORES DE DONA PARA ASIGNAR EL VALOR DE MASA
};

#endif