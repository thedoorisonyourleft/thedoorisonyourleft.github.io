#include <stdio.h>

#define MAX_NUM = 3;

int main(){
    int table[3][3] = {
        {41, 26, 84},
        {97, 14, 52},
        {55, 8, 18}
    }

    int i, j;
    int sum[3] = {0, 0, 0};

    for (i=0;i<MAX_NUM;i++){
        for(j=0;j<MAX_NUM;j++){
            sum[i] += table[i][j];
        }
        printf("%d", sum[i]);
    }
}