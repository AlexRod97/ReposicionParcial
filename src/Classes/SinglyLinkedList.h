/*
 * SinglyLinkedList.h
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#ifndef SINGLYLINKEDLIST_H_
#define SINGLYLINKEDLIST_H_

#include "Nodo.h"

class SinglyLinkedList {

public:
	Nodo *head;
	Nodo *tail;
	int size;

public:
	SinglyLinkedList();

	int getSize();
	bool isEmpty();
	int first();
	int last();
	void addFirst(int e);
	void addLast(int e);
	int removeFirst();
};

#endif /* SINGLYLINKEDLIST_H_ */
