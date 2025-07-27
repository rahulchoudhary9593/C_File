#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,bigno;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	bigno=(a>b)?((a>c)?a:b):(b>c)?b:c;
	printf("%d is the biggest\n",bigno);
	return 0;
}
