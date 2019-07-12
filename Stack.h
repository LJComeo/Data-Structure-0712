#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>

// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct StackNode
{
	struct StackNode * _next;
	STDataType _data;
}StackNode;

typedef struct Stack
{
	StackNode* _top; // ջ��
	STDataType _capacity; // ����
}Stack;
void StackInit(Stack* ps);
void StackDestory(Stack* ps);

void StackPush(Stack* ps, STDataType x);
void StackPop(Stack* ps);
STDataType StackTop(Stack* ps);
int StackEmpty(Stack* ps);
int StackSize(Stack* ps);
void Test();
void PrintStack(Stack*ps);
#endif //STACK_H_