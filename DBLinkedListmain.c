#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"

int main(void){
	List list;
	int data;
	ListInit(&list);

	LInsert(&list,1);
	LInsert(&list,2);
	LInsert(&list,3);
	LInsert(&list,4);
	LInsert(&list,5);

	if(LFirst(&list,&data)){
		printf("%d ",data);
		while(Lright(&list,&data)){
			printf("%d ",data);
		}
		while(Lleft(&list,&data)){
			printf("%d ",data);
		}
		printf("\n");
	
	}
	return 0;

}
