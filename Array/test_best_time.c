#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {

    int min = prices[0];
    int profit = 0;

    for(int i = 1; i < pricesSize; i++) {

        if(prices[i] < min) {
            min = prices[i];
        }

        if(prices[i] - min > profit) {
            profit = prices[i] - min;
        }
    }

    return profit;
}

int main() {

    int prices[] = {7,1,5,3,6,4};

    int result = maxProfit(prices, 6);

    printf("Maximum Profit: %d\n", result);

    return 0;
}