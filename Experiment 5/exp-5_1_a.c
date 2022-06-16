#include<stdio.h>

int main(){
	int i = 1;
	for(i;i<6;i++)
	{
		int j = 0;
		for(j;j<i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
