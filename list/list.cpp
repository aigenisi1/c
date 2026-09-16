#include"list.h"

LTNode* LTBuyNode(LTDataType x) {
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		perror("fail");
		exit(1);
	}
	newnode->data = x;
	
	newnode->next = newnode->prev = newnode;
	return newnode;
}
void LTInit(LTNode** pphead) {
	*pphead = LTBuyNode(-1);

}

void LTPushBack(LTNode* phead, LTDataType x) {
	assert(phead);
	LTNode* node = LTBuyNode(x);
	LTNode* pcur = phead;
	//while (pcur->next!=phead) {
	//	pcur = pcur->next;
	//}
	//node->prev = pcur;
	//node->next = phead;
	//phead->prev = node;
	//pcur->next = node;
	node->prev = phead->prev;
	node->next = phead;
	phead->prev->next = node;
	phead->prev = node;

}

void LTPrint(LTNode* phead) {
	LTNode* pcur = phead->next;
	while (pcur != phead) {
		printf("%d->",pcur->data);
		pcur = pcur->next;
	}
	printf("\n");

}

void LTPushFront(LTNode* phead ,LTDataType x) {
	assert(phead);
	LTNode* node = LTBuyNode(x);
	node->next = phead->next;
	node->prev = phead;
	node->next->prev = node;
	phead->next = node;
}


void LTPopBack(LTNode* phead) {
	assert(phead && phead->next != phead);
	LTNode* del = phead->prev;
	del->prev->next = phead;
	phead->prev = del->prev;
	free(del);
	del = NULL;
}

void LTPopFront(LTNode* phead) {
	assert(phead && phead->next != phead);
	LTNode* del = phead->next;
	del->next->prev = phead;
	phead->next = del->next;
	free(del);
	del = NULL;

}

LTNode* LTFind(LTNode* phead,LTDataType x) {
	LTNode* pcur = phead->next;
	while (pcur!= phead) {
		if (pcur->data == x) {
			return pcur;

		}
		pcur = pcur->next;


	}
	return NULL;
}


void LTInsert(LTNode* pos, LTDataType x) {
	assert(pos);
	LTNode* node = LTBuyNode(x);
	node->next = pos->next;
	node->prev = pos;
	node->next->prev = node;
	pos->next = node;


}

void LTErase(LTNode* pos) {
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	pos = NULL;


}

void LTDestory(LTNode* phead) {
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur!=phead) {
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;

}
	free(phead);
	phead = NULL;

}
