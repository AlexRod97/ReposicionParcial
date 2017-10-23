/*
 * Queue.h
 *
 *  Created on: 22/10/2017
 *      Author: rodri
 */

#ifndef CLASSES_QUEUE_H_
#define CLASSES_QUEUE_H_
#include "stddef.h"
#include "Nodo.h"

class Queue {
public:
	Nodo *head = NULL;
	Nodo *tail = NULL;
	int size = 0;

public:
	Queue();
	int getSize();
	bool isEmpty();
	void enqueue(int e);
	int first();
	int dequeue();
};

#endif /* CLASSES_QUEUE_H_ */
