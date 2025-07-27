#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int num,temp,add,digit,sameno,time,dono,power;
	add=0;
	time=1;
	printf("Enter a number:");
	scanf("%d",&num);
	sameno=num; 
	dono=num;                                                                //i give the value of num to sameno , so that i can verify at the end of program
	
	while(1){
		dono=dono/10;                                                       //logic is i give time as 1 and count the no of digits . ofcourse there will be a more no , so after this loop i deduct the number                                                              //here i count the no of digits so i can take to the power that number
		if(dono==0){
			break;
		}
		time++;  
	}
	                                                      
	while(num>0){                                                           //num>0: armstrong no is always positive so no need to worry
		temp=num/10;                                                        //i divide num/10 and then multiply it so that i can got previous 10 multiple no ex-576/10=57.6=57 and then 57*10=570
		digit=num-temp*10;                                                  //i substract it from num so that i can get the digit for ex in 576, after process i will get 6, later 7 and so on
		power=pow(digit,time);                                     //formula for a^b            
		add=add+power;                                          //i take a variable of value 0 so that i can add the cube of digits
		num=temp;                                                           //i give the value of temp to num, so that i can carry on the process , i already save the real num in sameno, so no need to worry
	}
	printf("Inputted number is %d\n",sameno);
	printf("after addition of cubes of digits, number is %d\n",add);
	if(sameno==add){
		printf("%d is an armstrong number\n",sameno);
	}else {
		printf("%d is not an armstrong number\n",sameno);
	}
	return 0;
}
