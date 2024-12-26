#include <stdio.h>

// Function declaration
int maxProfit(int* prices, int pricesSize);

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize<2) {
        return 0;
    }

    int profit = 0;
    int maxProfit = 0;
    int min = prices[0];

    for (int i = 1; i<pricesSize; i++) {
        if (min > prices[i]) {
            min = prices[i];
        }
        profit = prices[i] - min;
        if (profit>maxProfit) {
            maxProfit = profit;
        }
    }
    return maxProfit;
}

int main() {
    int pricesSize;
    printf("Enter the number of days: ");
    scanf("%d", &pricesSize);

    int prices[pricesSize];
    printf("Enter the prices: ");
    for (int i = 0; i < pricesSize; i++) {
        scanf("%d", &prices[i]);
    }

    int result = maxProfit(prices, pricesSize);
    printf("Maximum Profit: %d\n", result);

    return 0;
}



// int maxProfit(int* prices, int pricesSize) {
//     if (pricesSize < 2) return 0; // Handle edge case for empty or single-element array

//     int profit = 0;
//     int maxProfit = 0; // Initialize to 0
//     int min = prices[0]; // Start with the first price as the minimum

//     for (int i = 1; i < pricesSize; i++) { // Iterate through all prices
//         if (prices[i] < min) {
//             min = prices[i]; // Update the minimum price
//         }

//         profit = prices[i] - min; // Calculate potential profit
//         if (profit > maxProfit) {
//             maxProfit = profit; // Update the maximum profit
//         }
//     }

//     return maxProfit; // Return the maximum profit after processing all prices
// }
