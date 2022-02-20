#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario: Persona {

	// atributos
	public : string nit;
			  double cui;
				
	// 
	public : Propietario(string nombres,string apellidos,string direccion,int tel,string n, double c) : Persona(nombres,apellidos,direccion,tel){
					nit = n;
					cui = c;
					}
	
	void setNit(string n){nit = n;}
	void setCui(double c){cui = c;}
	void setNombres(string nombres){nom = nombres;}
	void setApellidos(string apellidos){ape = apellidos;}
	void setDireccion(string direccion){dir = direccion;}
	void setTelefono(int telefono){tel = telefono;}
	
	string getNit(){return nit;}
	double getCUI(){return cui;}
	string getNombres(){return nom;}
	string getApellidos(){return ape;}
	string getDireccion(){return dir;}
	int getTelefono(){return tel;}
	
	void mostrar(){
	cout<<"_______________"<<endl;
	cout<<"Nit:"<<nit<<endl;
	cout<<"CUI:"<<cui<<endl;
	cout<<"Nombres:"<<nom<<endl;
	cout<<"Apellidos:"<<ape<<endl;
	cout<<"Direccion:"<<dir<<endl;
	cout<<"Telefono:"<<tel<<endl;		
	}
	
	main (){
	string nom,ape,dir;
	int tel,nit;
	double cui;
	
	cout<<"Ingrese Nit:";
	cin>>nit;
	cout<<"Ingrese CUI:";
	cin>>cui;
	cout<<"Ingrese Nombres:";
	cin>>nom;
	cout<<"Ingrese Apellidos:";
	cin>>ape;
	cout<<"Ingrese Direccion:";
	cin>>dir;
	cout<<"Ingrese Telefono:";
	cin>>tel;

	void mostrar();
	
};
};

