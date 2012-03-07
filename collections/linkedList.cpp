/*
 * linkedList.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: eclipse-developer
 */
#include <exception>
#include "linkedList.h"

namespace hackmonkey {

linkedList::linkedList() {
	// TODO Auto-generated constructor stub

}

linkedList::~linkedList() {
	// TODO Auto-generated destructor stub
}

bool linkedList::add(void* element){
	linkedListNode node = new hackmonkey::linkedListNode(element);
	if(head == 0){
		head = node;
	}
	else {
		head->next = node;
	}
	return true;
}

void linkedList::add(int index, void* element){
	if(index > items){
		throw "linkedList::add(int,void*) - index past the end of the list";
	}
	linkedListNode* node = new linkedListNode(element);
	if(index == 0){
		node->next = head;
		head = node;
	}
	else if(index == items){
		tail->next = node;
		tail = node;
	}
	else {
		linkedListNode* cur = head;
		linkedListNode* prv = 0;
		for(int i=0;i<index;i++){
			prv = cur;
			cur = cur->next;
		}
		node->next = cur;
		prv->next = node;

		delete cur;
		delete prv;
	}
	delete node;
	return;
}
// virtual bool addAll(collection<T> collection) = 0;
virtual void clear();
virtual bool contains(void* element);
virtual bool equals(void* element);
void* linkedList::get(int index){
	if(index >= items){
		return 0;
	}
	if(index == items-1){
		return tail->payload;
	}
	if(index == 0){
		return head->payload;
	}
	linkedListNode* cur = head;
	for(int i=0;i<index;i++){
		cur = cur->next;
	}
	return cur->payload;
}
// virtual int hashCode() = 0;
virtual int indexOf(void* element);
virtual bool isEmpty();
// virtual iterator iterator() = 0;
virtual int lastIndexOf(void* element);
// listIterator listIterator()
// listIterator listIterator(int index)
virtual void* remove(int index);
virtual bool remove(void* element);
// bool removeAll(collection<T> collection)
// bool retainAll(collection<T> collection)
virtual void* set(int index, void* element);
virtual int size();
virtual list* subList(int fromIndex, int toIndex);

} /* namespace hackmonkey */
