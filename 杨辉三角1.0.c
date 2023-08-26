#include <stdio.h>
int main()
{
	int n;
	int i,j;
	int data[30][30]={1};//初始化第一行为一

	scanf("%d",&n);
	
	for(i=1;i<n;i++)//从第二行开始
	{
		data[i][0]=1;//每行第一列都为1
		for(j=1;j<=i;j++)
		{
			data[i][j]=data[i-1][j]+data[i-1][j-1];
		}
	}

	for(i=0;i<n;i++)//打印
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",data[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
