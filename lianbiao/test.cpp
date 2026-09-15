#include"lb.h"

void SListTest01() {
	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 1;

	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	node2->data = 2;


	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	node3->data = 3;

	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
	node4->data = 4;

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	SLTNode* plist = node1;
	SLTPrint(plist);
}

void SListTest02() {
	SLTNode* plist = NULL;
	SLTPushBack(&plist,1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPrint(plist);


	/*SLTPopBack(&plist);
	SLTPopBack(&plist);
	SLTPrint(plist);*/

	/*SLTNode* find = SLTFind(plist, 1);
	if (find == NULL) {
		printf("√ª’“µΩ");

	}
	else {
		printf("’“µΩ\n");
	}*/
	SLTNode*find = SLTFind(plist, 1);
	SLTInsert(&plist, find, 18);
	SLTPrint(plist);
	SLTEraseAfter( find);
	SLTPrint(plist);
	SLTDestroy(&plist);
	SLTPrint(plist);
}

int main() {
	//SListTest01();
	SListTest02();

	return 0;
}

