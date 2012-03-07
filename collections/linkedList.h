/*
 * linkedList.h
 *
 *  Created on: Mar 7, 2012
 *      Author: eclipse-developer
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "list.h"
#include "linkedListNode.h"

namespace hackmonkey {

class linkedList: public hackmonkey::list {
protected:
	hackmonkey::linkedListNode* head;
	hackmonkey::linkedListNode* tail;
	int items;

	linkedListNode* getNodeAtIndex(int index);

public:
	linkedList();
	virtual ~linkedList();

	virtual bool add(void* element);
	virtual void add(int index, void* element);
	// virtual bool addAll(collection<T> collection) = 0;
	virtual void clear();
	virtual bool contains(void* element);
	virtual bool equals(void* element);
	virtual void* get(int index);
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
};

} /* namespace hackmonkey */
#endif /* LINKEDLIST_H_ */
