#include<stdio.h>

int main()
{
	int a = 0;
	printf("Enter a number between 1 to 7, both inclusive: ");
	scanf("%d",&a);
	if(a>=1 && a<=7)
	{
		switch(a){
			case(1):
				printf("Sunday");
				break;
			case(2):
				printf("Monday");
				break;
			case(3):
				printf("Tuesday");
				break;
			case(4):
				printf("Wednesday");
				break;
			case(5):
				printf("Thursday");
				break;
			case(6):
				printf("Friday");
				break;
			case(7):
				printf("Saturday");
				break;
		}
	}
	else
	{
		printf("invalid input");
	}
	return 0;
}
