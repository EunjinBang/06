#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo();

int main(int argc, char *argv[]) {
	
	int x; 
	int y;
	int result;
	printf("���ϰ� ���� �� ���� �Է��Ͻÿ�:");
	scanf("%d %d", &x, &y);
	result = sumTwo(x, y);
	printf("%d", result);
	
	return 0;
}

int sumTwo(int a, int b)
{
	return (a + b);
}
