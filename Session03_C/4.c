#include <stdio.h> 
int main(){
	float num1,num2,num3,sum,avg; 
	printf("nhap 3 so ="); 
	scanf("%f %f %f",&num1,&num2,&num3); 
	sum=num1+num2+num3 ; 
	avg = (num1+num2+num3/3); 
	printf("Tong = %.2f\n",sum); 
	printf("Trung binh = %.2f\n",avg); 
	return 0 ; 
}
