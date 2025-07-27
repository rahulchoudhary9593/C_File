#include<stdio.h>
#include <ctype.h>                                      //to usetoupper() function
int main(){
	char word;
	printf("Enter alphabet(A-E)");
	scanf(" %c",&word);                                 //adding space before %c to ignore white spaces in input
	word= toupper(word);                               // to change lower or upper case into upper case
	switch(word){
		case 'A':printf("APPLE\n");
			break;
		case 'B':printf("BAT\n");
			break;
		case 'C':printf("CAT\n");
			break;
		case 'D':printf("DOG\n");
			break;
		case 'E':printf("EAGLE\n");
			break;
		default:printf("Invalid input. Please enter a letter between A and E.\n");
			break;
	}
	return 0;
}
