#include <stdio.h>
#include <stdlib.h>
#include "DBDLinkedList.h"

int main(void){
	List list;
	int data;

	ListInit(&list);

	LInsert(&list,1);
	LInsert(&list,2);
	LInsert(&list,3);
	LInsert(&list,4);
	LInsert(&list,5);
	

	printf("%d\n",LCount(&list));

	if(LFirst(&list,&data)){
		printf("%d ",data);
		while(LRight(&list,&data)){
			printf("%d ",data);
		}
	}

	printf("\n");

	if(LFirst(&list,&data)){
		if(data==3)
			LRemove(&list);
		while(LRight(&list,&data)){
			if(data==3)
				LRemove(&list);
		}
	}
	printf("%d\n",LCount(&list));

	return 0;

}
