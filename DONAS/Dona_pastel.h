//CLASE HIJO UNO: DONA_PASTEL
#ifndef _DONA_PASTEL_
#define _DONA_PASTEL_
#include <iostream>
#include <string>
#include "Dona.h"

class Dona_pastel: public Dona{
    public:
        Dona_pastel(): Dona("pastel"){} 
//USA UNO DE LOS CONSTRUCTORES DE DONA PARA ASIGNAR EL VALOR DE MASA
};

#endif