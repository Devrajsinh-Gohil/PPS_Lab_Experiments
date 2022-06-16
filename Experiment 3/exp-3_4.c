#include<stdio.h>

int main(){
	int n;
	printf("Enter anumber: ");
	scanf("%d", &n);
	int counter = 0;
	int ans = 1;
	while(counter<n){
		ans *= counter+1;
		counter++;
	}
	printf("Factorial of %d is: %d", n, ans);
	return 0;
}
