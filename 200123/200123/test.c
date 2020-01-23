#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char str[] = "abcdef";
	int size = strlen(str);
	char* p = str;
	int a = size / 2;
	int b = 0;
	int i = 0;
	for (i; i < a; i++) 
	{
		int tmp;
		tmp = *(p + i);
		*(p + i) = *(p + size - 1 - i);
		*(p + size - 1 - i) = tmp;
	}
	puts(str);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<string.h>
void Reverse(char arr[])
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < len / 2; i++)
	{
		char a = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = a;
	}
	printf("%s ", arr);
}

int main()
{
	char arr[] = "abcdef";
	Reverse(arr);
	return 0;
}