/*
 * list.h
 *
 *  Created on: Mar 7, 2012
 *      Author: eclipse-developer
 */

#ifndef LIST_H_
#define LIST_H_

namespace hackmonkey {

class list {
public:
	virtual ~list();

	virtual bool add(void* element) = 0;
	virtual void add(int index, void* element) = 0;
	// virtual bool addAll(collection<T> collection) = 0;
	virtual void clear() = 0;
	virtual bool contains(void* element) = 0;
	virtual bool equals(void* element) = 0;
	virtual void* get(int index) = 0;
	// virtual int hashCode() = 0;
	virtual int indexOf(void* element) = 0;
	virtual bool isEmpty() = 0;
	// virtual iterator iterator() = 0;
	virtual int lastIndexOf(void* element) = 0;
	// listIterator listIterator()
	// listIterator listIterator(int index)
	virtual void* remove(int index) = 0;
	virtual bool remove(void* element) = 0;
	// bool removeAll(collection<T> collection)
	// bool retainAll(collection<T> collection)
	virtual void* set(int index, void* element) = 0;
	virtual int size() = 0;
	virtual list* subList(int fromIndex, int toIndex) = 0;
	// virtual <T>T[] toArray() = 0;
};

} /* namespace hackmonkey */
#endif /* LIST_H_ */
