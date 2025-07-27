//my program




#include<stdio.h>
#include<conio.h>
int main(){
	int n,isprime;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n==1){
		printf("it is not prime");
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			printf("it is not prime");
			isprime=0;
			break;
		}		
		
	}
	if(isprime!=0){
		printf("it is prime");
	}

	return 0;
}

/*

// extra program

#include<stdio.h>
#include<conio.h>
int main(){
	int n,totalno=0;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n==1){
		printf("it is not prime");
	}
	for(int i=1;i<=n;i++){
		if(n%i==0){
			totalno++;
		}
		
	}
	if(totalno<=2){
		printf("it is prime");
	}else{
		printf("it is not prime");
	}
	return 0;
}


*/
