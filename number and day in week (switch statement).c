#include<stdio.h>
#include<conio.h>
int main(){
	int day;
	printf("Enter day(1-7):");
	scanf("%d",&day);
	switch(day){
		case 1:printf("SUNDAY\n");
			break;
		case 2:printf("MONDAY\n");
			break;
		case 3:printf("TUESDAY\n");
			break;
		case 4:printf("WEDNSDAY\n");
			break;
		case 5:printf("THURSDAY\n");
			break;
		case 6:printf("FRIDAY\n");
			break;
		case 7:printf("SATDAY\n");
			break;
		default:printf("not a valid day\n");
			break;
	}
	return 0;
}
