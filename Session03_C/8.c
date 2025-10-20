#include <stdio.h> 
int main(){
	int n , a , b , c , d,inverse_number;  
	printf("nhap so nguyen 4 chu so = "); 
	scanf("%d",&n); 
	a = n%10 ; 
	b = (n/10)%10 ; 
	c = (n/100)%10 ; 
	d = (n/1000)%10 ;
	inverse_number= a*1000+b*100+c*10+d ; 
	printf("so nghich dao = %d",inverse_number) ; 
	return 0 ; 
}
