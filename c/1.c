/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    char arr1[3];
    scanf("%s",&arr1);
    for(int i=2;i>-1;i--){
        printf("%c",arr1[i]);
    }

    return 0;
}