#include<stdio.h>
#include<conio.h>
int main(){
	for(int i=5;i<=50;i++){
		if(i%2==0){
			continue;
		}
		printf("%d\t",i);
	}
	
	return 0;
}
