#include<stdio.h>
void areacircle(float radius);
void areasquare(float side);
void arearectangle(float length, float width);
int main(){
	float s,r,l,w;
	char type;
	printf("Enter C for circle , S for square and R for rectangle to find its area :");
	scanf("%c",&type);
	if(type=='C' || type=='c'){
		printf("Enter radius:");
		scanf("%f",&r);
		areacircle(r);
	}else if(type=='S' || type=='s'){
		printf("Enter side:");
		scanf("%f",&s);
		areasquare(s);
	}else if(type=='R' || type=='r'){
		printf("Enter length and width:");
		scanf("%f%f",&l,&w);
		arearectangle(l,w);
	}
	return 0;
}

void areacircle(float radius){
	printf("Area of circle is %f\n",3.14*radius*radius);
}
void areasquare(float side){
	printf("Area of square is %f\n",side*side);
}
void arearectangle(float length, float width){
	printf("Area of rectangle is %f\n",length*width);
}
