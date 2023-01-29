#ifndef _DB_LINKED_LIST_H_
#define _DB_LINKED_LIST_H_

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node{
	Data data;
	struct _node* right;
	struct _node* left;
}Node;

typedef struct _DLinkedList{
	Node* head;
	Node* cur;
	int numOfData;
}DBLinkedList;

typedef DBLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, Data data);
int LFirst(List* plist, Data* pdata);
int Lright(List* plist, Data* pdata);
int Lleft(List* plist,Data* pdata);
int LCount(List* plist);


#endif
