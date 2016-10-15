/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion:clase Nodo con sus metodos y atributos

*/
#include <iostream>

class Nodo
{
public:
	int Dato;
	Nodo *Padre;
	Nodo *Hizq;
	Nodo *Hder;
	int getDato();
	Nodo(int Dato);
	Nodo(int Dato,Nodo *Padre);
};
