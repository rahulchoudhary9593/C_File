#include<stdio.h>
#include<conio.h>
int main(){
	int n,digit,postn,sum=0;                             
	printf("Enter a number n:");
	scanf("%d",&n);
	int firstn=n;                                         //for checking if the number and reverse same or not
		
	while(1){                                          
		postn=n/10;                                       //find digit we follow 1st,2nd and 3rd(9-11 line) steps - more clarification se sum of digit of a giving number.cpp
		digit=n-postn*10;                                
		n=postn;                                         
		sum=sum*10+digit;                                 //add the digits reversely with 10 multiple to find the reverse of number                                
		if(n==0){                                        
			break;
		}
	}
	
	
	
	
	
	
	/*for(;1;){
		postn=n/10;                                      
		digit=n-postn*10;                                
		n=postn;                                         
		sum=sum*10+digit;                                                              
		if(n==0){                                        
			break;
		}
	}*/
	
	
	/*do{
		postn=n/10;                                       
		digit=n-postn*10;                                
		n=postn;                                         
		sum=sum*10+digit;                                                               
		if(n==0){                                        
			break;
		}
	}while(1);*/
	printf("number is %d\n",firstn);
	printf("reverse is %d\n",sum);
	if(firstn==sum){
		printf("%d is a palindrome number",firstn);
	}else {
		printf("%d is not a palindrome number",firstn);
	}
	

	
	return 0;
}
