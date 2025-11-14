#include <iostream>
#include <string>

class dona_pastel{
    private:
        std::string relleno = "Sin relleno.";
        std::string cubierta = "Sin cubierta.";
        std::string decoracion = "Sin decoración.";
    public:
        dona_pastel() = default; //inicializando constructores
        dona_pastel(std::string r,std::string c,std::string d): relleno(r), cubierta(c), decoracion(d){};
        std::string get_relleno();
        std::string get_cubierta();
        std::string get_decoracion();
        void set_relleno(std::string);
        void set_cubierta(std::string);
        void set_decoracion(std::string);
};


std::string dona_pastel::get_relleno(){
  return relleno;
}

std::string dona_pastel::get_cubierta(){
  return cubierta;
}
std::string dona_pastel::get_decoracion(){
  return decoracion;
}

void dona_pastel::set_relleno(std::string r){
  relleno = r;
}

void dona_pastel::set_cubierta(std::string r){
  cubierta = r;
}

void dona_pastel::set_decoracion(std::string r){
  decoracion = r;
}