#include<stdio.h>

int main(){
	int i = 1;
	for(i;i<6;i++)
	{
		int j = 1;
		for(j;j<6;j++)
		{
			if(j>5-i){
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
