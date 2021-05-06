#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <queue>
#include <algorithm>
#include <map>
#include "GlueGun.h"

using namespace std;

template<class T>
class Queue {
private:

	struct queue {
		T object;
		queue* next;
		queue* back;
		bool empty = true;
		int number;
	};

	queue* first;
	int sizeQ;

public:
	Queue()
	{
		first = new queue;
		sizeQ = 0;
	}

public:
	queue* last;
	queue* front;

	void restart(){
		front = first;
	}

	void push(T element) {
		queue* part = new queue;
		if (sizeQ == 0) {
			first->object = element;
			front = first;
			last = first;
			part = first;
		}
		else {
			part->back = last;
			part->object = element;
			last->next = part;
			last = part;
		}
		part->empty = false;
		part->number = sizeQ;
		//return element;
		sizeQ++;
	}
	void pop() {
		if (front == last) {
			cout << "Последний объект в очереди";
			return;
		}
		front = front->next;
		
	}
	void remove() {

		if (last == front) {
			last = last->back;
			delete front;
			front = last;
			sizeQ--;
			return;
		}

		if (front == first) {
			first = first->next;
			delete front;
			front = first;
			sizeQ--;
			return;
		}
		front->back->next = front->next;
		front->next->back = front->back;
		delete front;
		sizeQ--;
	}
	
	void allInf() {
		queue* part = first;
		while (part != last) {
			part->object->PrintAllInformation();
			part = part->next;
		}
		part->object->PrintAllInformation();
	}

	void sortPrice() {
		queue* mas = new queue[sizeQ];
		int iM = 0;
		queue* part = first;
		
		 while (part != last) {
			 mas[iM] = *part;
			 iM++;
			 part = part->next;
		 }
		 mas[iM] = *part;

		int max = 0;
		int iN, price;
		part = new queue;
		for (int i = 0; i <= iM; i++) {
			max = 0;
			iN = i;
			for (int j = i; j <= iM; j++) {
				*part = mas[j];
				price = part->object->GetPrice();
				if (price > max) {
					max = price;
					iN = j;
				}
			}

			*part = mas[i];
			mas[i] = mas[iN];
			mas[iN] = *part;
		}

		for (int i = 0; i <= iM; i++) {
			*part = mas[i];
			cout<< part->object->GetName()+ "   " << part->object->GetPrice() << endl;
		}
	}

	T*  Search(int a){
		queue* part = first;
		while (part != last) {
			if (part->object->GetPrice() == a)
				return &part->object;
			part = part->next;
		}
		if (part->object->GetPrice() == a)
			return &part->object;
		return nullptr;
	}
	T* Search(string a) {
		queue* part = first;
		while (part != last) {
			if (part->object->GetName() == a|| part->object->GetBrand()==a)
				return &part->object;
			part = part->next;
		}
		if (part->object->GetName() == a || part->object->GetBrand() == a)
			return &part->object;
		return nullptr;
	}

	T& getFront() {
		return front->object;
	}
	T& getLast() {
		return last->object;
	}
	int lenght() {
		return sizeQ;
	}
};