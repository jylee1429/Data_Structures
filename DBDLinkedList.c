#include <stdio.h>
#include <stdlib.h>
#include "DBDLinkedList.h"

void ListInit(List* plist){
	plist->head=(Node*)malloc(sizeof(Node));
	plist->tail=(Node*)malloc(sizeof(Node));
	
	plist->head->right=plist->tail;
	plist->head->left=NULL;
	plist->tail->left=plist->head;
	plist->tail->right=NULL;
	
	plist->numOfData=0;
}

void LInsert(List* plist,Data data){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;
	
	newNode->left=plist->tail->left;
	plist->tail->left->right=newNode;
	newNode->right=plist->tail;
	plist->tail->left=newNode;

	(plist->numOfData)++;
}

int LFirst(List* plist,Data* pdata){
	if(plist->head->right==plist->tail)
		return FALSE;
	plist->cur=plist->head->right;
	*pdata=plist->cur->data;
	return TRUE;
}

int LRight(List* plist,Data* pdata){
	if(plist->cur->right==plist->tail)
		return FALSE;
	plist->cur=plist->cur->right;
	*pdata=plist->cur->data;
	return TRUE;
}

int LLeft(List* plist,Data* pdata){
	if(plist->cur->left==plist->head)
		return FALSE;
	plist->cur=plist->cur->left;
	*pdata=plist->cur->data;
	return TRUE;

}

Data LRemove(List* plist){
	Node* rpos=plist->cur;
	Data remv=rpos->data;
	
	rpos->right->left=rpos->left;
	rpos->left->right=rpos->right;
	plist->cur=plist->cur->left;
	free(rpos);
	(plist->numOfData)--;

	return remv;
}
int LCount(List* plist){
	return plist->numOfData;
}
