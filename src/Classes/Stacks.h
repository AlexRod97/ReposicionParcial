/*
 * Stacks.h
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#ifndef CLASSES_STACKS_H_
#define CLASSES_STACKS_H_
#include "stddef.h"
#include "Nodo.h"
class Stacks {
public:
	Nodo *head = NULL;
	Nodo *tail = NULL;
	int size = 0;

public:
	Stacks();
	int getSize();
	int isEmpty();
	void push(int valor);
	int top();
	int pop();

};

#endif /* CLASSES_STACKS_H_ */
