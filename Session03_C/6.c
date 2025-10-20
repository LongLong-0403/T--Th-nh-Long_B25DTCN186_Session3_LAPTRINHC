#include <stdio.h> 
int main(){
	float bottom_edge , side_edge , acreage; 
	printf("canh day = "); 
	scanf("%f/n",&bottom_edge); 
	printf("canh ben ="); 
	scanf("%f",&side_edge); 
	acreage =(bottom_edge*side_edge)/2 ; 
	printf("dien_tich=%.2f",acreage); 
	return 0 ; 
}
