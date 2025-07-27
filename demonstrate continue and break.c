#include<stdio.h>
#include<conio.h>
int main(){
	
	
//write a code to print 1 to 10 , but condition is if 4 comes , don't print it and go to next number but if 8 comes then print 8 and stop the print and go to next statement
	for(int i=1;i<=10;i++){
		if(i==4){
			continue;
		}
		printf("%d\t",i);
		if(i==8){
			break;
		}
	}
	printf("THANK YOU");
	return 0;
}
