#include "stdio.h"
#include <stdlib.h>

int fib(int n){
	int an, an_1 = 1, an_2 = 1;
	int i;
	if (n < 2){
		return 1;
	}
	for (i = 2; i < n; ++i){
		an = an_1 + an_2;

		an_2 = an_1;
		an_1 = an;
	}
	return an;
}

int main()
{
	int n = fib(10);
	printf("%d ", n);


	//int a = 5;
	//if (a = 0)//ע�����λ���Ǹ�ֵ�������ж����
	//{
	//	printf("%d", a - 10);
	//}
	//else
	//{
	//	printf("%d", a++);//a++�ķ���ֵ����a��++a�ķ���ֵ��a+1
	//}

	/*double **a[3][4];
	printf("%d ", sizeof(a));*/

	/*char acHello[] = "hello\0world";
	char acNew[15] = { 0 };
	strcpy(acNew, acHello);
	printf("%d,%d", strlen(acNew), sizeof(acHello));*/
	system("pause");
	return 0;
}