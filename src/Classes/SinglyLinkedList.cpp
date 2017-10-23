/*
 * SinglyLinkedList.cpp
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#include "SinglyLinkedList.h"
#include <stdio.h>
#include <stddef.h>

SinglyLinkedList::SinglyLinkedList() {
	head = NULL;
	tail = NULL;
	size = 0;

}

int SinglyLinkedList::getSize()
{
	return size;
}

bool SinglyLinkedList::isEmpty()
{
	return ((head == NULL) && (tail == NULL));
}

void SinglyLinkedList::addFirst(int e)
{
	Nodo *newData = new Nodo(e,NULL,NULL);

	if (isEmpty())
	{
		head = newData;
		tail = newData;
		size++;
	}
}

void SinglyLinkedList::addLast(int e)
{
	Nodo *newData = new Nodo(e,NULL,NULL);

	if (isEmpty())
		head = newData;
	else
	{
		tail->setNext(newData);
		tail = newData;
		size++;
	}
}

int SinglyLinkedList::first()
{
	if (isEmpty())
		return NULL;
	return head->getPropiedad();
}

int SinglyLinkedList::last()
{
	if (isEmpty())
		return NULL;
	return tail->getPropiedad();
}

int SinglyLinkedList::removeFirst()
{
	if (isEmpty())
		return NULL;
	int res = head->getPropiedad();
	head = head->getNext();
	size--;

	if (size == 0)
		tail = NULL;
		return res;
}




