//CLASE PADRE: DONA
#ifndef _DONA_
#define _DONA_
#include <iostream>
#include <string>
#include <sstream>

class Dona{
    private:
        std::string relleno;
        std::string cubierta;
        std::string decoracion;
    protected:
        std::string masa; 
        //cada clase hija va a tener una masa diferente
    public:
        Dona():relleno("Sin relleno"),cubierta("Sin cubierta"),decoracion("Sin decoracion"),masa("Sin definir"){};
        Dona(std::string r,std::string c,std::string d): relleno(r), cubierta(c), decoracion(d){};
        Dona(const std::string& m): masa(m), relleno("Sin relleno."),cubierta("Sin cubierta."), decoracion("Sin decoración."){};
        //constructor para agregar la masa en las clases hijas, & se usa para poder modificar el objeto
        std::string get_relleno();
        std::string get_cubierta();
        std::string get_decoracion();
        std::string get_masa();
        void set_relleno(std::string);
        void set_cubierta(std::string);
        void set_decoracion(std::string);
        std::string datos(); //método para poder mostrar los atributos al final en el ticket
};

//DECLARACIÓN DE TODOS LOS MÉTODOS DE LA CLASE DONA:
std::string Dona::get_relleno(){
  return relleno;
}

std::string Dona::get_cubierta(){
  return cubierta;
}
std::string Dona::get_decoracion(){
  return decoracion;
}

std::string Dona::get_masa(){
  return masa;
}

void Dona::set_relleno(std::string r){
  relleno = r;
}

void Dona::set_cubierta(std::string r){
  cubierta = r;
}

void Dona::set_decoracion(std::string r){
  decoracion = r;
}

std::string Dona::datos(){
  std::stringstream texto;
  texto << "Masa: " << masa << "\n";
  texto << "Relleno: " << relleno << "\n";
  texto << "Cubierta: " << cubierta << "\n";
  texto << "Decoración: " << decoracion << "\n";
  return texto.str();
}

#endif