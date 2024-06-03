/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    char list[5]="aeiuo";
    char name;
    int num=0;
    scanf("%c",&name);
    for(int i=0;i<5;i++){
        if(list[i]==name){
            printf("O");
            break;
        }
        else{
            num+=1;
        }
    }
    if(num==5){
        printf("X");
    }
    return 0;
}