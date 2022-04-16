#include <stdio.h>
#include "product.h"
#include <stdlib.h>


int createProduct(Product *p){
    printf("상품의 이름은? ");
    getchar();
    scanf("%[^\n]s",p->productName);
    getchar();
    printf("상품의 설명은? ");
    scanf("%[^\n]s",p->productExplain);
    getchar();
    printf("상품의 무게는? ");
    scanf("%[^\n]s",p->productWeight);
    getchar();
    printf("상품의 가격은? ");
    scanf("%d",&p->price);
    printf("상품의 배송방법은?(1.새벽배송/2.택배배송)");
    scanf("%d",&p->way);
    return 1;
}
void readProduct(Product p){
    printf("%s\t\t%s\t\t%s\t\t%d\t\t%d\n", p.productName, p.productExplain, p.productWeight, p.price, p.way);
}       //상품 하나를 출력하는 함수
