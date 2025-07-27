//write a program to print 1 to n numbers using loops
#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter a number n:");
	scanf("%d",&n);
	
	
	
	/*for(int i=1;i<=n;i++){                                     //for loop
		printf("%d\t",i);
	}*/
	
	
	
	
	/*int i=1;                                                  //while loop
	while(i<=n){
		printf("%d\t",i);
		i++;	
	}*/
	
	
	
	
	int i=1;                                                     //do while loop
	do{
		printf("%d\t",i);
		i++;
	}while(i<=n);
	return 0;
}  
