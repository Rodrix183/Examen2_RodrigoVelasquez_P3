#include "Usuario.h"
#include <iostream>

using std::cout;
using std::endl;

Usuario::Usuario(string name,string user,string pass,int age,string gender){
  nombre = name;
  usuario = user;
  contrasena = pass;
  edad = age;
  genero = gender;
}
Usuario::~Usuario(){

}

string Usuario::getNombre(){
  return nombre;
}
string Usuario::getUsuario(){
  return usuario;
}
string Usuario::getContrasena(){
  return contrasena;
}
string Usuario::getGenero(){
  return genero;
}
int Usuario::getEdad(){
  return edad;
}

void Usuario::setNombre(string na){
  nombre = na;
}
void Usuario::setUsuario(string us){
  usuario = us;
}
void Usuario::setContrasena(string pa){
  contrasena = pa;
}
void Usuario::setGenero(string ge){
  genero = ge;
}
void Usuario::setEdad(int ag){
  edad = ag;
}

vector<string> Usuario::getLista(){
  return lista_intereses;
}
void Usuario::setLista(vector<string> list){
  lista_intereses = list;
}
