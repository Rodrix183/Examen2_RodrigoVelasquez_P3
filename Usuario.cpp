#include "Usuario.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ostream;

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

void Usuario::write(ostream& out){
  int size = nombre.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),size);

  //usuario
  size = usuario.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(usuario.data(),size);

  //password
  size = contrasena.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(contrasena.data(),size);

  //Edad
  out.write(reinterpret_cast<char*>(&edad),sizeof(int));

  //Genero
  size = genero.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(genero.data(),size);
}

void Usuario::read(ifstream& in){
  int size;
  in.read(reinterpret_cast<char*>(&size),sizeof(int));

  //nombre
  char nameBuffer[size];
  in.read(nameBuffer,size);
  nombre = nameBuffer;

  //Usuario
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char userBuffer[size];
  in.read(userBuffer,size);
  usuario = userBuffer;

  //Contrasena
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char passBuffer[size];
  in.read(passBuffer,size);
  contrasena = passBuffer;

  //Edad
  in.read(reinterpret_cast<char*>(&edad),sizeof(int));

  //Genero
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char genderBuffer[size];
  in.read(genderBuffer,size);
  genero = genderBuffer;
}
