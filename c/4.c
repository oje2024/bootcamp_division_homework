/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int num1=0;
    scanf("%d",&num1);
    if(num1>=90){
        printf("A");
    }
    else if(num1>=80){
        printf("B");
    }
    else if(num1>=70){
        printf("C");
    }
    else if(num1>=60){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;

}