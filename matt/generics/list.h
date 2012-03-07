///*
//	list - pure virtual abstract class to use a list interface
// */
//
//#ifndef LIST_H
//#define LIST_H
//
//namespace hackmonkey
//{
//
//export
//template <class T>
//class list
//{
//public:
//	virtual ~list();
//	virtual bool add(T element) = 0;
//	virtual void add(int index, T element) = 0;
//	// virtual bool addAll(collection<T> collection) = 0;
//	virtual void clear() = 0;
//	virtual bool contains(T element) = 0;
//	virtual bool equals(T element) = 0;
//	virtual T get(int index) = 0;
//	// virtual int hashCode() = 0;
//	virtual int indexOf(T element) = 0;
//	virtual bool isEmpty() = 0;
//	// virtual iterator iterator() = 0;
//	virtual int lastIndexOf(T element) = 0;
//	// listIterator listIterator()
//	// listIterator listIterator(int index)
//	virtual T remove(int index) = 0;
//	virtual bool remove(T element) = 0;
//	// bool removeAll(collection<T> collection)
//	// bool retainAll(collection<T> collection)
//	virtual T set(int index, T element) = 0;
//	virtual int size() = 0;
//	virtual list<T> subList(int fromIndex, int toIndex) = 0;
//	// virtual <T>T[] toArray() = 0;
//
//protected:
//	virtual list(){};
//
//};
//
//}
//
//#endif /* LIST_H */
