#include <stdio.h>
#include "manager.h"
#include <stdlib.h>

int main(void){
        int count = 0, menu;
        Product *p[20];
        count = loadFile(p);
        while (1){
                int index = 0;
                menu = selectMenu();
                if (menu == 0) break;
                if (menu == 1 || menu == 3 || menu == 4){
                        if (count == 0) continue;
                }
                if (menu == 1){
                        listProduct(p,count);
                }
                else if (menu == 2){
                        p[count] = (Product *)malloc(sizeof(Product));
                        count += createProduct(p[count]);
                }
                else if (menu == 3){
                        listProduct(p,count);
                        printf("\n 번호는 (취소 :0)?");
                        scanf("%d",&index);
                        if(index == 0) {
                                continue;
                        }
                        else{
                                updateProduct(p[index-1]);
                        }
                }
                else if (menu == 4){
                        deleteProduct(p,count);
                }else if (menu == 5){
                        saveFile(p,count);
                }else if (menu == 6){
                        searchName(p,count);
                }else if (menu == 7){
                        searchExplain(p,count);
                }else if (menu == 8){
                        searchWeight(p,count);
                }
        }
        printf("종료됨!\n");
        return 0;
}

