#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
ifstream leer;
ofstream archivo,se;
ofstream temp;
 string palabra,nuevo,palabras;
 int rep;
	struct regla
	{

		char nombre[100];
		char contra[100];


	}datos;
	void leera()
	{
	    se.open(("seguridad_de_registo.txt"),ios::app);
		leer.open(("seguridad.txt"),ios::in);

		if (leer.is_open())
		{
			leer >> datos.nombre;
			leer >> datos.contra;
			bool encontrado = false;
			cout << "nombre" << endl;
			cin >> palabra;
			cout << "contraseña" << endl;
			cin >> palabras;

			while (!leer.eof())
			{
				leer >> datos.nombre;
				leer >> datos.contra;
				if (datos.nombre == palabra){
				if (datos.contra == palabras)
				{
					encontrado = true;

				cout << "bienvendo" << endl;
				cout << "\n" << endl;
se<<"a acedidido al probgrama"<<endl;
			}

			}
			}

		}leer.close();

	}

void registrop() {
		 archivo.open("seguridad.txt", ios::app);
		if(archivo.is_open())
		{
  cout<<"usuario"<<endl;
     cin>>datos.nombre;
      cout<<"contraseña"<<endl;
           cin>>datos.contra;
           archivo<<"\n";
           archivo<<datos.nombre<<"\t"<<datos.contra;
           archivo<<"\n";
		}

		else
		{
			cout << "error" << endl;
		}
		archivo.close();
	}
int main(){

cout<<"inciar sesion 1"<<endl;
cout<<"inciar nuevo usuario 2"<<endl;
cin>>rep;
switch(rep)
{
case 1 :
    leera();
    break;
    case 2 :
  registrop();
    break;
}




return 0;
}
