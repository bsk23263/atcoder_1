#include <stdio.h>

int main(){
    
    int today_sales = 0;
    int pre_sales = 0;
    static int i_days = 1;
    while(1){
        //今日の売上を入力する
        printf("input [day %d]today_sales: ", i_days);
        scanf("%d", &today_sales);
        //1日目だったら
        if (i_days == 1){
        //    今日の売上を前日の売上値として格納
            pre_sales = today_sales;
            i_days++;
            continue;
        }
        //売上が1,000,000,000より大きかったら
        if (today_sales >= 1,000,000,000){
            printf("invalid number\n");
            return -1;
        }
        int diff_sales = today_sales - pre_sales;
        //今日の売上と前日の売上の差分を計算
        //比較結果に応じて、printfする
        if (diff_sales == 0){
            printf("stay\n");
        } else if (diff_sales < 0){
            printf("down %d\n", -diff_sales);
        } else if (diff_sales > 0){
            printf("up %d\n", diff_sales);
        }

        // 何故か2日目で下のif文を通る  
        // if (i_days == 99,999){
        //     printf("finish correctly\n");
        //     return 0;
        // }
        
        //99,999日目だったら
        //    return 0;
        
        //今日の売上を前日の売上値として格納
        pre_sales = today_sales;
        i_days++;
        //scanf("%*[^\n]%*c");
        //continue;
    }
}

    //今日の売上を入力する
    //1日目だったら
    //    前日の売上値として格納
    //    continue;    //売上が1,000,000,000より大きかったら
    //    return -1;
    //今日の売上と前日の売上の差分を計算
    //比較結果に応じて、printfする

    //99,999日目だったら
    //    return 0;

    //今日の売上を前日の売上値として格納


    //これをwhileでやる