#include <stdio.h>

typedef struct product_info {
	char name[20];
	int price;
	int stock;
} product;

void print_product(const product *prod);

int main() {
	
	product aProduct;
	
	printf("제품명? ");
	scanf("%s", aProduct.name);
	printf("가격? ");
	scanf("%d", &aProduct.price);
	printf("재고? ");
	scanf("%d", &aProduct.stock);
	
	print_product(&aProduct);
	
	return 0;	
}

void print_product(const product *prod) {
		
	printf("\n[%s %d원 재고:%d]", 
		prod->name, prod->price, prod->stock);
}
