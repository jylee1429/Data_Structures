#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List* plist){
	plist->head=(Node*)malloc(sizeof(Node));
	plist->head->next=NULL;
	plist->comp=NULL;
	plist->NumOfData=0;
}

void FInsert(List* plist,LData data){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;
	
	newNode->next=plist->head->next;
	plist->head->next=newNode;

	plist->NumOfData++;
}

void LInsert(List* plist,LData data){
	

}
