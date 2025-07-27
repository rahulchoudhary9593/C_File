//keep taking numbers as input from user until users enters a number which is multiple of 7
#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	do{
		printf("enter n");
		scanf("%d",&n);
		printf("number is %d\n",n);
	 	if(n%7==0){
		break;
	 	}	
	} while(1);
	return 0;
}
