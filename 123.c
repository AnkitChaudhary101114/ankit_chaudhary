#include<stdio.h>
 int main(){
 	int a;
 	printf("enter a number\n");
 	scanf("%d",&a);
 	
 	if(a%2==0){
 		printf("%dis a even number\n",a);
	 }
	 else{
	 	printf("%d is a odd number\n",a);
	 }
 	return 0;
 }
