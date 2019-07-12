#include "Stack.h"

void StackInit(Stack* ps)//栈的初始化
{
	ps->_capacity = 0;//栈的容量此时为0
	ps->_top = NULL;//此时的栈顶元素为0
}
void StackDestory(Stack* ps)//消除栈
{
	StackNode* tmp;
	while (ps->_top != NULL)
	{		
		tmp = ps->_top;
		ps->_top = ps->_top->_next;
		free(tmp);
	}
}
void StackPush(Stack* ps, STDataType x)//进栈
{
	StackNode*cur = (StackNode*)malloc(sizeof(StackNode));
	cur->_data = x;
	cur->_next = NULL;
	if (ps->_top == NULL)
	{
		ps->_top = cur;
		ps->_capacity++;
	}
	else
	{
		cur->_next = ps->_top;
		ps->_top = cur;
		ps->_capacity++;
	}
}
void StackPop(Stack* ps)//出栈
{
	if (ps->_top != NULL)
	{
		StackNode *tmp;
		tmp = ps->_top;
		ps->_top = ps->_top->_next;
		ps->_capacity--;
		free(tmp);
	}
}
void PrintStack(Stack*ps)
{
	for (StackNode *tmp = ps->_top; tmp != NULL; tmp = tmp->_next)
	{
		printf("%d->", tmp->_data);
	}
	printf("\n");
}