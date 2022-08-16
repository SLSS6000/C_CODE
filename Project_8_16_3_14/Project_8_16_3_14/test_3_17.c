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
	//转义字符
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("\a");

	printf("%d\n", '\130');
	printf("\130\n");
	printf("%d\n", strlen("\t"));
	printf("%d\n", strlen("c:\test\328\test.c"));

	//if...else...语句
	int input = 0;
	printf("欢迎学习C语言(^^)\n");

	printf("你未来会好好学习C语言吗?(1/0):");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("你一定会拿到一份好的offer~\n");

		//while循环

		int line = 0;

		while (line <= 30000)
		{
			printf("已码代码:%d\n", line);
			line++;
		}
		if (line = 30000)
		{
			printf("恭喜你,晋升为码农!\n");
		}

	}
	else
	{
		printf("进厂- -\n");
	}

	//函数

	int num1 = 0;
	int num2 = 0;

	printf("请输入两个数:");
	scanf("%d%d", &num1, &num2);

	printf("两数之和为:%d", Add(num1, num2));

	return 0;
}