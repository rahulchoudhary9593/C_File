#include<stdio.h>
#include<math.h>
int squareroot(int n);
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	squareroot(n);
	return 0;
}
int squareroot(int n){
	int ans=sqrt(n);
	printf("square root is %d\n",ans);
}
