#include <stdio.h>

int sum(int a,int b);

int main() {
int a=6,b=5;
printf("the value of a+b is %d\n",sum(a,b));
printf("th value of a and b is %d and %d\n",a,b);
 return 0;
}
int sum(int a,int b){
	int c;
	c=a+b;
	return c;
}
