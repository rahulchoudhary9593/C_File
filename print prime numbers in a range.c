#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter the number till which you want to print prime number:");
	scanf("%d",&n);
	if(n==1){
		printf("it is not prime and no other number possible");
	}
	for(int i=2;i<=n;i++){
		int isprime=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				isprime++;
			}
		}
		if(isprime<=2){
			printf("%d\t",i);
		}
	}
	return 0;
}

