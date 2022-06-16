#include<stdio.h>

int main()
{
	int array[10];
	int i;
	for(i = 0; i<10; i++){
		printf(" please enter %d number: ",i+1);
		scanf("%d",&array[i]);
	}
	int min = array[0];
	int max = array[0];
	for ( i = 1; i<10; i++)
	{
		if(array[i]>max)
		{
			max = array[i];
		}
	}
		for ( i = 1; i<10; i++)
	{
		if(array[i]<min)
		{
			min = array[i];
		}
	}
	printf("===================\n");
	printf(" Minimum = %d\n Maximum = %d",min,max);
	return 0;
}
