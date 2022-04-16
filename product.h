#include <stdio.h>

typedef struct{ //상품 데이터
    char productName[100]; //상품 이름
    char productExplain[100]; //상품 설명
    char productWeight[100]; //상품 무게 
    int price; //상품 가격
    int way; //상품 배송 방법
}Product;

int createProduct(Product *p); //새로운 상품을 추가하는 함수
void readProduct(Product p); //상품 하나를 출력하는 함수
int updateProduct(Product *p); //상품을 수정하는 함수
void deleteProduct(Product *p[], int count);
void listProduct(Product *p[],int count); //모든 상품을 출력하는 함수
