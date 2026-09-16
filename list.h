#pragma once

#include"stdio.h"
#include"stdlib.h"
#include"assert.h"


typedef int LTDataType;
typedef struct ListNode {
	LTDataType data;
	struct ListNode*prev;
	struct ListNode* next;

 }LTNode;

void LTInit(LTNode** pphead);


void LTPushBack(LTNode*phead,LTDataType x);

void LTPrint(LTNode* phead);

void LTPushFront(LTNode* phead,LTDataType x);

void LTPopBack(LTNode* phead);

void LTPopFront(LTNode* phead);

LTNode* LTFind(LTNode* phead,LTDataType x);

void LTDestory(LTNode* phead);

void LTInsert(LTNode* pos, LTDataType x);


void LTErase(LTNode* pos);
