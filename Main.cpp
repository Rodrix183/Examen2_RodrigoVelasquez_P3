#include <iostream>
#include "Usuario.h"
#include "Node.h"
#include "LinkedStack.h"
#include "Stack.h"
#include <fstream>
#include <string>

using namespace std;

int main(){
  string nombre = "",user = "", password = "",genero = "", interes = "N";
  int edad = 18;
  int resp = 0;
  int flag_inter = 0;

  Usuario * _user;
  string log_user = "", log_pas ="";
  int op_log = 0;
  //Stack * pila = new LinkedStack();
  do{
    cout<<"_____________________________________________"<<endl;
    cout<<"__________        |P|INDER          _________"<<endl
    <<"_____________________________________________"<<endl
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
        while(interes != "s"){
          cout<<"Presione 'S' para salir"<<endl
          <<"Ingrese algun interes que tenga "<<endl;
          cin>>interes;
        }


        //agregar a la pila

        //nombre,usuario,contrasena,edad,genero
        //ofstream archivo("ListaUsuarios.rodrix",std::ios::binary);
        //Usuario * _user = new Usuario(nombre,user,password,edad,genero);
        //_user->write(archivo);
        ofstream archivo;
        archivo.open("ListaUsuarios.txt",std::ios::app);
        archivo<<nombre<<";"<<user<<";"<<password<<";"<<edad<<";"<<genero<<endl;
        archivo.close();
        cout<<"               Usuario Creado Exitosamente!               "<<endl;
      }break;

      case 2:{
        bool flag = false;
        cout<<"Ingrese usuario "<<endl;
        cin>>log_user;
        cout<<"Ingrese password "<<endl;
        cin>>log_pas;

        //ifstream archivo("ListaUsuarios.rodrix",std::ios::binary);
        //aqui leer el archivo binario
        /*while () {
          if (log_user == lista.at(i)->getUsuario() && log_pas == lista.at(i)->getContrasena()) {
            flag = true;
          }else{
            cout<<"Datos no validos! "<<endl;
            flag = false;
          }
        }//fin for
        */

        if (flag == true) {
          do{
            cout<<"1. Ver Sugeridos          "
            <<"2. Ver Contactos          "
            <<"3. Ver Resto de Contactos          "
            <<"4. Cerrar Sesion          "<<endl;
            cin>>op_log;
            switch (op_log) {
              case 1:{//ver Contactos Sugeridos

              }break;

              case 2:{//Ver Contactos

              }break;

              case 3:{//Ver Resto de Contactos

              }break;

              default:
                op_log = 4;
                flag = false;
            }//fin switch
          }while(op_log!=4);
        }//fin if

      }break;

      default:
        cout<<"Saliendo "<<endl;
        resp = 3;
    }
  }while(resp != 3);
  return 0;
}
