#include<stdio.h>
#include<conio.h>
int main(){
	int num=0;
	/*while(num%2==0 && num<=100){
		printf("%d is even\t",num);
		num=num+2;
	}*/
	do{
		printf("%d is even\t",num);
		num=num+2;	
	}while(num%2==0 && num<=100);
	printf("end of program");
	return 0;
}
