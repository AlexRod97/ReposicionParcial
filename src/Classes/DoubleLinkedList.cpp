/*
 * DoubleLinkedList.cpp
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#include "DoubleLinkedList.h"
#include <stddef.h>
#include "Nodo.h"

DoubleLinkedList::DoubleLinkedList() {
	header = new Nodo(NULL, nullptr, nullptr);
	trailer = new Nodo(NULL, header, nullptr);
	header->setNext(trailer);
	size = 0;
}

int DoubleLinkedList::getSize()
{
	return size;
}

bool DoubleLinkedList::isEmpty()
{
	return ((header == NULL) && (trailer == NULL));
}

int DoubleLinkedList::first()
{
	if (isEmpty())
		return NULL;
	return header->getNext()->getPropiedad();
}

int DoubleLinkedList::last()
{
	if (isEmpty())
		return NULL;
	return trailer->getPrev()->getPropiedad();
}

void DoubleLinkedList::addFirst(int e)
{
	addBetween(e, header, header->getNext());
}

void  DoubleLinkedList::addLast(int e)
{
	addBetween(e, trailer->getPrev(), trailer);
}

int DoubleLinkedList::removeFirst()
{
	if (isEmpty())
		return NULL;
	return remove(header->getNext());
}

int DoubleLinkedList::removeLast()
{
	if (isEmpty())
		return NULL;
	return remove(trailer->getPrev());
}

void DoubleLinkedList::addBetween(int e, Nodo *predecessor, Nodo *successor)
{
	Nodo *newest = new Nodo(e, predecessor, successor);
	predecessor->setNext(newest);
	successor->setPrev(newest);
	size++;
}

int DoubleLinkedList::remove(Nodo *nodo)
{
	Nodo *predecessor = nodo->getPrev();
	Nodo *successor = nodo->getNext();
	predecessor->setNext(successor);
	successor->setPrev(predecessor);
	size--;
	return nodo->getPropiedad();
}

