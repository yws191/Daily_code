#include <stdlib.h>
#include <stdio.h>

int main02(void)
{
	//cmd���� calc ������ notepad ���±� mspaint ��ͼ��
	//system("calc");
	//system���Դ�һ���ⲿ��Ӧ�ó���  �����·�� ��Ҫʹ��\\  ����/
	int value;
	//value = system("D:/Desktop/FeiQ.exe");
	value = system("calc");
	//%d��һ��ռλ������ʾ���һ����������
	printf("%d\n", value);
	return 0;
}