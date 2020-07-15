#include <stdio.h>

//MrHaddis
//https://github.com/MrHaddis/PAT1027

int main() {
    int number;
    char c;
    scanf("%d %c", &number, &c);
    int i;
    //计算最大的行数 2*i*i-1  是i行需要的星星数量
    for (i = 1; number >= 2 * i * i - 1; i++);
    //-1以后是实际的行数
    i--;
    //算出剩下的数字
    int result = number - 2 * i * i + 1;
    //定义循环数组下标
    int k, l, j;
    //输出沙漏上部分
    for (j = 0; j < i; j++) {
        //打印空格
        for (l = 0; l < j; l++) {
            printf(" ");
        }
        //打印字符
        for (k = 0; k < 2 * (i - l) - 1; k++) {
            printf("%c", c);
        }
        printf("\n");
    }
    //输出沙漏下部分
    //i-1是因为上面输出了中间的一颗星 这里就少了一行
    for (j = 0; j < i - 1; j++) {
        //-2是因为第一行和第二行差2
        //直接从第二行开始
        for (l = 0; l < i - 2 - j; l++) {
            printf(" ");
        }
        for (k = 0; k < 2 * j + 3; k++) {
            printf("%c", c);
        }
        printf("\n");

    }
    printf("%d", result);
    return 0;
}
