#include <stdio.h> 
int main(){
	float Celsius ; 
	printf("nhap vao C = "); 
	scanf("%f",&Celsius) ; 
	float Fahrenheit = Celsius * 9/5 + 32 ; 
	printf("Fahrenheit = %2.f", Fahrenheit) ; 
	return 0 ; 
}
