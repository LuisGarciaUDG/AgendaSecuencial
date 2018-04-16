/*
Programa número_10 Agenda personal
estructura: secuencial
Autor: Luis Alberto García Rodríguez
N°lista: 11
Fecha: 12 de febrero del 2015
*/

#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main ()

{
system ("color 1C");
string nombre, app, apm, calle, num, frac, cd, cp, email, cumple;

cout <<"\n\n\t\tAGENDA PERSONAL"<<endl<<endl<<endl;
cout<<"\tNombre:               ";
cin>>nombre;
cin.ignore();
cout<<"\tApellido paterno:     ";
cin>>app;
cin.ignore();
cout<<"\tApellido materno:     ";
cin>>apm;
cin.ignore();
cout<<"\n\n\tDOMICILIO"<<endl<<endl;
cout<<"\tCalle:                ";
cin>>calle;
cin.ignore();
cout<<"\tNumero:               ";
cin>>num;
cin.ignore();
cout<<"\tFraccionamiento:      ";
cin>>frac;
cin.ignore();
cout<<"\tCiudad:               ";
cin>>cd;
cin.ignore();
cout<<"\tCodigo postal:        ";
cin>>cp;
cin.ignore();
cout<<"\tCorreo electronico:   ";
cin>>email;
cin.ignore();
cout<<"\tCumpleanios:          ";
cin>>cumple;
cin.ignore();

system ("cls");

cout<<"\n\n\t\tMOSTRAR"<<endl<<endl;
cout<<"\tEl contacto que usted eligio es:"<<endl<<endl<<endl;
cout<<"\tNombre:                 "<<nombre<<endl;
cout<<"\tApellido paterno:       "<<app<<endl;
cout<<"\tApellido materno:       "<<apm<<endl<<endl;
cout<<"\tDOMICILIO"<<endl<<endl;
cout<<"\tCalle:                  "<<calle<<endl;
cout<<"\tNumero:                 "<<num<<endl;
cout<<"\tFraccionamiento:        "<<frac<<endl;
cout<<"\tCiudad:                 "<<cd<<endl;
cout<<"\tCodigo postal:          "<<cp<<endl;
cout<<"\tCorreo electronico:     "<<email<<endl;
cout<<"\tCumpleaños:             "<<cumple<<endl;
cout<<endl<<endl<<endl;
system ("pause");

return 0;
}
