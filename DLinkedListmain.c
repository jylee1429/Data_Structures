#include <stdio.h>
#include "DLinkedList.h"

int main(void){
	List list;
	int data;
	ListInit(&list);
	SetSortRule(&list,WhoIsPrecede);

	LInsert(&list,11);
	LInsert(&list,22);
	LInsert(&list,66);
	LInsert(&list,33);
	LInsert(&list,77);
	LInsert(&list,55);
	LInsert(&list,44);
	
	printf("현재 데이터 개수 : %d\n",LCount(&list));
	if(LFirst(&list,&data)){
		printf("%d ",data);
		while(LNext(&list,&data)){
			printf("%d ",data);
		}
	}

	if(LFirst(&list,&data)){
		if(data==22){
			LRemove(&list);
		}
		while(LNext(&list,&data)){
			if(data==22){
				LRemove(&list);
			}
		}
	
	}
	printf("현재 데이터 개수 : %d\n",LCount(&list));
	
	if(LFirst(&list,&data)){
		printf("%d ",data);
		while(LNext(&list,&data)){
			printf("%d ",data);
		}
	
	}
	return 0;
}
