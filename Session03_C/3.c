#include <stdio.h> 
#include <math.h> 
int main(){
	float r , chu_vi , dien_tich ; 
	printf("Nhap ban kinh r = "); 
	scanf("%f",&r); 
	chu_vi= 2*M_PI*r ;  
	dien_tich=M_PI*pow(r,2); 
	printf("Chu vi =%.2f\n",chu_vi); 
	printf("Dien tich = %.3f\n",dien_tich); 
	return 0 ; 
}
