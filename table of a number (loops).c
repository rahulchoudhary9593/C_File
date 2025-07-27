//table of a number using loop
#include<stdio.h>
#include<conio.h>
int main(){
	int num,multi;
	printf("Enter a number:");
	scanf("%d",&num);
	/*for(int i=1;i<=10;i++){
		multi=i*num;
		printf("%d * i=%d",num,multi);
	}*/
	int i=1;
	while(i<=10){
		multi=i*num;
		printf("%d * %d=%d\n",num,i,multi);
		i++;
	}
	
	return 0;
}
