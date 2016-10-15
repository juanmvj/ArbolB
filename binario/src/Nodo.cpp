/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	
*/
#include "Nodo.h"

/**
constructor de un nodo
@params dato
@result void
*/
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
}

/**
otro constructor de un nodo con un padre
@params dato, padre
@result void
*/
Nodo::Nodo(int Dato,Nodo *Padre)
{
	this->Dato = Dato;
	this->Padre = Padre;
}

/**
obtenemos el dato del nodo
@params void
@result int
*/
int Nodo::getDato()
{
	return this->Dato;
}
