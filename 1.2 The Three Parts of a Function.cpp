#include<stdio.h>
int div(int a,int b);
int main(){
	int result=div(16,8);
	printf("sum=%d\n",result);
}
int div(int a,int b){
	return a/b;
}

