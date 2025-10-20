#include <stdio.h> 
#include <math.h>
int main(){
	int a,b; 
	double S ; 
	printf("nhap so nguyen duong a = ");
	scanf("%d", &a); 
	printf("nhap so nguyen duong b = ");
	scanf(" %d", &b); 
	S = sqrt(a + sqrt(b+1))+sqrt(b+sqrt(pow(a,2)+pow(b,2))); 
	printf("S=%.2f",S); 
	return 0 ; 
}
