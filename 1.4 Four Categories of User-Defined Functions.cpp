#include<stdio.h>
void Message(){
	printf("welcome a c\n");
}
int getyear(){
	return 2024;
}
int printsum(int a,int b){
	printf("sum=%d\n",a+b);
}
int multiply(int a, int b){
	return a*b;
}
int main(){
	Message();
	printf("year=%d\n",getyear());
	printsum(8,6);
	printf("product=%d\n",multiply(8,6));
	return 0;
}


