#include <stdio.h>
#include <stdlib.h>
#include "DBDLinkedList.h"

void ListInit(List* plist){
	Node* head=(Node*)malloc(sizeof(Node));
	head->right=NULL;
	Node* tail=(Node*)malloc(sizeof(Node));
	tail->left=NULL;
	plist->numOfData=0;
}

void LInsert(List* plist,Data data){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;

	if(plist->head->right==NULL){
		newNode=plist->head->right;
		newNode->left=plist->head;
		newNode->right=plist->tail;
		plist->tail->left=newNode;
	}
	newNode->right=plist->head->right;
	plist->head->right=newNode;
	

	(plist->numOfData)++;

}

int LFirst(List* plist,Data* pdata){
	if(plist->head->right==NULL)
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
	

}
int LCount(List* plist){
	return plist->numOfData;
}
