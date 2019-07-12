#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>

// 支持动态增长的栈
typedef int STDataType;
typedef struct StackNode
{
	struct StackNode * _next;
	STDataType _data;
}StackNode;

typedef struct Stack
{
	StackNode* _top; // 栈顶
	STDataType _capacity; // 容量
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