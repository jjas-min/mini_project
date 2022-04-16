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
