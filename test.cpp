#include"list.h"

void test01() {
	LTNode* plist = NULL;
	LTInit(&plist);
	LTPushBack(plist, 1);
	LTPrint(plist);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPrint(plist);

	LTPushFront(plist, 5);
	LTPopBack(plist);
	LTPrint(plist);

	//LTPopFront(plist);
	//LTPrint(plist);
	LTNode* find = LTFind(plist, 1);
	if (find) {
		printf("zhaodao\n");

	}
	else {
		printf("no");
	}
	LTInsert(find, 44);
	LTPrint(plist);

	LTErase(find);
	find = NULL;
	LTDestory(plist);
	plist = NULL;
}


int main() {
	test01();
	
}