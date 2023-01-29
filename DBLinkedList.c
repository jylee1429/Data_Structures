#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"

void ListInit(List* plist){
	plist->head=NULL;
	plist->cur=NULL;
	plist->numOfData=0;
}

void LInsert(List* plist,Data data){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;

	newNode->right=plist->head;
	if(plist->head!=NULL){
		plist->head->left=newNode;
	}
	newNode->left=NULL;
	plist->head=newNode;

	(plist->numOfData)++;
}

int LFirst(List* plist,Data* pdata){
	if(plist->head==NULL)
		return FALSE;
	plist->cur=plist->head;
	*pdata=plist->cur->data;
	return TRUE;
}
int Lright(List* plist,Data* pdata){
	if(plist->cur->right==NULL){
		return FALSE;
	}
	plist->cur=plist->cur->right;
	*pdata=plist->cur->data;
	return TRUE;
}

int Lleft(List* plist,Data* pdata){
	if(plist->cur->left==NULL){
		return FALSE;
	}
	plist->cur=plist->cur->left;
	*pdata=plist->cur->data;
	return TRUE;

}

int LCount(List* plist){
	return plist->numOfData;
}
