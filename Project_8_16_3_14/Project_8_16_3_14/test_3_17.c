#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//ת���ַ�
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("\a");

	printf("%d\n", '\130');
	printf("\130\n");
	printf("%d\n", strlen("\t"));
	printf("%d\n", strlen("c:\test\328\test.c"));

	//if...else...���
	int input = 0;
	printf("��ӭѧϰC����(^^)\n");

	printf("��δ����ú�ѧϰC������?(1/0):");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("��һ�����õ�һ�ݺõ�offer~\n");

		//whileѭ��

		int line = 0;

		while (line <= 30000)
		{
			printf("�������:%d\n", line);
			line++;
		}
		if (line = 30000)
		{
			printf("��ϲ��,����Ϊ��ũ!\n");
		}

	}
	else
	{
		printf("����- -\n");
	}

	//����

	int num1 = 0;
	int num2 = 0;

	printf("������������:");
	scanf("%d%d", &num1, &num2);

	printf("����֮��Ϊ:%d", Add(num1, num2));

	return 0;
}