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
int updateProduct(Product *p){
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
    printf("=> 수정됨!\n");
    return 1;
}       //상품을 수정하는 함수
void deleteProduct(Product *p[], int count){
        int confirm, index;
        listProduct(p,count);
        printf("번호는? (취소:0)");
        scanf("%d",&index);
        if(index == 0) ;
        else {
                printf("정말 삭제하시겠습니까?(삭제:1)");
                scanf("%d",&confirm);
                if(confirm == 1) {
                        free(p[index-1]);
                        p[index-1] = NULL;
                        printf("삭제됨!");
                }
        }
} //상품을 삭제하는 함수
void listProduct(Product *p[],int count){
        printf("이름\t\t설명\t\t무게\t\t가격\t\t배송방법\n");
        printf("======================================\n");
        for(int i=0;i<count;i++){
                if(p[i]==NULL) continue;
                readProduct(*p[i]);
        }
        printf("\n");
}       //모든 상품을 출력하는 함수

