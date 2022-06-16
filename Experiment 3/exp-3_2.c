#include<stdio.h>
#include<stdlib.h>
#include<climits>
int main(){
	int n = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	int counter = 0;
	printf("Enter 10 numbers:\n");
	while(counter<10){
		scanf("%d",&n);
		if (n>max){
			max = n;
		}
		else if(n<min){
			min = n;
		}
		counter++;
	}
	printf("Maximum number is: %d\nMinimum number is: %d", max, min);
	return 0;
}
