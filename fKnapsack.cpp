#include<stdio.h>


struct product
{
    int itemno ;
    double weight ;
    double value ;
    double priceperweight ;
}item[100], temp;


int main()
{
    int n, i, j ;
    double w ;
    scanf("%lf", &w) ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++){
        item[i].itemno = i+1 ;
        scanf("%lf %lf", &item[i].weight, &item[i].value) ;
        item[i].priceperweight = item[i].value/item[i].weight ;
    }

    for(i = 0 ; i < n ; i++){
        for(j = i+1 ; j < n ; j++){
            if(item[i].priceperweight < item[j].priceperweight){
                temp = item[i] ;
                item[i] = item[j] ;
                item[j] = temp ;
            }
        }
    }

  /*  for(i = 0 ; i < n ; i++){
        printf("%lf ", item[i].priceperweight) ;
    }*/

    double currentweight = 0.0 ;
    double totalProfit = 0.0 ;

    for(i = 0 ; i < n ; i++){
        if(currentweight + item[i].weight <= w){
            currentweight += item[i].weight ;
            totalProfit += item[i].value ;
            printf("Product no %d is taken %.3lf amount. net Profit: %.3lf\n", item[i].itemno, item[i].weight, item[i].value) ;
        }

        else
        {
            double remain = w - currentweight ;
            totalProfit += item[i].priceperweight*remain ;
            printf("Product no %d is taken %.3lf amount. net Profit: %.3lf\n", item[i].itemno, remain, item[i].priceperweight*remain) ;
            break ;
        }
    }
    printf("Total Profit : %.3lf\n", totalProfit) ;

}


/*
10
5
4 13
2 12
1 3
7 10
4 11

*/

