#include<stdio.h>
chai(int m,int b[]){
	int n;
	for(int i = 0;;i++){
		n = m % 10;
		b[i] = n;
		m = (m - n)/10;
		if(m == 0) break;
	}
}
int main(){
	int b[10] = {0},num = 0;
	for(int m = 0;;m++){
		num = 0;
		for(int n = 0;n <= m;n++){
			for(int i = 0;i < 10;i++){
				b[i] = 0;
			}
			chai(n,b);
			for(int i = 0;i < 10;i++){
				if(b[i] == 1){
					num++;
				}
			}
		}
		if(m == num&&num > 1){
			printf("f(%d) = %d",m,num);
			break;
		}
		else printf("%d\n",m);
	}
	return 0;
}//199981
