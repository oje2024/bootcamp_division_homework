/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int num1=0;
    int sum=0;
    while(1){
    scanf("%d",&num1);
    if(num1>0){
        for(int i=num1;i>0;i--){
            sum+=i;
        }
        break;
    }
    else{
        printf("X\n");
    }
    }
    printf("%d",sum);
    return 0;
}