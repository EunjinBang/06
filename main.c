#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_max();

int main(int argc, char *argv[]) {
	
	int a;
	int b; 
	int maxValue;
	printf("ū ���� ����� �� ���� �Է��Ͻÿ�:");
	scanf("%d %d", &a, &b);
	maxValue = get_max(a, b);
	printf("%d", maxValue);
	
	return 0;
}

int get_max(int x, int y)
{
	int output;
	if (x > y)
		output = x;
	else
		output = y;
	return output;
}
