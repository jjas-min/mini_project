#include <stdio.h>
#include "product.h"

int loadFile(Product *p[]); //상품 데이터가 저장되어있는 파일을 불러오는 함수
void saveFile(Product *p[],int count); //상품 데이터를 파일에 저장하는 함수
void searchName(Product *p[],int count); //상품 이름을 검색하는 함수
void searchExplain(Product *p[],int count); //상품 설명을 검색하는 함수
void searchWeight(Product *p[],int count); //상품 무게를 검색하는 함수
