#include<stdio.h>
#include<conio.h>
int main(){
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%100==0){
	if(year%400==0){                                       //For centurian year ex-1200,1300etc it has to be divisible for becoming a leap year
		printf("%d is a leap year",year);
	}else{
		printf("%d is not a leap year",year);
	}
	}else{
	if(year%4==0){                                        //for other years except centurian years ,it has to be divisible by 4 to become a leap year
		printf("%d is a leap year",year);
	}else{
		printf("%d is not a leap year",year);
	}	
	}
	return 0;
}
