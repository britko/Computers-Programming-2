#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/*
// �ܰ� 1 
int main(void){
	
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	
	return 0;
}

// �ܰ� 2 
int main(void){
	
	srand(100);
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	
	return 0;
}

// �ܰ� 3 
int main(void){
	
	srand(time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	
	return 0;
}
*/

// �ܰ� 4 
int main(void){
	
	srand(time(NULL));
	printf("%d\n", rand() % 100);
	printf("%d\n", rand() % 100);
	printf("%d\n", rand() % 100);
	printf("%d\n", rand() % 100);
	
	return 0;
}
