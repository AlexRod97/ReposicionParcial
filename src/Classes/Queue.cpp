/*
 * Queue.cpp
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#include "Queue.h"
#include <stdio.h>
#include <stddef.h>
#include "iostream"
using namespace std;

Queue::Queue() {
	head = NULL;
	tail = NULL;
	size = 0;
}

int Queue::getSize()
{
	return size;
}
bool Queue::isEmpty()
{
	return ((head == NULL) && (tail == NULL));
	size =0;
}
void Queue::enqueue(int e)
{
	if (head->next == NULL)
			{
				Nodo *nuevo;
				nuevo->valor = e;
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
					Aux->valor = e;
					Aux->prev = temporal;
		}
}

int Queue::dequeue()
{
	int _valor;
	if (head->next == NULL)
			{
			cout<<"Cola vacia"<<endl;
			}
			else
			{
				Nodo* Aux;
				Aux = head->next;
				if (Aux->next != NULL)
				{
					head->next = Aux->next;
					Aux = Aux->next;
					Aux->prev = head;

				}
				else
				{
					head->next = NULL;
				}
			}
}

int Queue::first()
{
	if (head->next != NULL)
			{
				Nodo* Aux;
				Aux = head->next;
				return Aux->e;
			}
			else
			{
				return NULL;
			}
}

