//202510115125
//3181252863@qq.com
//阮海涛
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int score;

 
    printf("请输入学生的整数成绩（0-100）：");
    scanf("%d", &score);


    if (score < 0 || score > 100) {
        printf("输入的成绩无效，请输入0-100之间的整数。\n");
    }

    else if (score >= 90) {
        printf("等级：A\n");
    }
    else if (score >= 80) {
        printf("等级：B\n");
    }
    else if (score >= 70) {
        printf("等级：C\n");
    }
    else if (score >= 60) {
        printf("等级：D\n");
    }
    else {
        printf("等级：E\n");
    }

    return 0;
}

