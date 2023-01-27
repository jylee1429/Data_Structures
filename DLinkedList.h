#ifndef _D_LINKED_LIST_H_
#define _D_LINKED_LIST_H_

#define TRUE 1
#define FALSE 0

typedef int LData;
typedef struct _node{
	LData data;
	struct _node* next;
}Node;

typedef struct _linkedlist{
	Node* head;
	Node* cur;
	Node* before;
	int NumOfData;
	int (*comp)(LData d1,LData d2);
}LinkedList;
typedef LinkedList List;

void ListInit(List* plist);
void LInsert(List* plist,LData data);
void SInsert(List* plist,LData data);
int LFirst(List* plist,LData* pdata);
int LNext(List* plist,LData* pdata);
LData LRemove(List* plist);
int LCount(List* plist);
void SetSortRule(List* plist, int (*comp)(LData D1, LData D2));
int WhoIsPrecede(LData d1, LData d2);
#endif
