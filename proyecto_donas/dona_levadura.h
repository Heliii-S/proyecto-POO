#include <iostream>
#include <string>

class dona_levadura{
    private:
        std::string relleno = "Sin relleno.";
        std::string cubierta = "Sin cubierta.";
        std::string decoracion = "Sin decoración.";
    public:
        dona_levadura()=default; //inicializando constructores
        dona_levadura(std::string r,std::string c,std::string d): relleno(r), cubierta(c), decoracion(d){};
        std::string get_relleno();
        std::string get_cubierta();
        std::string get_decoracion();
        void set_relleno(std::string);
        void set_cubierta(std::string);
        void set_decoracion(std::string);
};


std::string dona_levadura::get_relleno(){
  return relleno;
}

std::string dona_levadura::get_cubierta(){
  return cubierta;
}
std::string dona_levadura::get_decoracion(){
  return decoracion;
}

void dona_levadura::set_relleno(std::string r){
  relleno = r;
}

void dona_levadura::set_cubierta(std::string r){
  cubierta = r;
}

void dona_levadura::set_decoracion(std::string r){
  decoracion = r;
}