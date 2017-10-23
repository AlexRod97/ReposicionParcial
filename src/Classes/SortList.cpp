/*
 * SortList.cpp
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#include "SortList.h"
#include "Nodo.h"
#include "SinglyLinkedList.h"

	struct myArray {
			int data[10];
			int numElem;
		};


myArray MergeLists::ordenar(SinglyLinkedList *lista1, SinglyLinkedList *lista2)
{
	struct myArray myData;

	int aux;
	Nodo *NodoActual1 = lista1->head;
	Nodo *NodoActual2 = lista2->head;
    int k1 = 0, k2 = 0;

	for (int j = 0; j < 10; j++)
	{
		myData.data[j] = NULL;
	}

	while(NodoActual1 != NULL){
		aux = NodoActual1->getPropiedad();
		myData.data[k1] = aux;
		NodoActual1 = NodoActual1->getNext();
		k1++;
	}

	while (NodoActual2 != NULL) {
		aux = NodoActual2->getPropiedad();
		myData.data[k2] = aux;
		NodoActual2 = NodoActual2->getNext();
		k2++;
	}


	for (int i = 0; i < k1; i++) {
		for (int j = 0; j < k1 - 1; j++)	{
			if (myData.data[j] > myData.data[j + 1]) {
				aux = myData.data[j];
				myData.data[j] = myData.data[j + 1];
				myData.data[j + 1] = aux;
			}
		}
	}

	for (int i = 0; i < k2; i++) {
		for (int j = 0; j < k2 - 1; j++) {
			if (myData.data[j] > myData.data[j + 1]) {
				aux = myData.data[j];
				myData.data[j] = myData.data[j + 1];
				myData.data[j + 1] = aux;
			}
		}
	}
	myData.numElem = k1;

	return myData;
}
