#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

enum Sex
{
	MALE = 5,
	FEMALE,
	SECRET
};

int main()
{
	printf("hello world\n");

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	int age = 17;
	double weight = 43.2;

	age = age + 1;
	weight = weight + 10;

	printf("ƒÍ¡‰=%d\n", age);
	printf("ÃÂ÷ÿ=%lf\n", weight);

	int a = 0;
	int b = 0;
	int sum = 0;

	//scanf("%d %d", &a, &b);
	sum = a + b;

	printf("%d %d\n", a + b, sum);

	extern int g_val;
	printf("%d\n", g_val);

	enum f f = MALE;

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);


	char arr[] = "hello";

	char arr1[] = { "abc" };
	char arr2[] = { 'a','b','c' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//printf("%d\n",strlen("huxiaoke"));

	//int len = strlen("huxiaoke");
	//printf("%d\n", len);

	return 0;
}
