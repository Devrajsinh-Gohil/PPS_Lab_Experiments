#include<stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int l = n%10;
	int f;
	while(n>0){
		f = n%10;
		n = n/10;
	}
	int sum = f+l;
	float avg  = (float)sum/2;
	printf("Sum of first and last digit is: %d\n",sum);
	printf("Average of first and last digit is: %0.2f\n",avg);
	return 0;
}
