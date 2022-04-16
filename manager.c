#include <stdio.h>
#include <string.h>
#include "manager.h"
#include <stdlib.h>

int loadFile(Product *p[]){
   int count = 0;
   FILE *fp;
   fp = fopen("product.txt","r"); //파일 오픈
   if (fp == NULL){ //파일이 없으면 종료
        printf("=>파일없음");
        return 0;
    }
    for(int i=0;i<20;i++,count++){
        p[i] = (Product *)malloc(sizeof(Product));
        if(feof(fp)) break;
        fscanf(fp,"\n%[^\n]",p[i]->productName);
        fscanf(fp,"\n%[^\n]",p[i]->productExplain);
        fscanf(fp,"\n%[^\n]",p[i]->productWeight);
        fscanf(fp,"%d",&p[i]->price);
        fscanf(fp,"%d",&p[i]->way);
    }
    fclose(fp);
    printf("로딩 완료!");
    return count;
}
void saveFile(Product *p[],int count){
    FILE *fp;
    fp = fopen("product.txt","wt");
    for(int i=0;i<count;i++){
        if (p[i] == NULL) continue;
        fprintf(fp,"%s\n%s\n%s\n%d\n%d",p[i]->productName, p[i]->productExplain, p[i]->productWeight, p[i]->price, p[i]->way);
    }
    fclose(fp);
    printf("저장 성공!");
}    //상품 데이터를 파일에 저장하는 함수
void searchName(Product *p[],int count){
        char name[100];
        int index=0;
        printf("검색할 상품 이름?");
        getchar();
        scanf("%[^\n]s",name);
        getchar();
        printf("이름\t\t설명\t\t무게\t\t가격\t\t배송방법\n");
        printf("=====================================\n");
        for(int i=0;i<count;i++,index++){
                char *ptr = {NULL};
                ptr = strstr(p[i]->productName,name);
                if(ptr != NULL){
                        readProduct(*p[index]);
                }
        }

}       //상품을 검색하는 함수
void searchExplain(Product *p[],int count){
        char explain[100];
        int index=0;
        printf("검색할 상품 설명?");
        getchar();
        scanf("%[^\n]s",explain);
        getchar();
        printf("이름\t\t설명\t\t무게\t\t가격\t\t배송방법\n");
        printf("=====================================\n");
        for(int i=0;i<count;i++,index++){
                char *ptr = {NULL};
                ptr = strstr(p[i]->productExplain,explain);
                if(ptr != NULL){
                        readProduct(*p[index]);
                }
        }
}
void searchWeight(Product *p[],int count){
        char weight[100];
        int index=0;
        printf("검색할 상품 무게?");
        getchar();
        scanf("%[^\n]s",weight);
        getchar();
        printf("이름\t\t설명\t\t무게\t\t가격\t\t배송방법\n");
        printf("=====================================\n");
        for(int i=0;i<count;i++,index++){
                char *ptr = {NULL};
                ptr = strstr(p[i]->productWeight,weight);
                if(ptr != NULL){
                        readProduct(*p[index]);
                }
        }
}

int selectMenu(){
        int menu;
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        printf("5. 파일저장\n");
        printf("6. 이름검색\n");
        printf("7. 설명검색\n");
        printf("8. 무게검색\n");
        printf("0. 종료\n\n");
        printf("=> 원하는 메뉴는? ");
        scanf("%d", &menu);
        return menu;

}       //수행할 명령을 고르는 함수{
