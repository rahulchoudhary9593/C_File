#include<stdio.h>
#include<conio.h>
int main(){
	int n,digit,postn,sum=0;                              //postn to change the value of n after the calculation
	printf("Enter a number n:");
	scanf("%d",&n);
		
	/*while(1){                                          //1 is a true value , explain that all value can be entered
		postn=n/10;                                      //first divide by 10 and multiple by 10 to find the previous 10 multiple ex 576/10=57.6,in int it is 57 and 57*10=570
		digit=n-postn*10;                                //then substract from postn to find the digit
		n=postn;                                         //now after removal of a digit the postn is our new n
		sum=sum+digit;                                    //add the digit
		if(n==0){                                         //once we got the value 0 its over
			break;
		}
	}
	printf("sum is %d",sum);
	
	*/
	
	
	
	
	
	
	
	
	
	/*for(;1;n=postn){                                        //in updation part we can write n=postn or we can write it in between {} . i comment out that part too
		postn=n/10; 
		digit=n-postn*10;
		//n=postn;
		sum=sum+digit;
		if(n==0){                           
			break;
		}
	}
	printf("sum is %d",sum);*/
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	do{
		postn=n/10; 
		digit=n-postn*10;
		n=postn;
		sum=sum+digit;
		if(n==0){                           
			break;
		}	
	}while(1);
	printf("sum is %d",sum);
	
	return 0;
}
