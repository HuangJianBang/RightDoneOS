#include<stdio.h>

int main(void) {
    int no;

    printf("please input a number:");
    scanf("%d", &no);

    // 括号中的数值必须为整数
    // case 后面接的值必须为常量，不能为变量
    switch(no % 3) {
        case 0: puts("----");
        break;
        case 1: puts("++++");
        break;
        case 2: puts("****");
        break;
        default: puts("    ");
    }

    return 0; 
}