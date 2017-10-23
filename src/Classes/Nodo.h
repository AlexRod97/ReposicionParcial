/*
 * Nodo.h
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#ifndef CLASSES_NODO_H_
#define CLASSES_NODO_H_

class Nodo {
private:
	Nodo *prev;
	Nodo *next;
	int propiedad;

public:
	Nodo(int propiedad, Nodo *p, Nodo *n);
	int getPropiedad();
	Nodo* getNext();
	void setNext(Nodo *next);
	Nodo* getPrev();
	void setPrev(Nodo *prev);

};

#endif /* CLASSES_NODO_H_ */
