#include <stdio.h>
#include <stdlib.h>
#include "DBDLinkedList.h"

int main(void){
	List list;
	Data data;

	ListInit(&list);

	LInsert(&list,1);
	LInsert(&list,2);
	LInsert(&list,3);
	LInsert(&list,4);
	LInsert(&list,5);
	

	printf("%d\n",LCount(&list));

	if(LFirst(&list,&data)){
		printf("%d ",data);
	}
	return 0;

}
