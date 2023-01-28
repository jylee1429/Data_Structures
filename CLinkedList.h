#ifndef _C_LINKED_LIST_H_
#define _C_LINKED_LiST_H_

#define TRUE 1
#define FALSE 0

typedef int Data;
typedef struct _node{
	Data data;
	struct _node* next;
}Node;

typedef struct _CLL{
	Node* tail;
	Node* cur;
	Node* before;
	int numOfData;
}CList;

typedef CList List;

void ListInit(List* plist);
void LInsert(List* plist,Data data); // add node to tail
void LInsertFront(List* plist,Data data); // add node to head

int LFirst(List* plist,Data* pdata); // node to head
int LNext(List* plist,Data* pdata); // node to next
Data LRemove(List* plist); // remove node
int LCount(List* plist); // count node 

#endif
