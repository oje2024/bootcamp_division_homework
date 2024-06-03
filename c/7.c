/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int mon=0,year=0;
    scanf("%d",&year);
    scanf("%d",&mon);
    if(mon==1 || mon==3 || mon==5||mon==7||mon==8||mon==10||mon==12){
        printf("31");
    }
    else{
        if(mon==2){
            if(year%4==0){
                if(year%100!=0 || year%400==0)
                {
                    printf("29");
                }
                else{
                    printf("28");
                }
            }
            else{
                printf("28");
            }
        }
        else{
            printf("30");
        }
    }
    return 0;
}