#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int data; // 데이터
	struct _node* next; // 다음 구조체 주소
}Node;

int main(void){
	Node* head=NULL;
	Node* tail=NULL;
	Node* cur=NULL;

	Node* newNode=NULL;
	int readData;
	int running=1;

	while(running){
		printf("자연수 입력 : ");
		scanf("%d",&readData);
		if(readData<1){
			running=1;
			break;
		}
		
		//node 추가
		newNode=(Node*)malloc(sizeof(Node));
		newNode->data=readData;
		newNode->next=NULL;

		if(head==NULL){
			head=newNode;
		}
		else
			tail->next=newNode;
		
		tail=newNode;
	}
	printf("\n");

	printf("입력받은 데이터 전체 출력!!\n");
	if(head==NULL){
		printf("저장된 데이터가 없습니다.\n");
	}
	else{
		cur=head;
		printf("%d ",cur->data);
		while(cur->next!=NULL){
			cur=cur->next;
			printf("%d ",cur->data);
		}
	}
	printf("\n");


	// 데이터 삭제
	if(head==NULL){
		return 0; 
	}
	else{
		Node* delnode=head;
		Node* delnextnode=head->next;

		printf("%d를 해제합니다.\n",delnode->data);
		free(delnode);

		while(delnextnode!=NULL){
			delnode=delnextnode;
			delnextnode=delnode->next;

			printf("%d를 해제합니다.\n",delnode->data);
			free(delnode);
		
		}
	}
	return 0;
	
	
}
