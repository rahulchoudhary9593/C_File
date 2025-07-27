#include<stdio.h>
void squareno(int n);
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	squareno(n);
	return 0;
}
void squareno(int n){
	printf("square is %d\n",n*n);
}
