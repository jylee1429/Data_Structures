#ifndef _DBD_LINKED_LIST_H_
#define _DBD_LINKED_LIST_H_

#define TRUE 1
#define FALSE 0

typedef int Data;
typedef struct _node{
	Data data;
	struct _node* right;
	struct _node* left;
}Node;

typedef struct _DBDLinkedList{
	Node* head;
	Node* tail;
	Node* cur;
	int numOfData;
}DBDLinkedList;

typedef DBDLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, Data data);
int LFirst(List* plist,Data* pdata);
int LRight(List* plist,Data* pdata);
int LLeft(List* plist,Data* data);
Data LRemove(List* plist);
int LCount(List* plist);

#endif
