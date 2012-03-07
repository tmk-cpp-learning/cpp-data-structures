/*
 * linkedListNode.cpp
 *
 *  Created on: Mar 7, 2012
 *      Author: eclipse-developer
 */

#include "linkedListNode.h"

namespace hackmonkey {

linkedListNode::linkedListNode() {
	payload = 0;
	next = 0;
}

linkedListNode::linkedListNode(void* item){
	payload = item;
	next = 0;
}

linkedListNode::linkedListNode(void* item, linkedListNode* next){
	payload = item;
	this->next = next;
}

void linkedListNode::linkFromNode(linkedListNode* prev){
	prev->next = this;
}
linkedListNode::~linkedListNode() {
	delete payload;
	delete next;
}

} /* namespace hackmonkey */
