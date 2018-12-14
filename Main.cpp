#include <iostream>
#include "Usuario.h"
#include "Node.h"
#include "LinkedStack.h"
#include "Stack.h"
#include <fstream>
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
  string nombre = "",user = "", password = "",genero = "", interes = "N";
  int edad = 18;
  int resp = 0;
  int flag_inter = 0;

  Usuario * _user;
  string log_user = "", log_pas ="";
  do{
    cout<<"PINDER"<<endl
    <<"1. Registrar "<<endl
    <<"2. Login"<<endl
    <<"3. Salir"<<endl;
    cin>>resp;
    switch (resp) {
      case 1:{
        cout<<"Ingrese nombre: "<<endl;
        cin>>nombre;
        cout<<"Ingrese usuario: "<<endl;
        cin>>user;
        cout<<"Ingrese contrasena: "<<endl;
        cin>>password;
        cout<<"Ingrese edad: "<<endl;
        cin>>edad;
        cout<<"Ingrese genero: "<<endl;
        cin>>genero;
        /*while(interes != "s" || interes != "S"){
          cout<<"Presione 'S' para salir"<<endl
          <<"Ingrese algun interes que tenga "<<endl;
          cin>>interes;
        }*/


        //agregar a la pila

        //nombre,usuario,contrasena,edad,genero
        _user->setData(new Usuario(nombre,user,password,edad,genero));
      }break;

      case 2:{
        bool flag = false;
        cout<<"Ingrese usuario "<<endl;
        cin>>log_user;
        cout<<"Ingrese password "<<endl;
        cin>>log_pas;

        for (int i = 0; i < lista.size(); i++) {
          if (log_user == lista.at(i)->getUsuario && log_pas == lista.at(i)->getContrasena()) {
            flag = true;
          }else{
            cout<<"Datos no validos! "<<endl;
            flag = false;
          }
        }//fin for


      }break;

      default:
        cout<<"Saliendo "<<endl;
        resp = 3;
    }
  }while(resp != 3);
  return 0;
}
