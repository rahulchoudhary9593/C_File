#include <stdio.h>
#include<conio.h>
int main(){
	int a,b,c,bigno;
	printf("enter a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
		bigno=a;
	}else{
		bigno=c;
	}     
	}else{
		if(b>c){
		bigno=b;
	}else{
		bigno=c;
	}     
	}
	printf("Biggest number is %d",bigno);                          
	return 0;
}
