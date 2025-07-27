#include<stdio.h>
#include<conio.h>
int main(){
	int n,digit,postn,sum=0;                             
	printf("Enter a number n:");
	scanf("%d",&n);
		
	/*while(1){                                          
		postn=n/10;                                       //find digit we follow 1st,2nd and 3rd(9-11 line) steps - more clarification se sum of digit of a giving number.cpp
		digit=n-postn*10;                                
		n=postn;                                         
		sum=sum*10+digit;                                 //add the digits reversely with 10 multiple to find the reverse of number                                
		if(n==0){                                        
			break;
		}
	}
	printf("reverse is %d",sum);*/
	
	
	
	
	
	/*for(;1;){
		postn=n/10;                                      
		digit=n-postn*10;                                
		n=postn;                                         
		sum=sum*10+digit;                                                              
		if(n==0){                                        
			break;
		}
	}
	printf("reverse is %d",sum);*/
	
	
	do{
		postn=n/10;                                       
		digit=n-postn*10;                                
		n=postn;                                         
		sum=sum*10+digit;                                                               
		if(n==0){                                        
			break;
		}
	}while(1);
	printf("reverse is %d",sum);
	

	
	return 0;
}
