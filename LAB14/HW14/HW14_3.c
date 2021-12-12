#include <stdio.h>

typedef struct product_info {
	char name[20];
	int price;
	int stock;
} product;

void print_product(const product *prod);

int main() {
	
	product aProduct;
	
	printf("��ǰ��? ");
	scanf("%s", aProduct.name);
	printf("����? ");
	scanf("%d", &aProduct.price);
	printf("���? ");
	scanf("%d", &aProduct.stock);
	
	print_product(&aProduct);
	
	return 0;	
}

void print_product(const product *prod) {
		
	printf("\n[%s %d�� ���:%d]", 
		prod->name, prod->price, prod->stock);
}
