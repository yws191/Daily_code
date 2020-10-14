#include <stdlib.h>
#include <stdio.h>

int main02(void)
{
	//cmd命令 calc 计算器 notepad 记事本 mspaint 画图板
	//system("calc");
	//system可以打开一个外部的应用程序  如果带路径 需要使用\\  或者/
	int value;
	//value = system("D:/Desktop/FeiQ.exe");
	value = system("calc");
	//%d是一个占位符，表示输出一个整型数据
	printf("%d\n", value);
	return 0;
}