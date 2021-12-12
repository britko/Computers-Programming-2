#include <stdio.h>
#include <string.h>

typedef struct product_info {
	char name[20];
	int price;
	int stock;
} product;

void print_product(const product *prod);

int main() {
	
	product aProduct[5];
	int i, cnt = 0;
	
	for(i = 0; i < 5; i++) {
		printf("제품명?(.입력하면 종료) ");
		scanf("%s", aProduct[i].name);
		
		if(!strcmp(aProduct[i].name, ".")) break;
		
		printf("가격 재고? ");
		scanf("%d %d", &aProduct[i].price, &aProduct[i].stock);
		cnt++;
	}
	
	for(i = 0; i < cnt; i++) {
		print_product(&aProduct[i]);
	}
	
	
	
	return 0;	
}

void print_product(const product *prod) {
	
	printf("\n[%s %d원 재고:%d]", 
		prod->name, prod->price, prod->stock);
}
