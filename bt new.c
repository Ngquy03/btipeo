#include<stdio.h>
 int main(){
 	float a,b,c;
 	printf("diem toan:");
 	scanf("%f",&a);
 	printf("diem van:");
 	scanf("%f",&b);
 	printf("diem anh:");
 	scanf("%f",&c);
 	float d;
 	d=((a*2)+(b*2)+c)/5;
 	printf("diem trung binh la:%.1f\n",d);
 	if(d<5){
 		printf("hoc sinh kem");
	 }else if(5<d<8){
	 	printf("hoc sinh trung binh");
	 }else if(d>8){
	 	printf("hoc sinh gioi",d);
	 }
	 return 0;
 }
