/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int age=0,height=0;
    scanf("%d",&age);
    scanf("%d",&height);
    if(age>=14){
        printf("X");
    }
    else{
        if(height>=160){
            printf("X");
        }
        else{
            printf("O");
        }
    }
    return 0;
}