#include<stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int r = 0;
	while(n>0){
		r = (10*r)+n%10;
		n = n/10;
	}
	printf("Reverse of given number is: %d", r);
	return 0;
}
