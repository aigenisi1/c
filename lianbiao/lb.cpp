#include"lb.h"
void SLTPrint(SLTNode*phead) {
	SLTNode* pcur = phead;
	while (pcur) {
		printf("%d->",pcur->data);
		pcur = pcur->next;

	}
	printf("NULL\n" );
}

SLTNode* SLTBuyNode(SLTDataType x) {
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL) {
		printf("ÉêÇëÊ§°Ü");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
//Î²²å
void SLTPushBack(SLTNode** pphead, SLTDataType x) {
	SLTNode* newnode = SLTBuyNode(x);
	assert(pphead);
	if (*pphead==NULL) {
		*pphead = newnode;
	}
	else {
		SLTNode* ptail = *pphead;
		while (ptail->next) {
			ptail = ptail->next;

		}
		ptail->next = newnode;
	}
}

void SLTPushFront(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLTNode** pphead) {
	assert(pphead && *pphead);
	SLTNode* ptail = *pphead;
	SLTNode* prev = *pphead;
	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
	}
	else {
		SLTNode* ptail = *pphead;
		SLTNode* prev = *pphead;
		while (ptail->next) {
			prev = ptail;
			ptail = ptail->next;

		}
		prev->next = NULL;
		free(ptail);
		ptail = NULL;

	}
}
void SLTPopFront(SLTNode** pphead) {
	assert(pphead && *pphead);
	SLTNode* pcur = *pphead;
	*pphead = pcur->next;
	free(pcur);
	pcur = NULL;
	}

SLTNode* SLTFind(SLTNode* phead, SLTDataType x) {
	SLTNode* pcur = phead;
	while (pcur) {
		if (pcur->data == x) {
			return pcur;
		}
		pcur = pcur->next;

	 }
	return NULL;
}



void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x) {
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	if (pos == *pphead) {
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else{
		SLTNode * prev = *pphead;
	while (prev->next != pos) {
		prev = prev->next;

	}
	newnode->next = pos;
	prev->next = newnode;
}
	}

void SLTInsertAfter(SLTNode* pos, SLTDataType x) {
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;

}



void SLTErase(SLTNode** pphead, SLTNode* pos) {
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* prev = *pphead;
	if (pos == *pphead) {
		SLTPopFront(pphead);

	}
	else {
		while (prev->next != pos) {
			prev = prev->next;

		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SLTEraseAfter(SLTNode* pos) {
	assert(pos&&pos->next);
	SLTNode* del = pos->next;
	pos->next = (pos->next)->next;
	free(del);
	del = NULL;
}


void SLTDestroy(SLTNode** pphead) {
	assert(pphead&&*pphead);
	SLTNode* prev = *pphead;
	while (*pphead) {
		*pphead = (*pphead)->next;
		free(prev);
		prev = *pphead;
	}
	prev = NULL;
	*pphead = NULL;
}








