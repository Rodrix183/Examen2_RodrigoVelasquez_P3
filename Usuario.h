#ifndef USUARIO_H
#define USUARIO_H

#include <vector>
#include <string>

using std::string;
using std::vector;

class Usuario{
private:
  string nombre,usuario,contrasena,genero;
  int edad;
  vector<string> lista_intereses;
public:

  Usuario(string,string,string,int,string);
  ~Usuario();

  string getNombre();
  string getUsuario();
  string getContrasena();
  string getGenero();
  int getEdad();

  void setNombre(string);
  void setUsuario(string);
  void setContrasena(string);
  void setGenero(string);
  void setEdad(int);

  vector<string> getLista();
  void setLista(vector<string>);

};

#endif
