#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

int main(void){
	List list;
	int data,i,nodeNum;
	
	ListInit(&list);

	LInsert(&list,1);
	LInsert(&list,3);
	LInsert(&list,5);
	LInsert(&list,7);
	LInsert(&list,9);

	if(LFirst(&list,&data)){
		printf("%d ",data);
		for(i=0;i<LCount(&list)-1;i++){
			if(LNext(&list,&data)){
				printf("%d ",data);
			}
		}
	}
	printf("\n");

	nodeNum=LCount(&list);

	if(nodeNum!=0){
		LFirst(&list,&data);
		if(data==3)
			LRemove(&list);
		for(i=0;i<LCount(&list)-1;i++){
			LNext(&list,&data);
			if(data==3){
				LRemove(&list);
			}
		}
	}

	if(LFirst(&list,&data)){
		printf("%d ",data);
		for(i=0;i<LCount(&list)-1;i++){
			if(LNext(&list,&data)){
				printf("%d ",data);
			}
		}
			
	}
	printf("\n");
	return 0;
}

