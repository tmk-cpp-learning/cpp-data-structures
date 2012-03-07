/*
 * linkedListNode.h
 *
 *  Created on: Mar 7, 2012
 *      Author: eclipse-developer
 */

#ifndef LINKEDLISTNODE_H_
#define LINKEDLISTNODE_H_

namespace hackmonkey {

class linkedListNode {
protected:
	void* payload;
	linkedListNode* next;

public:
	linkedListNode();
	linkedListNode(void* item);
	linkedListNode(void* item, linkedListNode* next);

	virtual ~linkedListNode();

	void linkFromNode(linkedListNode* prev);
};

} /* namespace hackmonkey */
#endif /* LINKEDLISTNODE_H_ */
