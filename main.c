#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination();
int factorial();

int combination(int a, int b){
	int x;
	x = factorial(a)/(factorial(b)*factorial(a-b));
	return x;
}

int factorial(int n){
	int i;
	int res = 1;
	for (i = 1; i <= n; i++)
	res = res * i;
	
	return res;
}

int main(int argc, char *argv[]) 
{

	int n;
	int r;
	int result;
	printf("두가지 수를 입력하시오:");
	scanf("%d %d", &n, &r);
	result = combination(n ,r);
	printf("%d", result);
	
	return 0;
}

