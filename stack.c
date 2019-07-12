#include "Stack.h"

void StackInit(Stack* ps)//ջ�ĳ�ʼ��
{
	ps->_capacity = 0;//ջ��������ʱΪ0
	ps->_top = NULL;//��ʱ��ջ��Ԫ��Ϊ0
}
void StackDestory(Stack* ps)//����ջ
{
	StackNode* tmp;
	while (ps->_top != NULL)
	{		
		tmp = ps->_top;
		ps->_top = ps->_top->_next;
		free(tmp);
	}
}
void StackPush(Stack* ps, STDataType x)//��ջ
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
void StackPop(Stack* ps)//��ջ
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