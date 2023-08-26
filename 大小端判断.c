#include <stdio.h>
int main()
{
	int a =1;
	int ret = *(char*)&a;//取地址a,因为a是整型变量地址占四个字节我们只要第一个字节用来判断，所以强制类型转换为char类型，然后解引用
	if(ret==1)
		printf("小端\n");
	else
		printf("大端\n");

	return 0;
}