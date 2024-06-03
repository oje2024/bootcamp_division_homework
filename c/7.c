/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int mon=0,year=0;
    int arr1[4]={4,6,9,11};
    int arr2[7]={1,3,5,7,8,10,12};
    scanf("%d",&year);
    scanf("%d",&mon);
    for(int i=0;i<4;i++){
        if(arr1[i]==mon){
            printf("30");
            break;
        }
    }
    for(int k=0;k<7;k++){
        if(arr2[k]==mon){
            printf("31");
            break;
        }
    }
    if(mon==2){
        if(year%4==0){
            if(year%100!=0 || year%400==0){
                printf("29");
            }
            else{
                printf("28");
            }
            }
        }
    return 0;
}