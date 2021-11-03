#include<stdio.h>
int n_th_power(int m, int n){
	int sum = 1;
	for(int s = 0; s < m; s++){
				sum *= n;
			}
	return sum;
}
int main(){
	int p, q, sum1, sum2, sum, a, b, c, d, e;
	printf("Enter the range of p\nmin:");
	scanf("%d", &a);
	printf("max:");
	scanf("%d", &b);
	printf("Enter the range of q\nmin:");
	scanf("%d", &c);
	printf("max:");
	scanf("%d", &d);
	for(p = a; p <= b; p++){
		for(q = c; q <= d; q++){
			sum1 = n_th_power(p, q);//q^p
			sum2 = n_th_power(q, p);//p^q
			sum = sum1 + sum2;
			if(sum > 1){
				for(e = 2; e < sum; e++)
				if(sum % e == 0)
				break;
			if(e >= sum)
			printf("p = %d, q = %d\n", p, q);
			}
		}
	}
	return 0;
}
