
#include<stdio.h>
#include<conio.h>

int main(){
	int x=3,y;
	y=(++x) + (x++);
	printf("%d",y);
	return 0;
}