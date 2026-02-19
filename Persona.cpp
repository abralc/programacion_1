#include <iostream>

using namespace std;

class Persona{
	// Atributos
	protected :
		string nombres,apellidos,direccion,fecha_nacimiento;
		int telefono;
	
	// Constructor (Vacio cuando no recibe algun parametro)
	Persona(){	
	}
	Persona(string nom,string ape,string dir,int tel, string fn){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
	}
	/*
	// Constructor con un parametro
	Persona(string nom){
		nombre=nom;
	}
	// Constructor con multiples parametros
	Persona(string nom,string ape){
		nombre=nom;
		apellido = ape;
	}
	
	Sobre carga de metodos, se debe tener diferentes parametros en cada uno
	*/
	// Metodos (CRUD)
	void crear();
	void leer();
	void actualizar();
	void borrar();
	
	
};
