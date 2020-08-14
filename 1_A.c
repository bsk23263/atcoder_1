#include <stdio.h>
#include <math.h>

int main(){

    //num = scanf();

    int i = 0;
    char num[] = "012";
    int sum = 0;
    int size = sizeof(num);
    int a_num = 0;

    for(i=0;i<3;i++){
        a_num = num[i] - '0';
        sum *= 10;
        printf("a_num[%d] = %d\n", i, a_num);
        if ( (a_num < 0) || (a_num > 9) ){
            printf("error\n");
            return -1;
        }
        sum += a_num;
    }
    sum *= 2;
    printf("sum = %d\n", sum);

    return 0;
}