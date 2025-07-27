#include<stdio.h>
#include<conio.h>
int main(){
	int n,i;
	printf("Enter a starting number i:");
	scanf("%d",&i);
	printf("Enter the ending number n:");
	scanf("%d",&n);
	if(i%2==0){
		i++;
	}
	
	
	
	
	/*for(;i<=n && i%2!=0;i+=2){                                      //for loop
		printf("%d\t",i);
	}*/
	
	
	
	
	for(;i<=n;i++){                                              //for loop using continue statement
		if(i%2==0){
		continue;
		}                                     
		printf("%d\t",i);
		
	}
	
	
	
	
	/*while(i<=n && i%2!=0){                                         //while loop
		printf("%d\t",i);
		i+=2;
	}*/
	
	
	
	
	/*do{                                                          //do while loop
		printf("%d\t",i);
		i+=2;
	}while(i<=n && i%2!=0);*/
	
	return 0;
}
