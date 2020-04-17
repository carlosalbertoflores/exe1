	#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
ifstream leer;
ofstream archivo;
ofstream temp;
string texto;
	void leera()
	{
		leer.open("base.txt");
		if (leer.is_open())
		{
			leer >> texto;
			bool encontrado = false;

			while (!leer.eof())
			{
				leer >> texto;

					encontrado = true;

		cout <<texto<<endl;




			}

		}leer.close();

	}
	int main(){
	leera();
	}
