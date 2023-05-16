// 構造体の検索

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[10];
    int height;
    int weight;
} Person;

int ncpmp(const Person *x, const Person *y){

    return strcmp(x->name, y ->name); 
}

int main(){
    Person x[] = {
        {"ABE",179,79},
        {"NANGOH",172,63},
        {"SHIBATA",176,52},
        {"SUGIYAMA",165,51}
    };

    int nx = sizeof(x) / sizeof(x[0]);
    int retry = 0;

    puts("検索開始");
    do{
        Person temp,*p;
        printf("名前:"); scanf("%s",temp.name);

        p = bsearch(&temp, x, nx, sizeof(Person), (int (*)(const void*,const void*))ncpmp);

        if(p == NULL)
            puts("失敗");
        else{
            puts("成功");
            printf("x[%d] * %s %dcm %dkg",(int)(p-x),p->name,p->height,p->weight);

            printf("もう一度? 0/1 :"); scanf("%d",retry);
        }
    }while(retry == 1);

    puts("終了");

    return 0;
}