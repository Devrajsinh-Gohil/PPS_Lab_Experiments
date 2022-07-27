#include<stdio.h>

int main(){
	int i = 5;
	for(i;i>0;i--)
	{
		int j = 0;
		for(j;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
