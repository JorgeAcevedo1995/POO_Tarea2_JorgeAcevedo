#include "Propietario.cpp"
#include <iostream>
using namespace std;

int main(){

	string n,nombres,apellidos,direccion;
	int tel;
	double c;
	cout<<"Ingrese NIT:";
	cin>>n;
	cout<<"Ingrese CUI:";
	cin>>c;
	cout<<"Ingrese Nombres:";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Direccion:";
	cin>>direccion;
	cout<<"Ingrese Telefono:";
	cin>>tel;
	
	Propietario obj = Propietario(nombres,apellidos,direccion,tel,n,c);
	obj.mostrar();
	
	cout<<"Modificar Nit:";
	cin>>n;
	cout<<"Modificar CUI:";
	cin>>c;
	cout<<"Modificar Nombres:";
	cin>>nombres;
	cout<<"Modificar Apellidos:";
	cin>>apellidos;
	cout<<"Modificar Direccion:";
	cin>>direccion;
	cout<<"Modificar Telefono:";
	cin>>tel;
	
	obj.setNit(n);
	obj.setCui(c);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(tel);
	
	cout<<" -------- MODIFICACION EXITOSA --------------"<<endl;
	cout<<"Nit Modificado:"<<obj.getNit()<<endl;
	cout<<"CUI Modificado:"<<obj.getNit()<<endl;
	cout<<"Nombres Modificado:"<<obj.getNombres()<<endl;
	cout<<"Apellidos Modificado:"<<obj.getApellidos()<<endl;
	cout<<"Direccion Modificado:"<<obj.getDireccion()<<endl;
	cout<<"Telefono Modificado:"<<obj.getTelefono()<<endl;
	
}


