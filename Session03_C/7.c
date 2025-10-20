#include <stdio.h> 
int main(){
	int n , a , b , c , d,sum ;  
	printf("nhap so nguyen 4 chu so = "); 
	scanf("%d",&n); 
	a = n%10 ; 
	b = (n/10)%10 ; 
	c = (n/100)%10 ; 
	d = (n/1000)%10 ;
	sum = a+b+c+d ; 
	printf("tong = %d",sum) ; 
	return 0 ; 
}
