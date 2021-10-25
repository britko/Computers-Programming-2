#include <stdio.h>

int getMax(int x, int y, int z);

int main(void){
	
	int num1, num2, num3;
	int bigNumber;
	
	printf("Enter a numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	bigNumber = getMax(num1, num2, num3);
	printf("Big number is %d.\n", bigNumber);
	
	return 0;

}

int getMax(int x, int y, int z){
	
	if(x > y && x > z)
		return x;
	if(y > x && y > z)
		return y;
	if(z > x && z > y)
		return z;
}
