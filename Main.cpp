#include <iostream>
#include "Usuario.h"
#include "Node.h"
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
  string nombre = "",user = "", password = "",genero = "", interes = "N";
  int edad = 18;
  int resp = 0;
  int flag_inter = 0;

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
        cin>>nombre;
        cout<<"Ingrese contrasena: "<<endl;
        cin>>password;
        cout<<"Ingrese edad: "<<endl;
        cin>>edad;
        cout<<"Ingrese genero: "<<endl;
        cin>>genero;
        do{
          cout<<"Presione 'S' para salir"<<endl
          <<"Ingrese algun interes que tenga "<<endl;
          cin>>interes;
        }while(interes != "s" || interes != "S");


        //agregar a la pila
      }break;

      case 2:{
        cout<<"Ingrese usuario "<<endl;
        cin>>log_user;
        cout<<"Ingrese password "<<endl;
        cin>>log_pas;

      }break;

      default:
        cout<<"Saliendo "<<endl;
        resp = 3;
    }
  }while(resp != 3);
  return 0;
}
