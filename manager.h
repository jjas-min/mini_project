#include <stdio.h>
#include "product.h"

int loadFile(Product *p[]); //상품 데이터가 저장되어있는 파일을 불러오는 함수
void saveFile(Product *p[],int count); //상품 데이터를 파일에 저장하는 함수
