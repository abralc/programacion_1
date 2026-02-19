#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona{
	// atributos privados (private)
	private:
		string nit;
	public :
	// constructor
	Cliente(){
		
	}
	Cliente(string nom, string ape, string dir, int tel, string fn, string n) : Persona(nom,ape,dir,tel,fn){
		nit = n;
	}
	void leer(){
		cout<<"Nit"<<nit<<endl;
		//cout<<"Nombres"<<this.nombres<<endl; this se usa para poder recordar o buscar una variable entre las clases propia e incluidas con otro archivos
		cout<<"Nombres"<<nombres<<endl;
		cout<<"Apellidos"<<apellidos<<endl;
		cout<<"Dirección"<<direccion<<endl;
		cout<<"Telefono"<<telefono<<endl;
		cout<<"Fecha Nacimiento"<<fecha_nacimiento<<endl;
	}
};
