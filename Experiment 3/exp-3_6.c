#include<stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("First %d terms of Fibbonaci series are:\n",n);
	int count = 0, f1 = 0, f2 = 1;
	int fn = f1+f2;
	printf("%d ",f1);
	while(count<n-1){
		printf("%d ",f2);
		f1 = f2;
		f2 = fn;
		fn = f1+f2;
		count++;
	}
	return 0;
}
