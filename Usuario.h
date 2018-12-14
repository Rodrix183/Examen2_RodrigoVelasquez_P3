#ifndef USUARIO_H
#define USUARIO_H

#include <vector>
#include <string>
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;
using std::ostream;

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

  void read(ifstream&);
  void write(ostream&);

  friend ostream& operator<<(ostream&,Usuario*);

};

#endif
