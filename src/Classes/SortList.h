	/*
 * SortList.h
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#ifndef CLASSES_SORTLIST_H_
#define CLASSES_SORTLIST_H_
#include "SinglyLinkedList.h"
#include "Nodo.h"
class SortList {

public:
	struct myArray {
			int data[10];
			int numElem;
		};

public:
	myArray ordenar(SinglyLinkedList * lista1, SinglyLinkedList * lista2);
};

#endif /* CLASSES_SORTLIST_H_ */
