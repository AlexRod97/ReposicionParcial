/*
 * DoubleLinkedList.h
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#ifndef CLASSES_DOUBLELINKEDLIST_H_
#define CLASSES_DOUBLELINKEDLIST_H_
#include <stddef.h>
#include "Nodo.h"

class DoubleLinkedList {
public:
	Nodo *header;
	Nodo *trailer;
	int size;

public:
	DoubleLinkedList();

	int getSize();
	bool isEmpty();
	int first();
	int last();
	void addFirst(int e);
	void addLast(int e);
	int removeFirst();
	int removeLast();

private:
	void addBetween(int e, Nodo* predecessor, Nodo* succesor);
	int remove(Nodo* nodo);
};

#endif /* CLASSES_DOUBLELINKEDLIST_H_ */
