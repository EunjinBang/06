#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo();

int main(int argc, char *argv[]) {
	
	int x; 
	int result;
	printf("�����ϰ� ���� ���� �Է��Ͻÿ�:");
	scanf("%d", &x);
	result = square(x);
	printf("%d", result);
	
	return 0;
}

int square(int n)
{
	return (n * n);
}
