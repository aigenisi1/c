#include"contact.h"
#include"SeqList.h"
#include<stdio.h>
void contactinit(contact* con) {
	SLInit(con);
}
void contactdestroy(contact* con) {
	SLDestroy(con);
}

void contactadd(contact* con) {
	peoinfo info;
	printf();
	scanf("%s", info.name);
	//......
	SLpushback(con, info);
}
void contactdel(contact* con) {
	char name[NAME_MAX]
	printf("要删除的人\n");
	scanf("%s", name);
	int find = findname(con, name);
	if (find < 0) {
		printf("不存在\n");
		return;
	}
	SLErese(con, find);
	printf("删除成功");
}
void contactmodify(contact* con) {
	char name[NAME_MAX];
	printf();
	scanf("%s",name);
	int find = findname(con, name);
	if (find < 0) {
		printf();
		return;
	}
	printf("请输入新的姓名\n");
	scanf("%s", con->arr[find].name);

	//......
}

int findname(contact* con,char name[]) {
	for (int i = 0; i < con->size; i++) {
		if (0 == strcmp(con->arr[i].name, name)) {
			return i;

		}

	 }
	return -1;
}

void contactshow(contact* con) {
	printf("%s %s %s %s %s %s\n");
	for (int i = 0; i < con->size; i++) {
		printf("%s %s  %d %s %s\n", con->arr[i].name, con->.arr[i].gender, con->arr[i].age, con->arr[i].tel, con->arr[i].addr);

	}
}

void contactfind(contact* con) {
	char name[NAME_MAX];
	printf("要输入的姓名\n");
	scanf("%s", name);
	int find = findname(con, name);
	if (find < 0) {
		return;
		printf("%s %s %s %s %s %s\n");
		printf("%s %s  %d %s %s\n", con->arr[i].name, con->.arr[i].gender, con->arr[i].age, con->arr[i].tel, con->arr[i].addr);
	}
	
}
