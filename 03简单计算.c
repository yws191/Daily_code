#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//数据类型
	int a = 10;
	int b = 20;
	int c = a + b;
	//int a;
	//int b;
	//int c;

	//__asm
	//{
	//	mov a, 10
	//	mov b, 20
	//	mov eax, a
	//	add eax, b
	//	mov c, eax
	//}
	printf("%d\n", c);

	printf("hello world");

	//system("pause");//getchar();
	return 0;
}