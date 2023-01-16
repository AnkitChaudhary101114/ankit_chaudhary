#include<stdio.h>

int main(){
	
	int n,i,j;
	printf("Enter the value\n ");
	scanf("%d",&n);
    
	for(i=1;i<=n;i++){
	  char a=65;	
		for(j=1;j<=i;j++){
	     	printf("%c",a);
			++a;
		}
		printf("\n");
	}
	
	return 0;
}
