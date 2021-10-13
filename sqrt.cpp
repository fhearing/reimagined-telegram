#include<stdio.h>
int main(){
	float target, left, right, mid;
	left = 0.0f;
	printf("enter a number to get sqrt:");
	scanf("%f",&target); 
	right = target;
	mid = (left + right)/2;
	while(mid * mid - target > 0.000001 || mid * mid - target < -0.000001){
		if(mid * mid < target){
			left = mid;
		}
		else{
			right = mid;
		}
		mid = (left + right)/2;
	}
	printf("%f",mid);
	return 0;
}
