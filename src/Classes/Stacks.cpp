/*
 * Stacks.cpp
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#include "Stacks.h"

Stacks::Stacks() {
	// TODO Auto-generated constructor stub

}
int Stacks::pop()
{
	int _value;
	if (head != NULL)
		{
		   Nodo* Temporal;
		   Temporal = head->next;
			_value = head->valor;
           head = Temporal;
           return _value;
		}
	else
	{

		return NULL;
	}
}


void Stacks::push(int _value)
{
	if (head->next == NULL)
		{
			Nodo *nuevo;
			nuevo->valor = _value;
			head->next = nuevo;
			nuevo->prev = head;
		}
	else
	{
		Nodo* temporal = new Nodo;
				temporal = head;

				while (temporal->next != NULL)
				{
					temporal = temporal->next;
				}
				Nodo *Aux;
				temporal->next = Aux;
				Aux->valor = _value;
				Aux->prev = temporal;
	}
}

