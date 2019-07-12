#include "Stack.h"

void Test()
{
	Stack test;
	StackInit(&test);
	StackPush(&test, 1);
	StackPush(&test, 2);
	StackPush(&test, 3);
	StackPush(&test, 4);
	StackPush(&test, 5);
	StackPush(&test, 6);
	StackPop(&test);
	PrintStack(&test);
}

int main()
{
	Test();
	system("pause");
	return 0;
}