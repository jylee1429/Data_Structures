#include <stdio.h>
#include "DLinkedList.h"

int main(void){
	List list;
	int data;
	ListInit(&list);

	LInsert(&list,11);
	LInsert(&list,22);
	LInsert(&list,33);
	LInsert(&list,44);
	LInsert(&list,55);

	printf("현재 데이터 개수 : %d\n",LCount(&list));
	if(LFirst(&list,&data)){
		printf("%d ",data);
		while(LNext(&list,&data)){
			printf("%d ",data);
		}
	}

	if(LFirst(&list,&data)){
		if(data==2){
			LRemove(&list);
		}
		while(LNext(&list,&data)){
			if(data==2)
				LRemove(&list);
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