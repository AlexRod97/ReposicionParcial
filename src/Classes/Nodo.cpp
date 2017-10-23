/*
 * Nodo.cpp
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#include "Nodo.h"
#include <stdio.h>

Nodo::Nodo(int e, Nodo*p, Nodo *n) {
	this->prev = p;
	this->next = n;
	this->propiedad = e;
}

int Nodo::getPropiedad()
{
	return propiedad;
}

Nodo* Nodo::getPrev()
{
	return prev;
}

void Nodo::setPrev(Nodo* prev)
{
	this->prev = prev;
}

Nodo* Nodo::getNext()
{
	return next;
}

void Nodo::setNext(Nodo *next)
{
	this->next = next;
}

