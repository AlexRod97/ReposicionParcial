/*
 * CircularLinkedList.h
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#ifndef CLASSES_CIRCULARLINKEDLIST_H_
#define CLASSES_CIRCULARLINKEDLIST_H_
#include <stddef.h>
#include "Nodo.h"

class CircularLinkedList {
public:
	Nodo *tail = NULL;
	int size = NULL;

public:
	CircularLinkedList();

	int getSize();
	bool isEmpty();
	int first();
	int last();
	void rotate();
	void addFirst(int e);
	void addLast(int e);
	int removeFirst();
};

#endif /* CLASSES_CIRCULARLINKEDLIST_H_ */
