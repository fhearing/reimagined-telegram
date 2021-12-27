#include<stdio.h>
#include<string.h>
store(char ress[],char str1[][10],int n1,char str2[][10],int n2,int *p){
	int n = 0;
	for(int m = 0;;m++){
		for(int a = 0;ress[n] != 'x';a++,n++){
			str1[m][a] = ress[n];
		}
		n++;
		for(int a = 0;ress[n] != ','&&ress[n] != '\0';a++,n++){
			str2[m][a] = ress[n];
		}
		n++;
		(*p)++;
		if(ress[n] == '\0') break;
	}
}
zhuanhuan(int num1[],char str1[][10],int n){
	for(int m = 0;m < 100;m++){
		int z;
		z = strlen(str1[m]);
		if(z==4){
			num1[m] = (int)(str1[m][0] - 48) * 1000 + (int)(str1[m][1] - 48) * 100 + (int)(str1[m][2] - 48) * 10 + (int)(str1[m][3] - 48);
		}
		else if(z==3){
			num1[m] = (int)(str1[m][0] - 48) * 100 + (int)(str1[m][1] - 48) * 10 + (int)(str1[m][2] - 48);
		}
		else if(z==2){
			num1[m] = (int)(str1[m][0] - 48) * 10 + (int)(str1[m][1] - 48);
		}
		else if(z==1){
			num1[m] = (int)(str1[m][0] - 48);
		}
	}
}
int bidaxiao(int a[],int num){
	int min = a[0];
	for(int m = 0;m < num;m++){
		if(a[m] < min){
			min = a[m];
		}
	}
	return min;
}
int main(){
	char ress[2048] = "'\0'",str1[100][10] = {'\0'},str2[100][10] = {'\0'};
	int x,y,pro,num1[100] = {0},num2[100] = {0},cha[100],min,num = 0,*p;
	p = &num;
	scanf("%s",&ress[0]);
	scanf("%d %d",&x,&y);
	store(ress,str1,100,str2,100,p);
	pro = x * y;
	zhuanhuan(num2,str2,100);
	zhuanhuan(num1,str1,100);
	for(int m = 0;m < 100;m++){
		cha[m] = pro - num1[m] * num2[m];
		if(cha[m] < 0) cha[m] = 0 - cha[m];
	}
	min = bidaxiao(cha,num);
	for(int m = 0;m < num;m++){
		if(min == cha[m])
		printf("The chosen one is %sx%s",str1[m],str2[m]);
	}
	return 0;
}
