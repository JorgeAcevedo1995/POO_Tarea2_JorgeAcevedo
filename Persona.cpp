#include <iostream>
using namespace std;

class Persona{
	// atributos
	public : string nom,ape,dir;
				int tel;
				
	// 
	public : Persona(string nombres,string apellidos,string direccion,int telefono){
					nom = nombres;
					ape = apellidos;
					dir = direccion;
					tel = telefono;
			}

	void mostrar();
	void agregar();
	void modificar();
	void eliminar();
	
	
};



