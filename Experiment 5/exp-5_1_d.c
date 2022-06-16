#include<stdio.h>

int main(){
	int i = 5;
	for(i;i>0;i--)
	{
		int j = 1;
		for(j;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
