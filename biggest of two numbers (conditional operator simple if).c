#include <stdio.h>
int main(){
	int a,b,bigno;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	if(a>b){
		bigno=a;
	}
	if(b>a){
		bigno=b;
	}  
	printf("Biggest number is %d",bigno);                        
	return 0;
}
