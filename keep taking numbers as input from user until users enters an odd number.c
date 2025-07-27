//keep taking numbers as input from user until users enters an odd number
#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	do{
		printf("enter n");
		scanf("%d",&n);
		printf("number is %d\n",n);
	 	if(n%2!=0){
		break;
	 	}	
	} while(1);
	return 0;
}
