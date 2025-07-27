#include<stdio.h>
#include<conio.h>
int main(){
	char color;
	printf("Enter the letter in capital in VIBGYOR:");
	scanf("%c",&color);
	switch(color){
		case 'V':printf("V-VIOLET\n");
		break;
		case 'I':printf("I-INDIGO\n");
		break;
		case 'B':printf("B-BLUE\n");
		break;
		case 'G':printf("G-GREEN\n");
		break;
		case 'Y':printf("Y-YELLOW\n");
		break;
		case 'O':printf("O-ORANGE\n");
		break;
		case 'R':printf("R-RED\n");
		break;
		default:printf("follow the instructions\n");
		break;
	}
	return 0;
}
