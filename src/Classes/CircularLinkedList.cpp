/*
 * CircularLinkedList.cpp
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#include "CircularLinkedList.h"
#include <stddef.h>
#include "Nodo.h"

CircularLinkedList::CircularLinkedList() {
	// TODO Auto-generated constructor stub

}

int CircularLinkedList::getSize()
{
	return size;
}

bool CircularLinkedList::isEmpty()
{
	return (tail == NULL);
}

int CircularLinkedList::first()
{
	if (isEmpty())
		return NULL;
	return tail->getNext()->getPropiedad();
}

int CircularLinkedList::last()
{
	if (isEmpty())
		return NULL;
	return tail->getPropiedad();
}

void CircularLinkedList::rotate()
{
	if (tail != nullptr)
	{
		tail = tail->getNext();
	}
}

 void CircularLinkedList::addFirst(int e)
{

	if (size == 0)
	{
		tail = new Nodo(e, nullptr,nullptr);
		tail->setNext(tail);
	}
	else
	{
		Nodo *newest = new Nodo(e,nullptr, tail->getNext());
		tail->setNext(newest);
	}
	size++;
}

 void CircularLinkedList::addLast(int e)
 {
	 addFirst(e);
	 tail = tail->getNext();
 }

 int  CircularLinkedList::removeFirst()
 {
	 if (isEmpty())
	 {
		 return NULL;
	 }
	 Nodo *head = tail->getNext();
	 if (head == tail)
	 {
		 tail = nullptr;
	 }
	 else
	 {
		 tail->setNext(head->getNext());
	 }
	 size--;
	 return head->getPropiedad();
 }

